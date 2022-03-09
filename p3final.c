#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("Enter the value of n \n");
  scanf("%d",n);
  printf("Enter the value of r \n");
  scanf("%d",r);
}
int ncr(int n,int r)
{
  int a=1;
  for(int i=n;i>1;i--)
    {
      a=a*i;
    }
  int b=1;
  for(int j=n-r;j>1;j--)
    {
      b=b*j;
    }
  int c=1;
  for(int k=r;k>1;k--)
    {
      c=c*k;
    }
 return a/(b*c);
}
void output(int n,int r,int result)
{
  printf("n^cr of %d^c%d is %d \n",n,r,result);
}
int main()
{
  int x,y,c;
  input_n_and_r(&x,&y);
  c=ncr(x,y);
  output(x,y,c);
  return 0;
}