/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(void *num1, void *num2)
{
    *(int *)num1 = *(int *)num1 ^ *(int *)num2;
    *(int *)num2 = *(int *)num1 ^ *(int *)num2;
    *(int *)num1 = *(int *)num1 ^ *(int *)num2;
}

int main()
{
    int num1 = 10, num2 = 20;
    printf("Before swapping: \nnum1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: \nnum1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
