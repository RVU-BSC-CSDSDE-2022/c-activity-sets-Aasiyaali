#include <stdio.h>
#include <math.h>

int input_number(){
    int n;
    scanf("%d",&n);
    return n;
}
int is_prime(int n){
    if(n<=1){
        return 0;
    }
    int c=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            c++;
        }
        if(c>1){
            return 0;
        }
    }
    if(c==1)
        return 1;
    else
        return 0;
}
void output(int n, int result){
    printf("%d is ",n);
    if(result==0)
        printf("not ");
    printf("a prime number");
    
}

int main(){
    int n=input_number();
    int result = is_prime(n);
    output(n,result);
    return 0;
}
