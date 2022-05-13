/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int reverse(int num)
{
    static int rev_num;
    int rem;
    if(num > 0)
    {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        reverse(num/10);
    }
    return rev_num;
}

int main()
{
    int num, num1;
    printf("Enter the number: ");
    scanf("%d", &num);
    num1 = reverse(num);
    printf("Reversed number is %d\n", num1);

    return 0;
}
