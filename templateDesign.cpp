#include <iostream>
using namespace std;

template <typename T>
class Array {
    private:
        T* ptr;
        int size;
    public:
        Array(T arr[], int s );
        print() const;
} ;

template <typename T>
Array<T>::Array(T arr[], int s) {
    ptr = new T[s];
    size = s;
}