#include <corsac_lib/mem/env.hh>
#include <corsac_lib/lib.hh>

namespace corsac_lib::mem
{
    obj::box *env::get_box(obj::symbol *symbol)
    {
        auto find_res = this->bindings.find(symbol);
        if (find_res != this->bindings.end())
        {
            return find_res->second;
        }
        else if (this->parent)
            return this->parent->get_box(symbol);
        else
            return nullptr;
    }
    obj::object *get_val(obj::symbol *symbol, env *s_env, env *d_env)
    {
        obj::box *b = nullptr;
        if (s_env)
        {
            b = s_env->get_box(symbol);
            if (b)
                return b->cont;
        }
        if (d_env)
        {
            b = d_env->get_box(symbol);
            if (b)
                return b->cont;
        }
        if(not symbol->binding)
            return symbol->binding;
        throw value_not_binded_exception{};
    }
    obj::slot *get_slot(mem::memory *mem, obj::symbol *symbol, env *s_env, env *d_env)
    {
        obj::box *b = nullptr;
        if (s_env)
        {
            b = s_env->get_box(symbol);
            if (b)
                return b->get_slot(mem);
        }
        if (d_env)
        {
            b = d_env->get_box(symbol);
            if (b)
                return b->get_slot(mem);
        }
        if(not symbol->binding)
            return symbol->get_slot(mem);
        throw value_not_binded_exception{};
    }
}