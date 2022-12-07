#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2){
    scanf("%f%f",x1,y1);
    scanf("%f%f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2){
    return sqrtf(pow(x1-x2,2)+pow(y1-y2,2));
}
void output(float x1, float y1, float x2, float y2, float distance){
    printf("The distance between point (%f, %f) and (%f, %f) is %f",x1,y1,x2,y2,distance);
}

int main(){
    float x1,x2,y1,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}
