#include <stdio.h>
int main()
{
    int  N,a,b,c;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b=1;b<=N-a;b++)
        {
            for(c=1;c<=a;c++)
            {
                printf("%d ",c);
            }
            printf("\n");
        }
    }
    return 0;
}