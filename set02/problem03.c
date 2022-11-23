#include<stdio.h>
#include<math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
//or
void find_weight2(Camel *c);
void output(float weight);

int main()
{
  Camel c;
  float weight;
  c=input();
  weight=find_weight(c);
  find_weight2(&c);
  output(weight);
  return 0;
}

Camel input()
{
  Camel c;
  printf("Enter the radius of the camel\n");
  scanf("%f", &c.radius);
  printf("Enter the height of the camel\n");
  scanf("%f", &c.height);
  printf("Enter the length of the camel\n");
  scanf("%f", &c.length);
  return c;
}

float find_weight(Camel c)
{
c.weight=3.14*pow((c.radius),3)*pow((c.length*c.height),0.5);
  return c.weight;
}

void find_weight2(Camel *c)
{
 c->weight=3.14*pow((c->radius),3)*pow((c->length*c->height),0.5);
  return c->weight;
}

void output(float weight)
{
  printf("The weight of the camel is %f",weight);
}