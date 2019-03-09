#include <iostream>

class CSample {
    int* x;
    int N;

    public:
        //default constructor
        CSample() : x(NULL) {}

        // copy constructor with deep copy
        CSample( const CSample& obj ) {
            this->N = N;
            this->x = new int[this->N]; 
        }
        // -operator funciton with deep copy
        void operator=( const CSample & obj ) {
            this->N = obj.N;
            this->x = new int[this->N];
        }

        void AllocateX( int N ) {
            this->N = N;
            x = new int[this->N];
        } 

        int* getX() {
            return x;
        }
        ~CSample() {
            delete[] x;
        }
} ;

