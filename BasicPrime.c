#include<stdio.h>
#include<math.h>
int main()
{
int num,i,k;
for(num=100;num<=999;num++)
{
k=sqrt(num);
for(i=2;i<=k;i++)
if(num%i==0)break;
if(i>k)printf("%dÊÇËØÊı\n",num);
}
	return 0;
}
