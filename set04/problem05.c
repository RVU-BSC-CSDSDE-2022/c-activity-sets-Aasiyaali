#include <stdio.h>
int input_array_size(){
    int n;
    scanf("%d",&n);
    return n;
}
void init_array(int n, int a[n]){
    for(int i=1;i<=n;i++){
        a[i]=1;
    }
}
void erotosthenes_sieve(int n, int a[n]){
    a[0]=0;a[1]=0;
    for(int i=2;i*i<=n;i++){
        if(a[i]==1){
            for(int j=i*i;j<=n;j+=i)
                a[j]=0;
        }
    }
}
void output(int n, int a[n]){
    for(int i=1;i<=n;i++){
        
        if(a[i]){
            printf("%d,",i);
        }
    }
}

int main(){
    int n=input_array_size();
    int a[n+1];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}
