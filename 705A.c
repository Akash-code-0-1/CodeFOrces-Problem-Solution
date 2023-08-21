#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0) 
        {
            printf("I hate ");
        } else 
        {
            printf("I love ");
        }
        if (i != a - 1) 
        {
            printf("that ");
        } else 
        {
            printf("it ");
        }
    }
}