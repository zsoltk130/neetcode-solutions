#include "DynamicArray.h"

class DynamicArray {
private:
    int* arr;
    int size;
	int capacity;
public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity]; // Allocate on the heap
		size = 0;
    }

    int get(int i) {
		return arr[i];
    }

    void set(int i, int n) {
		arr[i] = n;
    }

	void pushback(int n) { // Add to the end of the array
        if (size == capacity) {
            resize();
        }
		arr[size++] = n;
    }

	int popback() { // Remove from the end of the array
		return arr[--size];
    }

	void resize() { // Double the capacity of the array
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
		arr = newArr;
    }

    int getSize() {
		return size;
    }

    int getCapacity() {
		return capacity;
    }
};
