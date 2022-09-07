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
        void bind(mem::memory *, object *);
        void unintern();

        mem::package *package;
        std::set<mem::package *> imported_by;
        misc::shared_string name;
        box *binding;
        bool uninterned;

        friend mem::package;
    };
}