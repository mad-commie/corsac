#include <corsac_lib/predefs.hh>
#include <corsac_lib/misc.hh>
#include <set>
#include <map>

namespace corsac_lib::mem
{
    struct package final
    {
        package(memory *, misc::shared_string);
        obj::symbol *intern(misc::shared_string);
        void export_symbol(obj::symbol *);
        void unexport_symbol(obj::symbol *);
        void use(package *);
        void unuse(package *, bool);
    private:
    void _unintern(misc::shared_string);
        memory *mem;
    public:
        misc::shared_string name;
    private:
        std::map<misc::shared_string ,obj::symbol *, misc::shared_string_less> symbols;
        std::set<obj::symbol *> exports;
        std::set<package *> used_by;

        friend obj::symbol;
    };
    
}
