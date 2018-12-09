#include<stdio.h>
int main()
{
	int a,b,c,n,m,x,y;
	scanf("%d",&m);
	for(n=m;n>=1;n--)
	{
		scanf("%d %d",&x,&y);
	   for(c=0;c<=x;c++)
		{
			a=y-2*x+c;
			b=3*x-y-2*c;
			if(a>=0&&b>=0)
			{
			 printf("%d %d %d\n",a,b,c);
			}
			
		 } 
	}
	return 0;
 } 
