#include<stdio.h>
int main()
{
	int m,n,i,j,temp;
	int a[100]; 
	scanf("%d %d\n",&m, &n);	
	
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j+m]);
		}
		
	for(i=n+m-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
    	{
          if(a[j]>a[j+1])
		  { 
		    temp = a[j];
		    a[j] = a[j+1];
		    a[j+1] = temp;
		  }		
	    }
	}
    for(i=0;i<m+n;i++)
    {
        if(i != m+n-1)   
            printf("%d ", a[i]); 
        else
            printf("%d ", a[i]);   
    }
	return 0;
 } 
