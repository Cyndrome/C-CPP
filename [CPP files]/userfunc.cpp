#include <iostream>

void hbd(std::string name)
{
    for (int i = 0; i < 2; i++)
        std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday, dear " << name << "!" << std::endl;
    std::cout << "Happy birthday to you!\n";
}

int main()
{
    std::string name;
    std::getline(std::cin, name);
    hbd(name);
    return 0;
}
