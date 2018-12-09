#include<stdio.h>
int main()
{
    int n;
    int x,y;
	scanf("%d\n",&n);
	for(n;n>=1;n--)
	{
	 int a,b,c;
	 scanf("%d %d",&a,&b);
	 x=a;
	 y=b;
	 while(b!=0)
	 {
	 	c =a%b;
	 	a =b;
	 	b =c;
	 }
	 printf("%d\n",x*y/a);
	}
	return 0; 
}
