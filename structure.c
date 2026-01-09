#include<stdio.h>
#include<string.h>
struct book{
    int no;
    char author[50];
    float price;
};
struct harrypotter{
    int no;
    float price;
};
int main(){
    struct book avangers;
    avangers.no=10;
    strcpy(avangers.author,"marvelstudio");
    avangers.price=300.00;

    struct harrypotter movie;
    movie.no=20;
    movie.price=250.00;

    printf("%d\n",avangers.no);
    printf("%s\n",avangers.author);
    printf("%f\n",avangers.price);

    printf("%d\n",movie.no);
    printf("%f\n",movie.price);
}