#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char s[100];
    char c;

    fp=fopen("test.txt","w");
    fputs("Hello World!\n",fp);
    fputc('f',fp);
    fclose(fp);
}
