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
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
           printf("#");
       }
       for(int k=1;k<=n;k++){
           printf("*");
       }
       printf("\n");
   }
    return 0;
}