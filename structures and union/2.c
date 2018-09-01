#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int count(struct node *start,int val)
{
	struct node *current=start;
	int count=0;
	while(current!=NULL)
	{
		if(current->data == val)
			count++;
		current=current->next;
	}
	return count;
}
void push(struct node **start,int val)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next = (*start);
	(*start)=newnode;
}

int main()
{
	struct node *start=NULL;
	push(&start,1);
	push(&start,2);
	push(&start,2);
	push(&start,3);
	push(&start,4);
	push(&start,5);
	printf("%d\n",count(start,2));
	return 0;

}