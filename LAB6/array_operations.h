#pragma once
#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

#include <iostream>

template <typename T>
void invertArray(T array[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        std::swap(array[i], array[size - i - 1]);
    }
}

template <typename T>
void printArray(T array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

#endif // ARRAY_OPERATIONS_H
