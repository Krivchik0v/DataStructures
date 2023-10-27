#pragma once
#include<iostream>
using namespace std;
template <typename T>
class MyDequeue
{
private:
	T* arr = nullptr;
	int size = 0;
	int capacity;
public:
	MyDequeue(int capacity) {
		this->capacity = capacity;
		arr = new T[capacity];
	}

	void push_back(T element) {
		arr[size++] = element;
	}
	void push_front(T element) {
		for (int i = size; i > 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = element;
		size++;
	}
	void pop_front() {

		for (int i = 0; i < size; i++) {
			arr[i] = arr[i + 1];
		}
		size--;
	}

	void pop_back() {
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
		return arr[size - 1];
	}

	bool empty() {
		return size;
	}
};

