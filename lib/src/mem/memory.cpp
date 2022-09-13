#include <corsac_lib/lib.hh>

namespace corsac_lib::mem
{
    void memory::collect_unmarked()
    {
        auto end = this->objects.end();
        for(auto i = this->objects.begin(); i != end;)
        {
            auto next = std::next(i);
            auto ptr = *i;
            if(ptr->_mark != this->current_mark)
            {
                delete ptr;
                this->objects.erase(i);
            }
            i = next;
        }
        for(auto i: this->thread_memories)
            i->collect_unmarked(this->current_mark);
    }
}