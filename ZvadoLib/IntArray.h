#include<malloc.h>

class IntArray {

private:
    int* first_cell = nullptr;
    int size = 0; // currently occupied elements
    int capacity = 8; // size of the allocated memory

public:
    IntArray() {
        first_cell = new int[capacity]; // Declare the array in memory
    }

    IntArray(const IntArray& src)
        : size(src.size),
        capacity(src.capacity)
    {
        first_cell = new int[capacity];
        std::copy_n(src.first_cell, size, first_cell);
    }

    IntArray(IntArray&& src)
        : first_cell(src.first_cell),
        size(src.size),
        capacity(src.capacity)
    {
        src.first_cell = nullptr;
        src.size = src.capacity = 0;
    }

    ~IntArray() {
        delete[] first_cell;
    }

    IntArray& operator=(IntArray rhs) {
        IntArray temp(std::move(rhs));
        std::swap(first_cell, temp.first_cell);
        std::swap(size, temp.size);
        std::swap(capacity, temp.capacity);
        return *this;
    }

    void push_back(int number) {
        if (size == capacity) {
            int new_cap = capacity * 2; // increased capacity
            int* new_arr = new int[new_cap]; // new arr with new capacity

            for (int k = 0; k < size; ++k) {
                new_arr[k] = first_cell[k]; // copy data from frist array
            }

            delete[] first_cell; // remove first array

            first_cell = new_arr;
            capacity = new_cap;
        }
        first_cell[size] = number;
        ++size;
    }

    int length() {
        return size;
    }

    void print(char symb) {
        for (int k = 0; k < size; ++k) {            
            std::cout << first_cell[k] << symb;
        }
    }
};