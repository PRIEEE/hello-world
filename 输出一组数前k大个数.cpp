#include<stdio.h>
int main()
{
	int n,k,temp;
	int a[100],i,j;
	  scanf("%d %d", &n, &k);
	  for(i=0;i<n;i++){
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
	for(i=0;i<k;i++)
	{
	printf("%d ",a[i]);
	}
	return 0;
}
