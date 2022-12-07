#include<stdio.h>

int input(){
    int n;
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b){
    int gcd=1;
    for(int i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}
void output(int a, int b, int gcd){
    printf("%d",gcd);
}

int main(){
    int a=input();
    int b=input();
    int gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
