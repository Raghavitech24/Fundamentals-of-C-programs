#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char s[100];
    char c;

    fp=fopen("test.txt","a");
    fputs("\nHi I'm C,C++",fp);
    fclose(fp);
}