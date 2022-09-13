#pragma once
#include <corsac_lib/basic_includes.hh>
#include <corsac_lib/general.hh>
#include <corsac_lib/predefs.hh>

namespace corsac_lib::mem
{
    struct memory
    {
        std::unordered_set<obj::object *> objects;
        std::mutex objects_mutex;
        std::unordered_set<thread_memory *> thread_memories;
        std::mutex thread_data_mutex;
        bool current_mark;
        void collect_unmarked();
    };
}
