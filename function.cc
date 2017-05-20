#include <iostream>
#include "header.hh"
#include <math.h>
extern int count;
extern double length;
collection * push (collection *p1){
    collection* p2 = ( collection* ) malloc (32);
    p2->X=(rand()%349 - 300)/10;
    p2->Y=(rand()%349 - 300)/10;
    p2->Z=(rand()%349 - 300)/10;
    p2->p=p1;
    count++;
    return p2;
}

collection * pop (collection *p1){
    collection *p2;
    length = sqrt((p1->X)*(p1->X) + (p1->Y)*(p1->Y) + (p1->Z)*(p1->Z))+length;
    p2 = p1->p;
    free(p1);

    return p2;
}