#include "circular_head.h"


void bubble_sort()
{
	struct node *first,*second;
	int t;
	for(first=head;first->d->next!=head; first=first->d->next)//1 2 3 5 4  f=1
	{
		for(second=first->d->next;second!=head;second=second->d->next) //s=3
		{
			if(second->d->data < first->d->data)//1<2
			{
				t=first->d->data;
				first->d->data=second->d->data;
				second->d->data=t;		
			}
			
			
		}
		
	}
}

