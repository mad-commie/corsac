#include <corsac_lib/lib.hh>

namespace corsac_lib::mem
{
    thread_memory::thread_memory(memory *mem): mem(mem), objects({}) {}
    thread_memory::~thread_memory()
    {
        this->mem->objects_mutex.lock();
        this->mem->objects.merge(this->objects);
        this->mem->objects_mutex.unlock();
    }
    void thread_memory::collect_unmarked(bool current_mark)
    {
        auto end = this->objects.end();
        for(auto i = this->objects.begin(); i != end;)
        {
            auto next = std::next(i);
            auto ptr = *i;
            if(ptr->_mark != current_mark)
            {
                delete ptr;
                this->objects.erase(i);
            }
            i = next;
        }
    }
}