#include "myArray.h"

template <typename T>
array<T>::array( int s ) {
    size = s;
    myArray = new T [ size ];

    for ( int i = 0; i < size; i++ ) {
        std::cout << "Enter Array Element " << ( i + 1 ) << ": " ;
        std::cin >> buffer;
        myArray[ i ] = buffer;
    }
}
