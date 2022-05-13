/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int sum_of_natural(int num)
{
    if(num == 1)
    {
        return 1;
    }
    return num + sum_of_natural(num-1);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int sum = sum_of_natural(num);
    printf("Sum is %d\n", sum);

    return 0;
}
