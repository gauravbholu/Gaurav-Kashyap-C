#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int n[a];
    printf("Enter Your No :");
    int e=0,o=0;
    for(int i=0;i<a;i++){
    scanf("%d",&n[i]);
    if(n[i]%2==0){
        e= e+1;
    }
    if(n[i]%2!=0){
      o=o+1;
    }
    }
    printf("Even no is %d\n",e);
    printf("Odd no is %d\n",o);
    return 0;
}