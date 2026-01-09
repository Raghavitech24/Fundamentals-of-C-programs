#include<stdio.h>
#include<string.h>
int main(){
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    if(num1%2==0){
        printf("This is even");
    }else{
        printf("This is odd");
    }
}