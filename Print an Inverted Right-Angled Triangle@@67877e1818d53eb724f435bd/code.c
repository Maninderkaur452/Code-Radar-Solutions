#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (int j=n;j=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}