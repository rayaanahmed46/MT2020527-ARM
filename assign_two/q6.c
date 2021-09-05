#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int cqueue[SIZE];
int Front=-1;
int Rear=-1;

void display();
void add_to_queue();
void remove_from_queue();

int main()
{
        int choice,item;
        while(1)
        {
            printf("1.add_to_queue Operation\n");
            printf("2.remove_from_queue Operation\n");
            printf("3.Display the Queue\n");
            printf("4.Exit\n");
            printf("Enter your choice of operations : ");
            scanf("%d",&choice);

            switch(choice)
            {
                case 1 :
                        add_to_queue();
                        break;
                case 2 :
                        remove_from_queue();
                        break;
                case 3:
                        display();
                        break;
                case 4:
                        exit(1);
                default:
                        printf("Incorrect choice entered\n");
            }
        }

        return 0;

}

void add_to_queue()
{
    int insert_item;
    printf("Enter the element to be inserted in the Queue\n : ");
    scanf("%d", &insert_item);
    if((Front==0 && Rear==MAX-1) || (Front==Rear+1))
    {
        printf("Queue is Full,Can't add more elements!\n");
        return;
    }
       
    if (Front == -1)  //If queue is empty 
	{
		Front = 0;
		Rear = 0;
	}
	else
	{
		if(Rear == SIZE-1)	//Rear is at last position of queue 
			Rear = 0;
		else
			Rear = Rear+1;
	}
	cqueue[Rear] = insert_item;
}


void remove_from_queue()
{
    if (Front == -1)
	{
		printf("Queue is empty,can't remove data!\n");
		return ;
	}
    printf("Element deleted from queue is : %d\n",cqueue[Front]);
	if(Front == Rear) /* queue has only one element */
	{
		Front = -1;
		Rear=-1;
	}
	else
	{	
		if(Front == SIZE-1)
			Front = 0;
		else
			Front = Front+1;
	}
}


void display()
{
        int i;
        if(Front=-1)
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("The elements of the Queue are :\n");
        i=Front;
        if( Front<=Rear )
        {
                while(i<=Rear)
                        printf("%d ",cqueue[i++]);
        }
        else
        {
                while(i<=SIZE-1)
                        printf("%d ",cqueue[i++]);
                i=0;
                while(i<=Rear)
                        printf("%d ",cqueue[i++]);
        }
        printf("\n");
}
