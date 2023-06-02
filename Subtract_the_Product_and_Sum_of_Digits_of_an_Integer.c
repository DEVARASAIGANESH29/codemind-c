#include<stdio.h>
int main()
{
	int n,i,c=0,m=1,r,s;
	scanf("%d",&n);
	while(n!=0)
	{
	    r=n%10;
	    n=n/10;
	    c=c+ r;
	    m=m*r;
	}
	s=m-c;
	printf("%d",s);
	
	
	
	
}