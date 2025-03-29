#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        char ch ="A";
        for(int j=1;j<=i;j++){
            ch=ch+1;
            printf("%c",ch);
        }
    }
    return 0;

}