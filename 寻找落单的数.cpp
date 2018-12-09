#include<stdio.h>
int main()
{
	int n,m,temp,i,j;
	int a[100];
	scanf("%d",&n);
	if(n==1)
   {
	scanf("%d",&m);
	printf("%d",m);
	}
	else
	{
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
    	{
          if(a[j]<a[j+1])
		  { temp = a[j];
		    a[j] = a[j+1];
		    a[j+1] = temp;
		  }		
	    }
	}
	i=0;
	while(i<n)
	{
		if(a[i]==a[i+1])
		{
			i=i+2;
		}
		else
		{
			printf("%d",a[i]);
			break;
		}
	}
	}
	return 0;
 } 
