#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int max=-999999;
    int n[a];
    for(int i=0;i<a;i++){
    scanf("%d",&n[i]);
    if(max<n[i]){
    max=n[i];
    }
    }
    printf("max is %d",max);
}