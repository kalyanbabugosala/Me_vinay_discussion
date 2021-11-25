#include<stdio.h>
//#include<stdlib.h>
#include "circular_head.h"
int main()
{
	insert(30);
	insert(10);
	insert(50);
	insert(90);
	insert(1);
	printf("list before bubble sort");
	display();
	bubble_sort();
	printf("list after bubble sort");
	display();
	
	return 0;
}

