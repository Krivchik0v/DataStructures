#pragma once
template <typename T>
class MyStack
{
private:
	T* arr = nullptr;
	int size = 0;
	int capacity;
public:
	MyStack(int capacity) {
		this->capacity = capacity;
		arr = new T[capacity];
	}
	void push(T element) {
		arr[size++] = element;
	}
	void pop() {
		size--;
	}
	T top() {
		return arr[size];
	}
	bool empty() {
		return size;
	}
};

