//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
//2018/11/14 更新
#include<stdio.h> 
int main() 
{
   int a;
   scanf("%d",&a);
   if(a%4==0&&a%100!=0||a%400==0)
   printf("%d������\n",a);
   else
   printf("%d��������\n",a);
   return 0;
}
