#include <stdio.h>
int input(){
    int n;
    scanf("%d",&n);
    return n;
}
int find_fibo(int n){
    int f=0,s=1,t;
    for(int i = 2; i <= n; i++)
    {
        t=f+s;
        f=s;
        s=t;
    }
    return s;
}
void output(int n, int fibo){
    printf("%d",fibo);
}

int main(){
    int n=input();
    int fibo = find_fibo(n);
    output(n,fibo);
    return 0;
}
