#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template <typename T>
struct Node {
    T data;
    Node* next;
};

template <typename T>
class Queue {
private:
    Node<T>* front;
    Node<T>* rear;
    int count;

public:
    Queue();
    ~Queue();

    void enqueue(T element);
    void dequeue();
    void print() const;
    int size() const;
};

template <typename T>
Queue<T>::Queue() : front(nullptr), rear(nullptr), count(0) {}

template <typename T>
Queue<T>::~Queue() {
    while (front != nullptr) {
        Node<T>* temp = front;
        front = front->next;
        delete temp;
    }
    rear = nullptr;
    count = 0;
}

template <typename T>
void Queue<T>::enqueue(T element) {
    Node<T>* newNode = new Node<T>{ element, nullptr };
    if (rear == nullptr) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
    ++count;
}

template <typename T>
void Queue<T>::dequeue() {
    if (front == nullptr) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }

    Node<T>* temp = front;
    front = front->next;
    delete temp;
    --count;

    if (front == nullptr) {
        rear = nullptr;
    }
}

template <typename T>
void Queue<T>::print() const {
    Node<T>* current = front;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
int Queue<T>::size() const {
    return count;
}

#endif // QUEUE_H
