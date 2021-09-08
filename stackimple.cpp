#include<stdio.h>
void push();
void pop();
void del();
void peek();
void display();
int size_of_stack,top=-1,i,stack[100];

int main()
{
	while(1)
{

	int option;
	printf("Select the Option..\n");
	printf("1.Push elements.\n");
	printf("2.Pop element.\n");
	printf("3.Peek element.\n");
	printf("4.Display elements.\n");
	
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		default:
			printf("chose valid option.\n");
	}
	
	
}
	
	return 0;
}
void push()
{ 
printf("Enter the size of stack..\n");
scanf("%d",&size_of_stack);
if(top==size_of_stack-1)
{
	printf("Stack overflow.\n");
}
else
{
	for(i=0;i<size_of_stack;i++)
	{
			printf("Enter the %d elements.\n",i+1);
			top=top+1;
			scanf("%d",&stack[top]);
	}
}
	
}
void pop()
{		
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("The deleted element is %d\n",stack[top]);
		top=top-1;
	}

}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty.\n");
	}
	else
	{
		printf("%d\n",stack[top]);
	}

}
void display()
{	if(top==-1)
	{
	printf("stack is empty.\n");
	}
	else
	{
	printf("The all elements of the stack are..\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
		
	}
	
	}


}









