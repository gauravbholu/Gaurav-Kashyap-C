#include<stdio.h>
int main(){
    int a;
    printf("Enter your no :");
    scanf("%d",&a);

    int b=1;
    int c=1;
    int sum=0;
    printf("fibonacci series\n");
    printf("%d,%d",b,c);
    for(int i=1;i<=a-2;i++){
        sum=b+c;
        b=c;
        c=sum;
            printf(",%d ",sum);

    }
    return 0;
}