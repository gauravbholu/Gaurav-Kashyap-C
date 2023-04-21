#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    float n[a];
    printf("Enter Your No :");
    float sum=1;
    for(int i=0;i<a;i++){
    scanf("%f",&n[i]);
    sum= sum*n[i];
    }
    printf("sum is %f",sum);
    return 0;
}