/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int i,sum=0,rem,n;
    i=1;
    while(i<=5)
    {
        printf("Enter The Numbetr Here:");
        scanf("%d",&n);
        rem=n%10;
        sum=sum+rem;
        i++;
    }
    printf("Sum of Last Digit is=%d",sum);
    
    return 0;
}