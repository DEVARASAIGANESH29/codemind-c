#include<stdio.h>
int main()
{
    int a,b,s=0,i;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}