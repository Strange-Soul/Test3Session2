#include<stdio.h>

struct _fraction
{
 int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("Enter a fraction to Find Largest \n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
 /* Fraction large;
  int p=f1.num/f1.den;
  int q=f2.num/f2.den;
  int r=f3.num/f3.den;
  if(p<q && p<r)
  {
    large = f1;
  }
  else if(q>r)
  {
    large=f2;
  }
  else
    large=f3;
  return large;*/
  float a,b,c;
  a=f1.num/f1.den;
  b=f2.num/f2.den;
  c=f3.num/f3.den;
  if(a<b && a<c)
    return f1;
  else if(b<c)
    return f2;
  else
    return f3;
  
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction smallest)
{
    printf("%d/%d is smallest among %d/%d , %d/%d and %d/%d \n",smallest.num,smallest.den,f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
  }
int main()
{
  Fraction x,y,z;
  x=input_fraction(); 
  y=input_fraction();
  z=input_fraction();
  Fraction result=Largest_fraction(x,y,z);
  output(x,y,z,result);
  return 0;
}