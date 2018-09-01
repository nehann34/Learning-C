#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void push(struct node **start,int val)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next = (*start);
	(*start)=newnode;
}
int  largest(struct node *start)
{
	struct node *p;
	p=start;
	int max=0;
	while(p !=NULL)
	{
		if((p->data) > max)
			max=p->data;
		p=p->next;
	}
	return max;

}

int main()
{
	struct node *start=NULL;
	int t;
	push(&start,6);
	push(&start,2);
	push(&start,7);
	push(&start,3);
	push(&start,4);
	push(&start,5);
	t=largest(start);
	printf("%d",t);
	// while(start2!=NULL)
	// {
	// 	printf("%d\n",(start2)->data );
	// 	start2=(start2)->next;
	// }
	return 0;

}