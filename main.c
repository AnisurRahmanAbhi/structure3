#include <stdio.h>

struct nametype {
    char first[20];
    char last[20];
};

struct student {
    int id;
    struct nametype name;
}one;

int main(){
    scanf("%d", &one.id);
    scanf("%s", one.name.first);
    scanf("%s", one.name.last);

    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);

    return 0;
}