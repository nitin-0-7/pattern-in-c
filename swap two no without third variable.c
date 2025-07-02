/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    
    int m;
    printf("Enter m:");
    scanf("%d",&m);
    
    n=n+m;
    m=n-m;
    n=n-m;
    printf("The value of n is %d\n",n);
    printf("The value of m is %d",m);
    return 0;
}