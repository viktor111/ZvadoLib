template<class T>
class List {

private:
    T* first_cell = nullptr;
    int size = 0; // currently occupied elements
    int capacity = 8; // size of the allocated memory

    void resize() {
        int new_cap = capacity * 2; // increased capacity
        T* new_arr = new T[new_cap]; // new arr with new capacity

        for (int k = 0; k < size; ++k) {
            new_arr[k] = first_cell[k]; // copy data from frist array
        }

        delete[] first_cell; // remove first array

        first_cell = new_arr;
        capacity = new_cap;
    }

public:
    List() {
        first_cell = new T[capacity]; // Declare the array in memory
    }

    List(const List& src)
        : size(src.size),
        capacity(src.capacity)
    {
        first_cell = new T[capacity];
        std::copy_n(src.first_cell, size, first_cell);
    }

    List(List&& src)
        : first_cell(src.first_cell),
        size(src.size),
        capacity(src.capacity)
    {
        src.first_cell = nullptr;
        src.size = src.capacity = 0;
    }

    ~List() {
        delete[] first_cell;
    }

    List& operator=(List rhs) {
        List temp(std::move(rhs));
        std::swap(first_cell, temp.first_cell);
        std::swap(size, temp.size);
        std::swap(capacity, temp.capacity);
        return *this;
    }

    void push_back(int number) {
        if (size == capacity) {
            resize();
        }
        first_cell[size] = number;
        ++size;
    }

    int length() {
        return size;
    }

    int first_index_of(int number) {
        for (int k = 0; k < size; k++) {
            
            if (number == first_cell[k]) {
                
                return k;
            }           
        }
        return -1;
    }

    void print(char symb) {
        for (int k = 0; k < size; ++k) {            
            std::cout << first_cell[k] << symb;
        }
    }
};