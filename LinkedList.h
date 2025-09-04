#pragma once
#include <vector>

class LinkedList {
	private:
	struct Node;
	Node* head;
	Node* tail;
	int size;
public:
	LinkedList();
	int get(int index);
	void insertHead(int val);
	void insertTail(int val);
	bool remove(int index);
	std::vector<int> getValues();
};
