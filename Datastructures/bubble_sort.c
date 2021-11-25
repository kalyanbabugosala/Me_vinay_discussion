#include<stdio.h>
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



