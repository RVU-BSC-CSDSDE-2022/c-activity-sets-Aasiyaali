#include<stdio.h>
#include<float.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n(){
    int n;
    scanf("%d",&n);
    return n;
}

Triangle input_triangle(){
    Triangle t;
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}
void input_n_triangles(int n, Triangle t[n]){
    for(int i=0;i<n;i++){
        t[i]=input_triangle();
    }
}

void find_area(Triangle *t){
    t->area=0.5*t->base*t->altitude;        
}

void find_n_areas(int n, Triangle t[n]){
    for(int i=0;i<n;i++){
        find_area(&t[i]);
    }
}

float min(float a,float b){
    return a<b?a:b;
}

Triangle find_smallest_triangle(int n, Triangle t[n]){
    float area=FLT_MAX;
    for(int i=0;i<n;i++){
        area=min(area,t[i].area);
    }
    
    for(int i=0;i<n;i++){
        if(area==t[i].area)
            return t[i];
    }
}
void output(int n, Triangle t[n], Triangle smallest){
    printf("The smallest triangle out of triangles with base and height ");
    for(int i=0;i<n;i++){
        printf("(%f,%f)",t[i].base,t[i].altitude);
        if(i<n-1)
            printf(",");
    }
    printf(" is the triangle having base %f, height %f and area %f",smallest.base,smallest.altitude,smallest.area);
}

int main(){
    int n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_n_areas(n,t);
    Triangle smallest = find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
}
