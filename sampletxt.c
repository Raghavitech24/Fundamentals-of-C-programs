#include<stdio.h>
int main(){
    FILE *fp;
    char s[100];
    char c;

    fp=fopen("sample.txt","w");
    fputs("I'm C++\n",fp);
    fputc('f',fp);
    fclose(fp);
}