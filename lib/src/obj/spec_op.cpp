#include <corsac_lib/lib.hh>
namespace corsac_lib::obj
{
    void spec_op::mark(bool mark)
    {
        if(this->_mark = mark)
            return;
        this->_mark = mark;
    }
    spec_op::spec_op(mem::memory *mem, SPEC_OP op): object(mem), op(op) {}
    spec_op::~spec_op() = default;
}