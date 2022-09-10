#pragma once
#include <corsac_lib/predefs.hh>
#include <corsac_lib/obj/object.hh>

namespace corsac_lib::obj
{
    struct box final : object
    {
        virtual void mark(bool) override;
        slot *get_slot(mem::memory *);
        box(mem::memory *, object *);
        virtual ~box() override;
        object *cont;
    };
}
