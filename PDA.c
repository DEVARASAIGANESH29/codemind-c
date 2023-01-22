#include<stdio.h>
int main()
{
    int n,s=0,rev,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        s=s+i;
        rev=s-n;
    }
    if(rev==n)
    printf("PERFECT");
    else if(rev<n)
    printf("DEFICIENT");
    else
    printf("ABUNDANT");
}