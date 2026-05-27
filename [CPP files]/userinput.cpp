#include <iostream>

using str_t = std::string;

int main()
{
    using namespace std;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    str_t name;
    cout << "Enter your name: ";
    getline(cin >> ws, name); // If your string contains spaces, use this
    // 'ws' allows you to enter a string after entering an integer, clearing
    // the input buffer.

    cout << "Hello, " << name << "!\nYou're " << age << " years old." << endl;
    return 0;
}
