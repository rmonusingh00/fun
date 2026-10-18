#include<stdio.h>
int main(){
for(int i=1;i<=5;i++){
for (int j=1; j <=5; j++)
{
        if(i+j>=6){
            printf("* ");
        }
        else{
            printf(" ");
        }
}
printf("\n");
}
for(int i=4;i>=1;i--){
for (int j=1; j <=5; j++)
{
        if(i+j>=6){
            printf("* ");
        }
        else{
            printf(" ");
        }
}
printf("\n");
}
return 0;
}