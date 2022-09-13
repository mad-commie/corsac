#pragma once
#include <corsac_lib/basic_includes.hh>
#include <corsac_lib/general.hh>
#include <corsac_lib/predefs.hh>

namespace corsac_lib::mem
{
    struct thread_memory final
    {
        thread_memory(memory *mem);
        ~thread_memory();

    private:
        memory *mem;
        std::unordered_set<obj::object *> objects;

        void collect_unmarked(bool);

        friend memory;
        friend obj::object;
    };

}