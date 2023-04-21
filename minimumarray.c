#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    float min=999999;
    float n[a];
    for(int i=0;i<a;i++){
    scanf("%f",&n[i]);
    if(min>n[i]){
    min=n[i];
    }
    }
    printf("min is %f",min);
    return 0;
}