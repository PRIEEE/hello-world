//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解
#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,c,x1,x2,d;
    printf("������a,b,c:");
	scanf("%lf%lf%lf",&a,&b,&c);
    d = b * b - 4 * a * c;
    if(d > 0)
    {
      x1 = (-1 * b + sqrt(d)) / (2 * a);
      x2 = (-1 * b - sqrt(d)) / (2 * a);
      printf("x1 = %g,x2 = %g\n",x1,x2);
    }
    else if(d = 0)
    {
      x1 = x2 = (-1 * b) / (2 * a);
      printf("x1 = %g,x2 = %g\n",x1,x2);
    }
    else
    {
      printf("����û��ʵ��\n");
    }
    return 0;
}
