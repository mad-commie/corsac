#pragma once
#include <corsac_lib/predefs.hh>

struct corsac_lib::obj::object
{
    virtual void mark(bool) = 0;
    virtual object *eval(mem::memory *, mem::env *);
    virtual ~object();
    protected:
    object(mem::memory *);
    bool _mark;
};
