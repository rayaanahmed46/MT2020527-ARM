#include <stdio.h>
# define SIZE 4 
void add_to_queue();
void remove_from_queue();
void display();
int queue[SIZE];
int Rear = - 1;
int Front = - 1;
main()
{
    int ch;
    while (1)
    {
        printf("1.add_to_queue Operation\n");
        printf("2.remove_from_queue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            add_to_queue();
            break;
            case 2:
            remove_from_queue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice entered\n");
        }
    }
}
void add_to_queue()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("Queue is Full,Can't add more elements!\n");
    else
    {
        if (Front == - 1)
       
        Front = 0;
        printf("Enter the element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        queue[Rear] = insert_item;
    }
}
void remove_from_queue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Queue is empty so no element can be removed from the queue \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", queue[Front]);
        Front = Front + 1;
    }
} 
  
void display()
{
     
    if (Front == - 1)
        printf(" Queue is empty \n");
    else
    {
        printf("Contents of the Queue are: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} 


  