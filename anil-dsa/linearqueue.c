#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int main()
{
	int q[size];
	int rear=-1,front=0;
	int ch,i;
	printf("\nEnter the 5 elements in the queue :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&q[i]);
	}
	label1:
		//system("cls");
	printf("\nMENU:\n");
	printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
	
			int ele;
			printf("\nEnter the data to be inserted:");
			scanf("%d",&ele);
			if(rear==size-1)
			{
				printf("Queue overflow.\n");
			}
			else
			{
				rear++;
				q[rear]=ele;
			}
			goto label1;
			break;	
		}	
		case 2:
		{
			int ele;
			if(rear<front)
			{
				printf("Queue is empty.\n");
			}
			else
			{
				ele=q[front];
				front++;
				//system("cls");
				printf("Deleted item is :");
				printf("%d\n",ele);
			}
			goto label1;
			break;	
		}
		case 3:
		{
			int i;
			if(rear<front)
			{
				printf("Queue is empty.\n");
			}
			else
			{
				for(i=front;i<=rear;i++)
				{
					//system("cls");
					printf("%d\t\n",q[i]);
				}
			}
			goto label1;
			break;	
			
		}	
		case 4:
		{
			goto label1;
			break;	
		}
	}
	return 0;
}


