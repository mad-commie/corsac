#pragma once
#include <corsac_lib/obj/object.hh>

namespace corsac_lib::obj
{
    enum class SPEC_OP {QUOTE, IF, LET};
    struct spec_op final: object
    {
        virtual void mark(bool) override;
        SPEC_OP op;
        spec_op(mem::memory *, SPEC_OP);
        ~spec_op();
    };
}
