#include<stdio.h>
#include<conio.h>
int queue[5],front=2,rear=2,value=5;
void main()
{
	if (rear==5-1)
	   cout<<"queue is full";
	else
	{
		if(front==2)
		  front=0;
		rear++;
		queue[rear]=value;
		cout<<"\nInserted";
	}
	   
}
