#include<stdio.h>
float getnum();
int main()
{
    float i;
    i=getnum();
    printf("%f",i);
    return 0;
}
float getnum()
{
float x;
printf("Enter a number:");
scanf("%f",&x);
return x;
}
