#include<stdio.h>
int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}

int ncr(int n,int r){
    // printf("before comb");
    int comb = fact(n)/(fact(r)*fact(n-r));
    // printf("%d", comb);
    return comb;
}
int main() {
    int n=5;
    int r=3;
    int s= ncr(n,r);
    printf("%d",s);
    // printf("hello world");
}