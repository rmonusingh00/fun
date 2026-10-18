#include<stdio.h>
void fun(int *x){
*x=10;
return;
}
int main(){
    int a=5;
    fun(&a);
    printf("%d",a);
    return 0;
}