#pragma once
#include <corsac_lib/obj/object.hh>
#include <corsac_lib/misc.hh>

namespace corsac_lib::obj
{
    struct slot final : object
    {
        virtual void mark(bool) override;
        slot(mem::memory *, object *, object **);
        virtual ~slot() override;
        object *obj;
        object **_slot;
    };
    
}