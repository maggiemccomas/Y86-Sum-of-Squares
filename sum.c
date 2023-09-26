#include <stdio.h>

/*
* C program that computes the given summation equation
* Maggie McComas
*/

/*
* Purpose: Computes the summation of 7i - 10 using repeated adds
* Input: int n
* Output: int sum
*/
int summation(int n)
{
    int sum = -7; // value to be returned
    int i = 0;   // index for outer loop
    int j = 0;   // index for inner loop

    do {

        sum = sum - 10;

        do {

            sum = sum + 7;
            j++;

        } while (j < i); // inner loop replicates multiplication while only using addition
        
        i++;
        j = 0;

    } while (i <= n);

    return sum;

}

/*
* Purpose: Loops through n from 0 to 10. 
* Calls summation on n and saves its return value.
* Dependent: summation(n)
* Input: none
* Output: Prints n in decimal and hex
* Prints summation return value on n in decimal and hex
*/
int main(void)
{
    int n = 0;
    int value = 0;

    do {

        value = summation(n);
        printf(" %2d  %2x :   %3d   %08x\n", n, n, value, value);
        n++;

    } while (n < 11);
}