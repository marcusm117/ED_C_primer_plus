/* Programming Exercise 1.1

You have just been employed by MacroMuscle, Inc. (Software for Hard Bodies). The
company is entering the European market and wants a program that converts inches
to centimeters (1 inch = 2.54 cm). The company wants the program set up so that it
prompts the user to enter an inch value. Your assignment is to define the program
objectives and to design the program (steps 1 and 2 of the programming process).
*/


// Input: a real number whose unit is inch
// Output: a real number whose unit is cm
// Process: Output = Input * 2.54

#include <stdio.h>

int main(void){
    double num_inch = 0;

    printf("Please enter a number whose unit is inch: ");

    // %lf means a doulbe, %f means a float
    scanf("%lf", &num_inch);

    double num_cm = 2.54 * num_inch;

    // %g means a double/float without redundant 0s after the decimal point
    printf("%g inch = %g cm\n", num_inch, num_cm);

    return 0;
}