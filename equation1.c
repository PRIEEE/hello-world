//æ±‚è§£ä¸€å…ƒäºŒæ¬¡æ–¹ç¨‹çš„æ ¹
//æŸ¥é˜…sqrt()å‡½æ•°
//æ³¨æ„æœ‰æ²¡æœ‰è§£
#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,c,x1,x2,d;
    printf("ÇëÊäÈëa,b,c:");
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
      printf("·½³ÌÃ»ÓĞÊµ¸ù\n");
    }
    return 0;
}
