//
// Created by student on 20.05.17.
//

#ifndef ZACH_HEADER_HH
#define ZACH_HEADER_HH


struct collection {
    double X;
    double Y;
    double Z;
    collection *p;
};

collection * push (collection *p1);
collection * pop (collection *p1);

#endif //ZACH_HEADER_HH
