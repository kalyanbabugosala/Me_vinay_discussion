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
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	display();

	return 0;
}



