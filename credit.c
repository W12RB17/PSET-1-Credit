// this program checks if a credit number given by the user is an AMEX, MasterCard, Visa or if is invalid, using a checksum
#include <cs50.h>
#include <stdio.h>
#include <math.h>

long get_credit_car_number(void);

int main(void)
{
    long number = get_credit_car_number();
    int number_0 = fmod(number / pow(10,0),10);
    int number_1 = fmod(number / pow(10,1),10);
    int number_2 = fmod(number / pow(10,2),10);
    int number_3 = fmod(number / pow(10,3),10);
    int number_4 = fmod(number / pow(10,4),10);
    int number_5 = fmod(number / pow(10,5),10);
    int number_6 = fmod(number / pow(10,6),10);
    int number_7 = fmod(number / pow(10,7),10);
    int number_8 = fmod(number / pow(10,8),10);
    int number_9 = fmod(number / pow(10,9),10);
    int number_10 = fmod(number / pow(10,10),10);
    int number_11 = fmod(number / pow(10,11),10);
    int number_12= fmod(number / pow(10,12),10);
    int number_13= fmod(number / pow(10,13),10);
    int number_14 = fmod(number / pow(10,14),10);
    int number_15= fmod(number / pow(10,15),10);

    printf("\n%i and %i and %i", number_0, number_1, number_14);
}

long get_credit_car_number(void)
{
    long number;
    do
    {
        number = get_long("\nEnter a Credit card number: ");
    } while (number < 1);    
    return number;
}
