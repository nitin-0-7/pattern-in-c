/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of rows :");
    scanf("%d",&n);
    //printf("Enter no of columns :");
    //scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1 ){
                printf("*");
            }
            else{
                printf(" ");
            }
            
            
            
        }
        printf("\n");
    }

    return 0;
}











