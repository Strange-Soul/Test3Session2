#include<stdio.h>

struct _fraction
{
 int num,den;
};

typedef struct _fraction Fraction;

int find_gcd(int a,int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
int main()
{
  printf("Gcd is %d \n",find_gcd(16,24));
}