/* Write a program to evaluate a polynomial at a given point using horners method.*/
int input_degree();
float input_x();
void input_coefficients(int n, float a[n]);
float evaluate_polynomial(int n, float a[n], float x);
void out_put(int n, float a[n], float x, float result);


#include<stdio.h>
int input_degree()
{
  int n;
  printf("Please the Degree of Polynomial \n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("Enter the Value of 'X'\n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
  printf(" Please Enter the co-efficients of polynomial \n");
  for(int i=0;i<=n;i++)
    scanf("%f",&a[i]);
}
float evaluate_polynomial(int n,float a[n],float x)
{
  float y=0;
   for(int i=0;i<n;i++)
     {
       y=y+(a[i]*x);
     }
  return y;
}
void output(int n, float a[n], float x, float result)
{
  printf("(%f)^%d + ",a[n],n);
  printf("(%f)^%d +",a[n-1],n-1);
  printf("(%f)^%d :is \n",a[n-2],n-2);
  printf("Result of polynomial at x=%f is %f \n",x,result);
}
int main()
{
  int n=input_degree();
  float z=input_x();
  float p[n];
  input_coefficients(n,p);
  float poly=evaluate_polynomial(n,p,z);
  output(n,p,z,poly);
  return 0;
}

