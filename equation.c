//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,d,e,f,x,y;
   scanf ("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
   if(a*e-b*d!=0&&b*d-a*e!=0) 
   {
   x=(c*e-b*f)/(a*e-b*d);
   y=(c*d-f*a)/(b*d-a*e);
   printf ("x=%f,y=%f",x,y);
   }
   else 
   printf("No result");
   return 0;
}
