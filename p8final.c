#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
  int t;
  for(int i=1;i<b && i<a;i++)
    {
      if(a%i==0 && b%i==0)
        t=i;
    }
  return t;
  }
int array_size()
{
  int n;
  printf("Array of Size \n");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
  Fraction n;
  printf("Enter the Fraction \n");
  scanf("%d %d",&n.num,&n.den);
  return n;
}
void input_n_fractions(int n,Fraction f[n])
{
  printf("Enter the %d Fractions \n",n);
  for(int i=0;i<n;i++)
    f[i]=input_fraction();
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction sum;
  sum.num=f1.num+f2.num;
  sum.den=f1.den+f2.den;
  int g=find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum_n=f[0];
  for(int i=0;i<n;i++)
    {
      sum_n = add_fractions(sum_n,f[i]);
    }
  return sum_n;
}
void output(int n,Fraction f[n],Fraction sum)
{
  for(int i=0;i<n-1;i++)
    {
      printf("Sum of %d/%d+\n",f[i].num,f[i].den);
    }
  printf("%d/%d \n is \n",f[n-1].num,f[n-1].den);
  printf("%d/%d\n",sum.num,sum.den);
}
int main()
{
  int x;
 x=array_size() ;
  Fraction sum,p[x];
  input_n_fractions(x,p);
  sum = add_n_fractions(x,p);
  output(x,p,sum);
  return 0;
}