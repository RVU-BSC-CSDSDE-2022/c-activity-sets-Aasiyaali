#include<stdio.h>

int input_array_size()
{ int n;
  printf("Enter the number of variables you wish to find the sum of.");
  scanf("%d", &n);
  return n;
  }

void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    { printf("Enter the %d numbers you wish to find the sum of:",n);
      scanf("%d",&a[i]);}
  }
int sum_n_array(int n, int a[n])
{int sum=0;
  for(int i=0;i<n;i++)
    {sum = sum + a[i];}
  return sum;
  }
void output(int n, int a[n], int sum)
{
  printf("The sum of the numbers of the array of size %d is %d",n,sum);
  //for(int i=0;i<=n;i++)
// {printf("%d",a[i]);}
  }

int main()
{int c;
int a[c];
int sum;
c = input_array_size();
input_array(c,a);
sum = sum_n_array(c,a);
output(c,a,sum);
return 0;
}
