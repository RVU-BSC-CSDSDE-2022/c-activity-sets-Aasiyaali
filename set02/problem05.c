#include<stdio.h>
#include<math.h>

long fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}

int input(int x){
    scanf("%d",&x);
    return x;
}
float borga_X(int x){
    float res=0.0;
    double next = 1.0;
    int i=2;
    while(next >= 0.000001){
        res+=next;
        next=pow(x,i-1)/(fact(2*i-1)*1.0);
        i++;
    }
    return res;
}
void output(int x, float result){
    printf("borga(%d) = %f",x,result);
}

int main(){
    int x;
    x=input(x);
    float result = borga_X(x);
    output(x,result);
    return 0;
}

