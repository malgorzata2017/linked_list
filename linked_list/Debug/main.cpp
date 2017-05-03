
#include<iostream>
using namespace std; 
#include "List.h"
#include "Node.h"

int main()
{
	List my_list(5); 
	my_list.count();
	my_list.print();
	my_list.pop_back();
	/*
	for (int i = 0; i < 5; i++)
	{
		my_list.push_back(i); 
	}
	my_list.count(); 
	my_list.print();
	Node *i = my_list.head->next; 
	cout<<"zwracany element to "<<my_list.pop_selected(i)<<endl;
	my_list.count();
	my_list.print();
	my_list.push_front(9);
	my_list.count();
	my_list.print();
	my_list.pop_back();
	my_list.count();
	my_list.print();
	my_list.pop_front();
	my_list.count();
	my_list.print();
	system("PAUSE"); 
	*/

}
