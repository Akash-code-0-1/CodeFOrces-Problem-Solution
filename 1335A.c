#include<stdio.h>
int main()
{
    int t ,i,n,res;
    scanf("%d",&t);
    int ar[t];
    for(i=1;i<=t;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=t;i++)
    {
        if(ar[i]<3)
        {
            printf("0\n");
        }
        else if(ar[i]>2)
        {
            res=(ar[i]-1)/2;
            printf("%d\n",res);
        }
    }
    
}