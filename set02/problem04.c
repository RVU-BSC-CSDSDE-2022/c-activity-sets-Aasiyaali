#include<stdio.h>
#include<math.h>
int main()
{
  float pi=3.14;
  int height,length,stomach_radius,weight;
  printf("enter the height of the camel");
  scanf("%d",&height);
  printf("enter the length of the camel");
  scanf("%d",&length);
  printf("enter the stomach radius");
  scanf("%d",&stomach_radius);
  if(stomach_radius<height)
  {
    if(stomach_radius<length)
    {
      printf("the camel is sick");
    
    }
  }
  else if(height<length)
  {
    if(height<stomach_radius)
    {
      printf("camel is happy");
    }
  }
  else if(length<height)
  {
    if(length<stomach_radius)
    {
      printf("camel is tense");
    }
  }
 else
    printf("cant predict");
 return 0;
    }