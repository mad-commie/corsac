#include <iostream>
#include <corsac_lib/prelude.hh>

using namespace std;

int main()
{
    cout << "Corsac running..." << endl;
    using namespace corsac_lib;
    mem::memory m{};
    auto p1 = new mem::package{&m, misc::shared_string{new std::string{"p1"}}};
    p1->use(m.std_package);
    misc::shared_string str1{ new string{"sym1"}};
    misc::shared_string str2{ new string{"sym1"}};
    auto sym1 = m.std_package->intern(str1);
    m.std_package->export_symbol(sym1);
    auto sym2 = p1->intern(str2);
    cout << (sym1 == sym2) << endl;
    return 0;
}