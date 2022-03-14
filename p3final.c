#include<stdio.h>
int input_number()
{
  int n;
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
    {
      if(n%i==0)
        count=count+1;
    }
  if(count==2)
   return 1;
  else
   return 0;
  }
void output(int n,int composite)
{
  if(composite==2)
    printf("the number is a prime number\n");
  else
    printf("the number is a composite number\n");
}
int main()
{
  int n,composite;
  n=input_number;
  composite=is_composite(n);
  void output(n,composite);
  return 0;
}