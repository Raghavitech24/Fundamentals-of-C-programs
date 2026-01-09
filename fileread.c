#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char s[100];
    char c;

    fp=fopen("test.txt","r");
    fgets(s,6,fp);
    printf("%s",s);
    fclose(fp);
}