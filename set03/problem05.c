#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
   int a,b,gcd=0;
   a=input();
   b=input();
   gcd=find_gcd(a,b);
   output(a,b,gcd);
   return 0;
}
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d", &n);
  return n;
}

int find_gcd(int a, int b)
{
  int divdn, div, rem=-1, gcd;
  if(a>b)
  {
    divdn=a;
    div=b;
  }

  else
  {
      divdn=b;
      div=a;
  }
  rem=(divdn)%(div);
  if(rem==0)
    gcd=div;
  else
  {
        while(rem!=0)
          {
             divdn=div;
             div=rem;
            rem=(divdn)%(div);
          }
     gcd=div;
  }
  return div;
}

void output(int a, int b, int gcd)
{
  printf("The gdc of %d and %d is %d", a,b,gcd);
}