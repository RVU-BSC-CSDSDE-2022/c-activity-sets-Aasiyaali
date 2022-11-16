#include<stdio.h>
void input(float *base, float *height)
{
  printf("Enter the base and height of the triangle\n");
  scanf("%f%f",base,height);
}

void find_area(float base , float height, float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float *area)
{
  printf("The area of triangle of height %f and base %f is %f",height,base,*area);
}
int main(void)
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,&area);
  return 0;
}