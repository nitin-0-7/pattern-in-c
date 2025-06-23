/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of lines :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        
    
        for(int q=1;q<=n-i;q++){
            printf(" ");
        }
        for(int j=1; j<=i;j++){
            printf(" %d",j);
            
        }
        for(int k=1;k<=i-1;k++){
            
            printf(" %d ", a);
            a--;
                    }
        printf("\n");
    }
    
    
    
    return 0;
}