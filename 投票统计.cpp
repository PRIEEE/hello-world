#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Candidate
{
char name[10];
int count;
};

int main()
{
struct Candidate C[3];
struct Candidate QQ;
int a = 0;
for (int i = 0;i < 3;i++)
{
scanf("%s", &C[i].name);
C[i].count = 0;
}
do
{
scanf("%s", &QQ.name);
for (int j = 0;j < 3;j++)
{
   if (strcmp(QQ.name, C[j].name) == 0)
   {
     C[j].count = C[j].count + 1;
   }
}
a = a + 1;
} 
while (strcmp(QQ.name, "END") != 0);
a = a - C[0].count - C[1].count - C[2].count - 1;
for (int j = 0;j < 2;j++)
{
    for (int m = j + 1;m < 3;m++)
    {
       if (strcmp(C[j].name, C[m].name) == 1)
       {
          struct Candidate temp;
          temp = C[j];
          C[j] = C[m];
          C[m] = temp;
        }
    }
}
printf("%s:%d\n%s:%d\n%s:%d\nQQ:%d\n", C[0].name, C[0].count, C[1].name, C[1].count, C[2].name, C[2].count, a);
return 0;
}
