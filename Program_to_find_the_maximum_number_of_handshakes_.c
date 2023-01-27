#include<stdio.h>
int main()
{
    int a,i,p=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        p=p+i;
    }
    printf("%d",p);
}