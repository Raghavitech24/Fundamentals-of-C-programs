#include<stdio.h>
#include<string.h>
int main(){
    int mark;
    printf("Enter the mark:");
    scanf("%d",&mark);
    if(mark>35){
        printf("Pass");
    }else{
        printf("Fail");
    }
}