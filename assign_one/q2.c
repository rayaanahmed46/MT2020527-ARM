#include <stdio.h>
void main()
{
	int i,largest,num[15];
	printf("Enter 15 whole numbers\n");
	for(i=0;i<15;i++)
    {
        scanf("%d",&num[i]);
    }
    largest=num[0];
    for (i=1;i<15;i++)
    {
        if (num[i]>largest)
        {
            largest=num[i];
        }
    }
    printf("The largest of the entered numbers is %d",largest);
}
