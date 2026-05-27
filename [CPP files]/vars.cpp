#include <iostream>

int main()
{
    int price;
    price = 2;
    char dollar = '$';
    bool forSale = true;
    float dprice = price;
    // strings
    std::string name = "Alan Walker";
    std::cout << "Hello, " << name << "!" << std::endl << "Welcome to our store." << std::endl;
    if (forSale)
    {
        std::cout << "Eggs are on sale today. Enjoy a 40% discount!" << std::endl;
        // casting
        dprice -= static_cast <float> (price) * 0.4;
    }
    std::cout << "Price of eggs are " << dollar << dprice << " a dozen, discounted from " << dollar << price << " a dozen!" << std::endl;
    return 0;
}
