#include "DynamicArray.h"

DynamicArray::DynamicArray(int capacity) {
    this->capacity = capacity;
    arr = new int[capacity]; // Allocate on the heap
    size = 0;
}

int DynamicArray::get(int i) {
    return arr[i];
}

void DynamicArray::set(int i, int n) {
    arr[i] = n;
}

void DynamicArray::pushback(int n) { // Add to the end of the array
    if (size == capacity) {
        resize();
    }
    arr[size++] = n;
}

int DynamicArray::popback() { // Remove from the end of the array
    return arr[--size];
}

void DynamicArray::resize() { // Double the capacity of the array
    capacity *= 2;
    int* newArr = new int[capacity];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
}

int DynamicArray::getSize() {
    return size;
}

int DynamicArray::getCapacity() {
    return capacity;
}
