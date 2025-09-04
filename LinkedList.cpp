#include "LinkedList.h"

using namespace std;

struct LinkedList::Node {
    int value;
    Node* next;
    Node(int val) : value(val), next(nullptr) {}
};

LinkedList::LinkedList() {
    Node* current = head;
    while (current) {
        Node* nextNode = current->next;
        delete current; // Free memory
        current = nextNode;
    }
}

int LinkedList::get(int index) {
    if (index < 0 || index >= size) return -1;
    Node* current = head; // Start from the head
    for (int i = 0; i < index; ++i) { // Traverse to the index
        current = current->next; // Move to the next node
    }
    return current->value; // Return the value at the index
}

void LinkedList::insertHead(int val) {
    Node* newNode = new Node(val);
    if (!head) { // If the list is empty
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head; // Link new node to the former head
        head = newNode; // Update head to the new node
    }
    size++;
}

void LinkedList::insertTail(int val) {
    Node* newNode = new Node(val);
    if (!tail) { // If the list is empty
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode; // Link the old tail to the new node
        tail = newNode; // Update tail to the new node
    }
    size++;
}

bool LinkedList::remove(int index) {
    if (index < 0 || index >= size) return false; // Invalid index
    Node* toDelete;
    if (index == 0) { // Remove head
        toDelete = head;
        head = head->next;
        if (!head) tail = nullptr; // If the list is now empty
    } else {
        Node* current = head;
        for (int i = 0; i < index - 1; ++i) { // Traverse to the node before the one to delete
            current = current->next;
        }
        toDelete = current->next;
        current->next = toDelete->next; // Bypass the node to delete
        if (toDelete == tail) tail = current; // Update tail if needed
    }
    delete toDelete; // Free memory
    size--;
    return true;
}

