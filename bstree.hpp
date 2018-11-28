#pragma once

#include <iostream>
#include <string>
using std::cout;
using std::string;

template <class T>
class BSTree {
  public:
    BSTree() {
      numNodes = 0;
      root = nullptr;
    }
	
	bool find(T data) {
		// TODO (also recursive version)
	}
	
	T* get(T data) {
		// TODO  (also recursive version)
	}
	
	bool remove(T data) {
		// TODO (also recursive version)
		// this one is hard
	}
	
	void printReverseOrder() {
		// TODO (also recursive version)
	}
	
	// INSERT 
	void insert(T newData) {
		insert(root, newData);
	}

    unsigned int getNumNodes() {
      return numNodes;
    }
	
	void printInOrder() {
		printInOrder(root);
	}

    string toString() {
      return string("");
    }

  private:
    unsigned int numNodes;
    struct Node {
      T data;
      Node* leftChild;
      Node* rightChild;

      Node(T newData) {
        data = newData;
        leftChild = nullptr;
        rightChild = nullptr;
      }
    } *root;
	
	// RECURSIVE INSERT 
	void insert(Node*& n, T newData) {
		if (n == nullptr) {
			n = new Node(newData);
			numNodes++;
		} else if (newData < n->data) {
			insert(n->leftChild, newData);
		} else if (newData > n->data) {
			insert(n->rightChild, newData);
		} else {
			// do nothing
		}
	}
	
	void printInOrder(Node* n) {
		if (n != nullptr) {
			printInOrder(n->leftChild);
			cout << n->data << ' ';
			printInOrder(n->rightChild);
		}
	}
};
