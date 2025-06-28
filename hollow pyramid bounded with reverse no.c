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
    int nsp=1;
    int nst=n;
    for(int i=1;i<=n;i++){
        printf( "%d",i);
    }
    for(int i=n-1;i>=1;i--){
        printf( "%d",i);
    }
    printf("\n");
    for(int i=0;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
        printf("%d",a);
        a++;
    }
    for(int k=1;k<=nsp;k++){
        printf(" ");
        a++;
        
    }
    for(int j=nst;j>=1;j--){
        printf("%d",j);
        
        
    }
    nsp+=2;
    nst--;
    printf("\n");
        
    }
    

    return 0;
}