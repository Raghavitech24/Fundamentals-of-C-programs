#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char citizen[20];
    printf("Enter the age:");
    scanf("%d",&age);
    printf("Enter the Citizen:");
    scanf("%s",&citizen);
    if(age>=18 && (citizen=="Indian")==0){
        printf("You are eligible to vote");
    }else{
        printf("You are not eligible to vote");
    }
    return 0;
}