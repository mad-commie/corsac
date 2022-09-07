#pragma once
#include <corsac_lib/predefs.hh>
#include <corsac_lib/misc.hh>
#include <map>
#include <set>

namespace corsac_lib::mem
{
    struct memory final
    {
        void bind_object(obj::object *);
        void mark_object(obj::object *);
        std::map<misc::shared_string, package *, misc::shared_string_less> packages;
        memory();
        package *std_package;
    private:
        bool mark_mode;
        std::set<obj::object *> objects;
        friend obj::object;
    };
    
}
