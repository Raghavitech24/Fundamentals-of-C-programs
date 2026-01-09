#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char s[100];
    char c;

    fp=fopen("test.txt","r+");
    fseek(fp,0,SEEK_SET);
    fprintf(fp,"New");
    fclose(fp);
}