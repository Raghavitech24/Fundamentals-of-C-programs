#include<stdio.h>
#include<string.h>
int main(){
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    if(num1<10 && num1>-10){
        printf("This is single digit");
    }else{
        printf("This is multiple digit");
    }
    return 0;
}