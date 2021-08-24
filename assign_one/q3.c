#include <stdio.h>
void main()
{
	int i,ev=0,num[20];
	printf("Enter 20 whole numbers\n");
	for(i=0;i<20;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<20;i++)
    {
        if (num[i]%2 == 0)
        {
            ev=ev+1;
        }
    }
    printf("Total number of even numbers is %d",ev);
}