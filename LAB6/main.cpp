#include "array_operations.h"
#include "queue.h"
#include <iostream>

int main() {
    // �������� 1: ������� �������� ������
    int array[] = { 1, 2, 3, 4, 5 };
    int arraySize = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array: ";
    printArray(array, arraySize);

    invertArray(array, arraySize);

    std::cout << "Inverted array: ";
    printArray(array, arraySize);

    // �������� 2: ��������� ���� �����
    Queue<int> myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Queue elements: ";
    myQueue.print();

    std::cout << "Dequeue operation: ";
    myQueue.dequeue();

    std::cout << "Queue elements after dequeue: ";
    myQueue.print();

    std::cout << "Number of elements in the queue: " << myQueue.size() << std::endl;

    return 0;
}
