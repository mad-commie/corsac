#include <corsac_lib/lib.hh>

namespace corsac_lib::obj
{
    void object::mark(mem::thread_memory *tm)
    {
        this->_mark = tm->mem->current_mark;
    }
    object::object(mem::thread_memory *tm): _mark(not tm->mem->current_mark) {}
    object::~object() = default;
}