#pragma once
#include <corsac_lib/predefs.hh>

namespace corsac_lib::obj
{
    struct object
    {
        virtual void mark(mem::thread_memory *);
        virtual ~object();

    protected:
        object(mem::thread_memory *);
        bool _mark;

        friend mem::memory;
        friend mem::thread_memory;
    };
}
