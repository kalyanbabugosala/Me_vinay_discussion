#include<stdlib.h>
struct node
{
	//int data;
	struct data_node
	{
		int data;
		struct node *next;
	}*d;
	
};
struct node *head;

void insert(int data);
void display();
void bubble_sort();
