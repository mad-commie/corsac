#pragma once

#include <functional>
#include <memory>
#include <string>
#include <map>
#include <set>
namespace corsac_lib
{
    namespace misc
    {
        template <class T>
        struct shared_less
        {
            bool operator()(const std::shared_ptr<T> &lh, const std::shared_ptr<T> &rh) const
            {
                return this->less(*lh, *rh);
            }
            shared_less() : less({}) {}

        private:
            std::less<T> less;
        };
        using shared_string_less = shared_less<std::string>;
        using shared_string = std::shared_ptr<std::string>;
    }
    int some_fn();
}