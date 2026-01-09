#include<stdio.h>
#include<string.h>
union book{
    int no;
    char author[50];
    float price;
};
union harrypotter{
    int no;
    float price;
};
int main(){
    union book avangers;
    avangers.no=10;
    strcpy(avangers.author,"marvelstudio");
    avangers.price=300.00;

    union harrypotter movie;
    movie.no=20;
    movie.price=250.00;
    
    printf("%f\n",avangers.price);
}