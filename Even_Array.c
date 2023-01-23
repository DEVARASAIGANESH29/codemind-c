#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int x[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(x[i]%2==0)
        count++;
    }
    if(count>=n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}