#include<stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
  int n;
  float avg=0;
  n=input_n();
  int a[n];
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
}

int input_n()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}

void input(int n, int a[n])
{
  int i=0;
  for(i=0;i<n;i++)
    {
      printf("Enter the array element\n");
      scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
  float sum=0, avg=0;
  int count=0, i=0;
  for(i=0; i<n; i++)
    {
      if((a[i]%2)!=0)
      {
        sum=sum=a[i];
        count++;
      }
    }
  avg=(sum)/count;
  return avg;
}

void output(float avg)
{
  printf("The average of array elements is %f\n",avg);
  return 0;
}