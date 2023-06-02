#include<stdio.h>
int main()
{
    int i,m,n,x,sum=0;
    scanf("%d%d%d",&m,&n,&x);
    for(i=m;i<=n;i++)
    {
        if(i%x==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
}