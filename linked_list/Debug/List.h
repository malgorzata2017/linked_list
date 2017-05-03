#pragma once
#include "Node.h"
//#include <iostream>

class List {
public:
	List() {};
	List(int v);
	~List() {};

	Node *head=nullptr;
	void print() ;
	void count();
	void push_front(int v); 
	void push_back(int v); 
	int pop_front();
	int pop_back(); 
	void insert_before(Node *node, int v); 
	int pop_selected(Node *node);

};