#include <iostream>
#include <iomanip>

void showBalance(double balance)
{
    std::cout << "Your current balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit()
{
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0)
    {
        std::cout << '$' << amount << " has been deposited to your account.";
        return amount;
    }
    else
    {
        std::cout << "Not a valid amount\n";
        return 0;
    }
}

double withdraw()
{
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > 0)
    {
        std::cout << '$' << amount << " has been withdrawn from your account.";
        return amount;
    }
    else
    {
        std::cout << "Not a valid amount\n";
        return 0;
    }
}

int main()
{
    int choice = 0, balance = 0;

    std::cout << "**************************************\n";
    std::cout << "WELCOME TO GOLIATH NATIONAL BANK (GNB)\n";
    std::cout << "**************************************\n";

    do
    {
        std::cout << "Enter your choice:\n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;
        switch (choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw();
                break;
            case 4:
                std::cout << "Thank you for banking with us!\n";
                break;
            default:
                std::cout << "Not a valid choice\n";
        }
        std::cout << std::endl;
    }while(choice != 4);

    return 0;
}
