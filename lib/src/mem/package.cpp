#include <corsac_lib/mem.hh>
#include <corsac_lib/obj.hh>

namespace corsac_lib::mem
{
    package::package(memory *mem, misc::shared_string name) : mem(mem), name(name), symbols({}), exports({}), used_by({})
    {
        mem->packages.insert({name, this});
    }
    obj::symbol *package::intern(misc::shared_string name)
    {
        auto find_res = this->symbols.find(name);
        if (find_res != this->symbols.end())
            return find_res->second;
        else
        {
            auto sym = new obj::symbol(this->mem, name);
            sym->package = this;
            sym->imported_by.insert(this);
            this->symbols.insert({name, sym});
            return sym;
        }
    }
    void package::export_symbol(obj::symbol *symbol)
    {
        this->exports.insert(symbol);
        auto sym_name = symbol->name;
        for (auto i : this->used_by)
            i->symbols.insert({sym_name, symbol});
    }
    void package::unexport_symbol(obj::symbol *symbol)
    {
        this->exports.erase(symbol);
    }
    void package::use(package *package)
    {
        package->used_by.insert(this);
        for(auto i: package->exports)
            this->symbols.insert({i->name ,i});
    }
    void package::unuse(package *package, bool unintern_imported)
    {
        package->used_by.erase(this);
        auto end = this->symbols.end();
        for(auto i = this->symbols.begin(); i != end;)
        {
            auto next = std::next(i);
            if(i->second->package == package)
                this->symbols.erase(i);
            i = next;
        }
    }
    void package::_unintern(misc::shared_string name)
    {
        this->exports.erase(this->symbols[name]);
        this->symbols.erase(name);
    }
}