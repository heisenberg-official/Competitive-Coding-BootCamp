#include<iostream>

struct node
{
	int data;
	node* next;
};	node* head = NULL;

void insert(int x)
{
	node* ptr;
	node* new_node = (node*)malloc(sizeof(node)); 

	new_node->data = x;
	new_node->next = NULL;

	if (head == NULL)
		head = new_node;
	else
	{
		ptr = head;
		while (ptr->next!=NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
}

void display()
{
	int i = 0; 
	node* ptr = head;

	if (head == NULL)
		std::cout << "[EMPTY LINKED LIST]";
	
	while (ptr != NULL)
	{
		std::cout <<"\nNode Element ("<< i++ <<") Data = "<< ptr->data;
		ptr = ptr->next;
	}
}

int main()
{
	insert(1); insert(2); insert(3); insert(4); insert(5);
	display();
	return NULL;
}
