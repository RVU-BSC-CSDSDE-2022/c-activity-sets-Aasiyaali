#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
  float radius, height, length, weight;
  input_camel_details(&radius, &height, &length);
  weight=find_weight(radius, height, length);
    output(radius, height, length, weight);
}


void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius of the camel\n");
  scanf("%f",radius);
  printf("Enter the height of the camel\n");
  scanf("%f",height);
  printf("Enter the length of the camel\n");
  scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
  float weight;
  weight=pow(radius, 3);
  weight=3.14*(weight)*pow((height*length),0.5);
  return weight;
}


void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius %f,height %f and length %f is %f",radius,height,length,weight);
}