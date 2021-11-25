#include "circular_head.h"
void display()
{
	struct node *temp;
	
	if(head == NULL)
	{
		printf("Empty list");
		return;
	}
	temp = head;
	while(temp->d->next != head)
	{
		printf("%d\n",temp->d->data);
		temp = temp->d->next;
		
	}
	printf("%d\n",temp->d->data);
}
