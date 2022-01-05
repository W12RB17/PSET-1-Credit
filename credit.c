// this program checks if a credit number given by the user is an AMEX, MasterCard, Visa or if is invalid, using a checksum
#include <cs50.h>
#include <stdio.h>

long get_credit_car_number(void);

int main(void)
{
    get_credit_car_number();
}

long get_credit_car_number(void)
{
    long number;
    do
    {
        number = get_long("\nEnter a Credit card number: ");
    } while (number < 1);    
}
