#pragma once
#include <exception>
namespace corsac_lib
{
    struct non_functional_object_applied_exception : public std::exception
    {
        const char *what() const throw();
    };
    struct package_not_exist_exception : public std::exception
    {
        const char *what() const throw();
    };
    struct value_not_binded_exception : public std::exception
    {
        const char *what() const throw();
    };
}
