#include <stdio.h>
#include <math.h>
int main(){
    int x1,y1,x2,y2;
  int distance;
  distance=calculate_distance(x1,y1,x2,y2);
  printf("The distance between the two points is %d",distance);
  return 0;
}

int calculate_distance(int x1,int y1,int x2,int y2)
{
  int num1,int num2;
    float distance;
    
    // Asking for input
    printf("Enter the X and Y Coordinates of First Point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the X and Y Coordinates of Second Point: ");
    scanf("%d %d", &x2, &y2);
    
    // Calculating the distance
    num1 = x2 - x1;
    num2 = y2 - y1;
    distance = sqrt((num1 * num1) + (num2 * num2));
    
    // Displaying output
    printf("Distance: %.2f", distance);
    return distance;
}