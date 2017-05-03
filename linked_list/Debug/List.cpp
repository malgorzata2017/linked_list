#include <iostream>
#include "List.h"
#include "Node.h"
using namespace std; 

List::List(int v)
{
	Node *first = new Node;
	head = first;
	first->value = v; 
	first->next = nullptr; 
	//head = 0;
}



void List::push_front(int val)
{
	Node *my_node=new Node;
	my_node->value = val; 
	my_node->next = head;
	head = my_node; 
}
void List:: print()
{
	Node*w = head; 
	while (w) 
	{
		cout << w->value << endl;
		w = w->next; 
		
	}
}

void List::count()
{
	Node*w = head;
	int c=0; 
	while (w)
	{
		c++;
		w = w->next;

	}
	cout << "liczba elementow listy to  " << c << endl;
}

void List::push_back(int val)
{//dopisac dla konstruktora domniemanego
	//if (head){
	Node *temp = head;
	Node *my_node = new Node;
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = my_node;
	my_node->value = val;
	my_node->next = nullptr;
//}else
	//{ Node *my_node = new Node; head = my_Node; my_node->value = val;
	//my_node->next = nullptr;
//}

}

int List::pop_back()
{
	
	Node *temp=head;
	
	while (temp->next->next)//musmy isc do przedostatniego elementu
	{
		temp = temp->next;
	}
	 
	int e = temp->next->value; //zapamietujemy wartosc
	delete temp->next;  // usuwamy ostatni element
	temp->next = nullptr;
	return e;
}


int List::pop_front()
{

	Node *w= head; 
	int a = w->value;
	head = w->next; 
	delete w;
	return a; 
}

void List:: insert_before(Node *node, int v)
{

}
int List::pop_selected(Node*node)
{
	if (head==node)
	{
		pop_front();
	}
	else
	{
		Node *w = head;
		while (w->next != node)
		{
			w = w->next;
		}

		int a = w->next->value;
		w->next = node->next;
		delete node;
		return a;
	}
}