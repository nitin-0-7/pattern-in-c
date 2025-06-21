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
    int a=1;
    //printf("Enter no of columns :");
    //scanf("%d",&m);
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a=0;
        
        for(int j=1;j<=i;j++){
            printf("%d",a);
             if(a==0) a=1;
             else a=0;
            
    
            
            
            
            
            
        }
        printf("\n");
    }

    return 0;
}











