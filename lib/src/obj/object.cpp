#include <corsac_lib/obj/object.hh>
#include <corsac_lib/mem.hh>

namespace corsac_lib::obj
{
    object::object(mem::memory *mem): _mark(not mem->mark_mode)
    {
        mem->bind_object(this);
    }
    object::~object() = default;
    object *object::eval(mem::memory *mem, mem::env *s_env, mem::env *d_env)
    {
        return this;
    }
}