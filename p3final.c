#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("Enter the 'n' Value \n");
  scanf("%d",n);
  printf("Enter the 'r' Value \n");
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
  for(int j=r;j>1;j--)
    {
      b=b*j;
    }
  int c=1;
  for(int k=n-r;k>1;k--)
    {
      c=c*k;
    }
  return a/(b*c);
}
void output(int n,int r,int result)
{
  printf("n^Cr of %d^C_%d is %d \n",n,r,result);
}
int main()
{
  int x,y,z;
  input_n_and_r(&x,&y);
  z=ncr(x,y);
  output(x,y,z);
  return 0;
  
}