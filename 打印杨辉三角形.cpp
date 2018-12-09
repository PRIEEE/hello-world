#include<stdio.h>
int main()
{
int N,num; 
scanf("%d",&N);
for(N;N>0;N--)
{
scanf("%d",&num);
int i,j,a[15][15];
    for(i=1;i<=num;i++)                    
    {
     a[i][i]=1;                            
     a[i][1]=1;                             
    }
    for(i=3;i<num+1;i++)                   
       {
		 for(j=2;j<=i-1; j++)               
            {
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			} 
	    }
    for(i=1;i<num+1;i++)
    {
        for(j=1;j<=i;j++)
            {
			printf("%d ",a[i][j]);  
			}            
        printf("\n");                   
    }
 }
    return 0;
}
