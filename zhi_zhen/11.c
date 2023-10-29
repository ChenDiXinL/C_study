#include<stdio.h>

void print(char* c);

int main()
{
    char *c = "Hello";
    print(c);
}

void print(char* c)
{
    while(*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");

}