#include<stdio.h>
int input_size()
{
  int n;
  printf("Enter the size of array \n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the elements of array \n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int find_largest(int n,int a[n])
{
  int largest=0;
  for(int i=0;i<n;i++)
    {
      if(a[i]>a[largest])
        largest=i;
    }
  return largest;
}
void output(int n,int a[n],int largest)
{ for(i=0;i<n;i++)
  printf("Largest number in %d size array = %d of index:%d \n",n,a[n],largest);
}
int main()
{
  int n=input_size();
  int p[n];
  input_array(n,p);
  int l=find_largest(n,p);
  output(n,p,l);
  return 0;
}