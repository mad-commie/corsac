#include <corsac_lib/lib.hh>

namespace corsac_lib::obj
{
    void box::mark(bool mark)
    {
        if(this->_mark = mark)
            return;
        this->_mark = mark;
        this->cont->mark(mark);
    }
    slot *box::get_slot(mem::memory *mem)
    {
        return new slot{mem, this, &this->cont};
    }
    box::box(mem::memory *mem, object *obj): object(mem), cont(obj) {}
    box::~box() = default;
}
