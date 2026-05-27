#include <iostream>

void sixseven();
void sixseven(int a, std::string b);
void sixseven(int a, std::string b, char ch);

int main()
{
    std::string b;
    int a;
    char ch;

    std::cin >> a;
    std::getline(std::cin >> std::ws, b);
    std::cin >> ch;

    sixseven();
    sixseven(a, b);
    sixseven(a, b, ch);

    return 0;
}

void sixseven()
{
    std::cout << 6 << " " << 7 << std::endl;
}

void sixseven(int a, std::string b)
{
    for (int i = 1; i <= a; i++)
        std::cout << 6 << " " << b << " " << 7 << std::endl;
}

void sixseven(int a, std::string b, char ch)
{
    if (b.find(ch) != std::string::npos)
    {
        for (int i = 1; i <= a; i++)
            std::cout << 6 << " " << b << " " << 7 << std::endl;
    }
}
