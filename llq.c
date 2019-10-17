#include<stdio.h>
#include<stdlib.h>
int ch=0;
struct list
	{
	int data;
	struct list *next;
	}node;
void main()
	{
	typedef struct list node;
	node *front,*rear,*c,*p;
	int val;
	while(ch!=4)
		{
		printf("1. push\n2. pop\n3. display\n4. exit\nenter your choice :\n");
		scanf("%d",&ch);
		switch(ch)
			{
			case 1: printf("enter the value :\n");
				scanf("%d",&val);
				c=(node*)malloc(sizeof(node));
				c->data=val;
				c->next=NULL;
				if(front==NULL)
					{
					front=c;
					rear=c;
					}
				else
					{
					rear->next=c;
					rear=c;
					}
				break;
			case 2: if(front==NULL)
					printf("queue empty\n");
				else
					{
					c=front;
					front=front->next;
					free(c);
					}
				break;
			case 3: p=front;
				while(p!=NULL)
					{
					printf("%d->",p->data);
					p=p->next;
					}
				printf("NULL\n");
				break;
			case 4: printf("program terminated....!!!!\n");
				break;
			default: printf("enter a valid input....!!!!\n");
			}
		}
	}
