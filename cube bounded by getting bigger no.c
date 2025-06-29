/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of lines ");
    scanf("%d",&n);
    int min=0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            if(a>n) a=2*n-i; //i 1234567 5+3=8 2*4=8-5=3 2*n-i
                             //a 1234321
            int b=j;         //j 1234567  6+2=8 2*4=8-6=2 2*n-j
            if(b>n) b=2*n-j;
             if(a<b) min=a;
              else min=b;                                // b 1234321
            printf("%d",min);
        }
        printf("\n");
    }

    return 0;
}