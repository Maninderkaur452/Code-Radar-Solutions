// Your code here...
#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=n;j>=n;j++){
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
    return 0;
}
