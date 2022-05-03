#ifndef LAB11_2_MYARRAY_H
#define LAB11_2_MYARRAY_H

#include <iostream>

template <typename T>
class array {
    int size;
    T *myArray;
    T buffer;

public:
    explicit array( int s );

};

#endif //LAB11_2_MYARRAY_H
