#include "circular_head.h"
void insert(int data)
{
	struct node *new,*temp;
	new = (struct node*)malloc(sizeof(struct node));
	new->d =(struct data_node*)malloc(sizeof(struct data_node));
	
	if(new == NULL)
	{
		printf("Nospace available");
		return -1;
	}
	else
	{
		
		if(head == NULL)
		{
			
			head = new;
			new->d->data = data;
			new->d->next = head;
		}
		else
		{
			temp = head;
			while(temp->d->next != head)
			{
				temp =temp->d->next;
			}
			
			new->d->data = data;
			temp->d->next = new;
			new->d->next = head;
		}
		printf("Node inserted\n");
	}
	
	

}

