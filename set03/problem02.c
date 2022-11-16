#include <stdio.h>

void input_side()
{
  int side;
  printf("enter side\n");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c)
{
  if ( a == b || b==c || a==c)
    return 0;
  else
    return 1;
}
void output(int a, int b, int c, int scalene)
{
  if ( scalene == 0)
  printf("the triangle with sides %d, %d, %d is Scalene\n",a,b,c);
  else
    printf("the triangle with sides %d, %d, %d is not Scalene\n",a,b,c);
  }

int main()
{
    int a,b,c,isscalene;
    a = input_side();
    b = input_side();
    c = input_side();
    isscalene = check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
