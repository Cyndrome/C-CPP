#include <iostream>

using str = std::string;

int main()
{
    using std::cout;
    using std::cin;
    using std::getline;
    using std::endl;

    str name;
    cout << "Enter your nickname: ";
    getline(cin, name);
    while(name.empty())
    {
        cout << "You didn't enter your nickname" << endl;
        cout << "Enter your nickname: ";
        getline(cin, name);
    }
    if (name.length() > 12)
        cout << "Your nickname can't be over 12 characters." << endl;
    else
        cout << "Welcome, " << name << "!" << endl;

    str fname;
    cout << "Enter your full name: ";
    getline(cin, fname);
    while(fname.empty())
    {
        cout << "You didn't enter your full name" << endl;
        cout << "Enter your full name: ";
        getline(cin, fname);
    }
    cout << "Hello, " << fname << "!" << endl;

    str email;
    email = name;
    email.append("@bro-mail.com");
    cout << "Your email is " << email << endl;

    str username;
    username = name;
    username.insert(0, "@");
    cout << "Your username is " << username << endl;

    char ch;
    cout << "Pick a character to find its first occurence in your full name: ";
    cin >> ch;
    if (fname.find(ch) == std::string::npos)
        cout << "Not found!" << endl;
    else
        cout << "The character " << ch << " is first found at index " << fname.find(ch) << " of your full name";

    return 0;
}
