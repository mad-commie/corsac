#include <corsac_lib/obj/slot.hh>

namespace corsac_lib::obj
{
    void slot::mark(bool mark)
    {
        if(this->_mark = mark)
            return;
        this->_mark = mark;
        this->obj->mark(mark);
    }
    slot::slot(mem::memory *mem, object *obj, object **_slot): object(mem), obj(obj), _slot(_slot) {}
    slot::~slot() = default;
}