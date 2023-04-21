#include<stdio.h>
int main(){
    int a;
    printf("Enter your no :");
    scanf("%d",&a);
    int product =1;

    for(int i=1;i<a;i++){
        product=product*i;
    }
        printf("Factorial is %d\n",product);

    return 0;
}