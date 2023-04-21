#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int n[a];
    printf("Enter Your No :");
    int sum=0;
    for(int i=0;i<a;i++){
    scanf("%d",&n[i]);
    sum= sum+n[i];
    }
    printf("sum is %d",sum);
    return 0;
}