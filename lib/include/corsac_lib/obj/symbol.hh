#include <corsac_lib/obj/object.hh>
#include <corsac_lib/obj/box.hh>
#include <corsac_lib/misc.hh>
#include <set>

namespace corsac_lib::obj
{
    struct symbol final : object
    {
        virtual void mark(bool) override;
        symbol(mem::memory *, misc::shared_string);
        void bind(object *);
        slot *get_slot(mem::memory *);
        void unintern();

        mem::package *package;
        std::set<mem::package *> imported_by;
        misc::shared_string name;
        object *binding;
        bool uninterned;

        friend mem::package;
    };
}