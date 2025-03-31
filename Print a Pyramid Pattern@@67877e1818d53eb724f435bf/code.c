// Your code here...
#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int k=1;k<=n-i;k++){
         printf(" ");    
        }
        b=b-1;
        for (int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}