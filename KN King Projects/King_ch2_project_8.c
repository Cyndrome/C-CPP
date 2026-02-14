#include <stdio.h>

int main()
{
    float loan, rate, installment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter yearly interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &installment);

    rate = (rate / 100) / 12;
    float after_first = loan - installment + rate * loan;
    float after_second = loan - 2 * installment + rate * after_first;
    float after_third = loan - 3 * installment + rate * after_second;

    printf ("Balance remaining after first payment: $%.2f", after_first);
    printf ("\nBalance remaining after second payment: $%.2f", after_second);
    printf ("\nBalance remaining after third payment: $%.2f", after_third);

    return 0;
}
