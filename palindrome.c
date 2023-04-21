#include<stdio.h>
int main(){
    int a;
    int rem;
    int rev=0;
    int b=a;
    printf("Enter Your No :");
    scanf("%d",&a);
    while(a!=0){
        rem = a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("rev is %d",rev);
    return 0;
}