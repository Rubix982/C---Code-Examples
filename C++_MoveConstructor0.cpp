#include <iostream>
#include <algorithm>

#pragma once

class MemoryBlock {
private:
    size_t _length;
    int *_data;

public:
    // Simple constructor that initializes the resource,
    explicit MemoryBlock(size_t length)
        :   _length(length), _data(new int[length]) {
        std::cout << "In MemoryBlock(size_t). length "
            << _length << "." << std::endl;
    }
    
    ~MemoryBlock(void) {
        std::cout << "In ~MemoryBlock(). length = "
            << _length << ".";

        if ( _data != nullptr ) {
            std::cout << "Deleting Resource.";
            // Delete the resource
            delete[] _data;
        }

        std::cout << std::endl; 
    }

    // Copy Constructor
    MemoryBlock(const MemoryBlock & other )
        :   _length(other._length), _data(new int[other._length]) {
            std::cout << "In MemoryBlock(const MemoryBlock&). length = "
                <<  other._length << ".Copying resource." << std::endl;

            std::copy(other._data, other._data + _length, _data);
        }

    // Copy assignment operator
    MemoryBlock & operator=(const MemoryBlock & other) {
        std::cout << "In operator=(const MemoryBlock &). length = " 
            <<  other._length << ". Copying resource." << std::endl;

        if (this != &other) {
            // Free the existing reso
        }
    }
};