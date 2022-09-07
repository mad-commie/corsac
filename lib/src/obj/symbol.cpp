#include <corsac_lib/mem.hh>
#include <corsac_lib/obj.hh>

namespace corsac_lib::obj
{
    void symbol::mark(bool mark)
    {
        if(this->_mark = mark)
            return;
        this->_mark = mark;
        if(this->binding)
            this->binding->mark(mark);
    }
    symbol::symbol(mem::memory *mem, misc::shared_string name)
        : object(mem), package(nullptr),
          imported_by({}),
          name(name), binding(nullptr), uninterned(false) {}
    void symbol::unintern()
    {
        this->package = nullptr;
        this->uninterned = true;
        for (auto i : this->imported_by)
            i->_unintern(this->name);
        this->imported_by.clear();
    }
    void symbol::bind(mem::memory *mem, object *obj)
    {
        if (this->binding)
            this->binding->cont = obj;
        else
            this->binding = new box{mem, obj};
    }
}
