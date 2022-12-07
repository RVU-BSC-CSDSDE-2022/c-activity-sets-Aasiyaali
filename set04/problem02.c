#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
    float area = x1 * (y2 - y3)+ x2 * (y3 - y1) + x3 * (y1 - y2);
    // Condition to check if
    // area is not equal to 0
    if (area == 0)
        return 0;
    else
        return 1;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
    printf("The points (%f, %f), (%f, %f) and (%f, %f) ",x1,y1,x2,y2,x3,y3);
    if(result==0)
        printf("do not ");
    
    printf("form a triangle");
}

int main(){
    float x1,x2,y1,y2,x3,y3,result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result = is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}