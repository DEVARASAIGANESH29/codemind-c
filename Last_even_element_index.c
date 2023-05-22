#include<stdio.h>
int main()
{
    int a,b,i,j,c=0;
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=a-1;i>-1;i--)
    {
        if(x[i]%2==0 || x[i]==0)
        {
            printf("%d",i);
            break;
        }
    }
}