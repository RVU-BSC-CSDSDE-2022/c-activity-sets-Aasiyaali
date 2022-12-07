#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
   int n;
   n=input_array_size();
   int a[n];
   init_array(n, a);
   erotosthenes_sieve(n, a);
   output(n,a);
   return 0;
}
int  input_array_size()
{
    int n;
    printf("Enter the range of numbers\n");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
      a[i]=0;
}

void erotosthenes_sieve(int n, int a[n])
{
   a[2]=a[3]=a[5]=a[7]=1;
   int i=2;
   while(i<=7)
     {
         if(a[i]==1)
         {
             for(int k=i+1; k<n; k++)
               {
                 if(a[k]!=2)
                 {
                  if(k%i==0)
                    a[k]=2;
                   else
                    a[k]=1;
               }
                 }
         }
       i++;
     }
}

void output(int n, int a[n])
{
  for(int i=2; i<n; i++)
    {
        if(a[i]==1)
          printf("%d ", i);
    }
}