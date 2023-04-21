#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int n[a];
    int even = 0; int odd =0; int diff;
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
        if(n[i]%2==0){
        even=even+n[i];
        printf("%d\n",even);
        }
        if(n[i]%2!=0){
        odd=odd+n[i];
        printf("%d\n",odd);
        }
        diff=even-odd;
        printf("result is %d",diff);
    }
    return 0;
}