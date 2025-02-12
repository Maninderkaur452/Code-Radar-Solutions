#include<stdio.h>
int main()
{
    int num;
    printf("");
    scanf("%d",&num);
    if(num==1)
    printf("Monday",num);
    else if(num==2)
    printf("Tuesday",num);
    else  if(num==3)
    printf("Wednesday",num);
    else if(num==4)
    printf("Thursday",num);
    else if(num==5)
    printf("Friday",num);
    else if(num==6)
    printf("Saturday",num);
    else if(num==7)
    printf("Sunday",num);
    else 
    printf("invalid number",num)
    return 0;
}