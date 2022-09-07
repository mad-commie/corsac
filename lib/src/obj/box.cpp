#include <corsac_lib/obj/box.hh>

namespace corsac_lib::obj
{
    void box::mark(bool mark)
    {
        if(this->_mark = mark)
            return;
        this->_mark = mark;
        this->cont->mark(mark);
    }
    box::box(mem::memory *mem, object *obj): object(mem), cont(obj) {}
    box::~box() = default;
}
