#pragma once
class DynamicArray
{
    int* arr;
    int size;
    int capacity;
public:
    DynamicArray(int capacity);
    int get(int i);
    void set(int i, int n);
    void pushback(int n);
    int popback();
    void resize();
    int getSize();
    int getCapacity();
};

