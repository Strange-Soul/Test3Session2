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
  /*
for(int i=1;i<=a && i<=b ;i++)
{
 if(a%i==0 && b%i==0)
{
 t=i;
}
}
*/
}
Fraction input_fraction()
{
  Fraction f;
  printf("Input fraction\n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
Fraction add_fraction(Fraction f1,Fraction f2)
{
  Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
void output(Fraction f1,Fraction f2,Fraction sum)
{
  printf("The sumof Two Fractions %d/%d and %d/%d is: %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  int gcd;
  Fraction f1,f2,result;
  f1=input_fraction();
  f2=input_fraction();
  /*gcd=find_gcd();*/
  result=add_fraction(f1,f2);
  output(f1,f2,result);
  return 0;
}