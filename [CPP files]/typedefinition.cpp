#include <iostream>
#include <vector>

// typedef is a new identifier for an existing type.

/*
// typedef std::vector<std::pair<std::string, int>> pairlist_t; // Pair list
typedef std::string str_t;
int main()
{
    using namespace std;

    // pairlist_t paired_list;
    str_t firstName = "Harvey";
    str_t lastName = "Specter";
    cout << "Hello, " << firstName << " " << lastName << "!" << endl;
    return 0;
}
*/

// Typedef has been largely replaced by the 'using' keyword, because it is more
// usable with templates.

using str_t = std::string;
using number_t = int;

int main()
{
    str_t firstName = "Harvey";
    str_t lastName = "Specter";
    number_t age = 42;
    std::cout << "Hello, " << firstName << " " << lastName << "!" << std::endl;
    std::cout << "You're " << age << " years old." << std::endl;
    return 0;
}
