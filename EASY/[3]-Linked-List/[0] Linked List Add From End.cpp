#include<iostream>

struct node
{
	int data;  // Integer Data For Node
	node* next; // Pointer ( Helps To Point At Another Node In Memory )
};

node* head = NULL; // Initialize head element for the starting of the linked list

void insert(int x)
{
	node* ptr; // Temporary pointer used in else condition 
	node* new_node = (node*)malloc(sizeof(node)); // New temporary node for head and other nodes data assigning

	new_node->data = x;  // Integer X stored in new node
	new_node->next = NULL; // Next PTR of new node Pointing To Null ( TAIL Of The L.L) 

	if (head == NULL)
		head = new_node; // if head is null then assign new node as first element in head
	else
	{
		ptr = head; // if head is not null and contatains some element point PTR temp to head pointer for traverse using next while loop
		while (ptr->next!=NULL) // if the current element next is pointing to null then its the last element, And ptr of next will be assigned to new_node in LINE 26
			ptr = ptr->next; // if not true traverse to next element and check again
		ptr->next = new_node;
	}
}

void display()
{
	int i = 0; // stores node element position count
	node* ptr = head; // let ptr be the temporary variable equal to head pointer ( used to traverse in L.L )

	if (head == NULL) // if the linked list is empty then of course the first element itself should be empty (BRUHH!!)
		std::cout << "[EMPTY LINKED LIST]";
	
	while (ptr != NULL) // if the head is not null then we first print data then HOP to next element in the ptr pointer variable itself
	{
		std::cout <<"\nNode Element ("<< i++ <<") Data = "<< ptr->data;
		ptr = ptr->next; // ptr pointing to next node element address itself
	}
}

int main()
{
	insert(1); insert(2); insert(3); insert(4); insert(5); // inserting 5 elements randomly in the linked list 
	display(); // printing all the elements of the linked list
	return NULL;
}
