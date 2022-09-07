#include <corsac_lib/predefs.hh>
#include <corsac_lib/mem.hh>
#include <corsac_lib/obj.hh>

namespace corsac_lib::mem
{
    memory::memory() : packages({}), std_package(new package{this, misc::shared_string{new std::string{"std"}}}), mark_mode(true), objects({}) {}
    void memory::bind_object(obj::object *object)
    {
        this->objects.insert(object);
    }
    void memory::mark_object(obj::object *object)
    {
        object->mark(this->mark_mode);
    }
}
