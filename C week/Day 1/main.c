#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float EGP = 15.67;        // 1 dollar = 15.67 declared as a constant float
    double UserInput = 0.00;        // declaration of the variable which the user will use

    printf("Please input the amount of US Dollars you wish to convert to Egyptian Pounds: ");
    scanf("%lf", &UserInput);    //taking input from user

    UserInput *= EGP;    // the product of what the user entered by the constant

    printf("\n\n\nHere's how much you entered in Egyptian Pounds : %lf" ,UserInput);       // printing the answer after converting the amount in EGP
    printf(" EGP \n");

    return 0;
}
