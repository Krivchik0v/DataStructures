#pragma once
#include<iostream>
using namespace std;
template <typename T>
class MyQueue
{
private:
	T* arr = nullptr;
	int size = 0;
	int capacity;
public:
	MyQueue(int capacity) {
		this->capacity = capacity;
		arr = new T[capacity];
	}

	void push(T element) {
		arr[size++] = element;
	}

	void pop() {
		
		for (int i = 0; i < size; i++) {
			arr[i] = arr[i+1];
		}
		size--;  
	}

	void show() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}

	T front() {
		return arr[0];
	}

	T back() {
		return arr[size-1];
	}

	bool empty() {
		return size;
	}
};

