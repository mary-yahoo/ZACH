#include <iostream>
#include "header.hh"

int count;
double length;

int main() {
    count = 0;
    length = 0;
    collection* p1 = ( collection* ) malloc(32);
    p1->X=0;
    p1->Y=0;
    p1->Z=0;
    p1->p=0;

    int k = rand()%61 - 10;
    printf("Функция вызывается %d раз \n", k);
    for (int i = 0; i < k; i++) {
        p1=push(p1);
    }

    for (int j = 0; j < k; j++) {
        p1=pop(p1);
    }
    printf("Длина коллекции= %d\n", count);
    printf("Длина пути = %f", length);
    return 0;
}