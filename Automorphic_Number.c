#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    s=n*n;
        if((n==s%10)||(n==s%100)||(n==s%1000))
        { 
            printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}