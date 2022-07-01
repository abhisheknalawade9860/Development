#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct node
{
	int data;		//4(memory)
	struct node* next;	//8(memory)
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


int main()
{
	//static memory allocation
	 NODE obj;

	//Dynamic memory allocation
	 PNODE ptr=(PNODE)malloc(sizeof(NODE));

	obj.data=11;		//direct accessing operator .
	obj.next=NULL;

	ptr->data=11;		////indirect accessing operator ->
	ptr->next=NULL;

	return 0;
}