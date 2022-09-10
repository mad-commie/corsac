#include <corsac_lib/exception.hh>
namespace corsac_lib
{
    const char *non_functional_object_applied_exception::what() const throw()
        {
            return "applied non-functional object";
        }
        const char *package_not_exist_exception::what() const throw()
        {
            return "package not exist";
        }
        const char *value_not_binded_exception::what() const throw()
        {
            return "value not binded";
        }
}