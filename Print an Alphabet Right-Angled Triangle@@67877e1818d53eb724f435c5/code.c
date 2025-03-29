// Your code here...
#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        char ch ='A';
        for(int j=1;j<=i;j++){
        
            printf("%d",ch);
            ch=ch+1;
            
        }
        printf("\n");
    }
    return 0;

}