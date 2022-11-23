#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

Triangle input_triangle()
{
  Triangle T;
  printf("Enter the base of the triangle\n");
  scanf("%f",&T.base);
    printf("Enter the altitude of the triangle\n");
  scanf("%f",&T.altitude);
    return T;
}

void find_area(Triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}
void output(Triangle t)
{
  printf("The area of the triangle if %f",t.area);
}

int main()
{
  Triangle T;
  T=input_triangle();
  find_area(&T);
  output(T);
}