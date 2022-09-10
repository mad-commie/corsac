#pragma once
#include <corsac_lib/predefs.hh>
#include <corsac_lib/misc.hh>
#include <map>

namespace corsac_lib::mem
{
    struct env
    {
        env *parent;
        std::map<obj::symbol *, obj::box *> bindings;
        obj::box *get_box(obj::symbol *);
    };
    obj::object *get_val(obj::symbol *, env *, env *);
    obj::slot *get_slot(memory *, obj::symbol *, env *, env *);
}