#include <stdio.h>
#include <math.h>

int main()
{
    int num[20],i,j;
    printf("Enter 20 whole numbers\n");
	for(i=0;i<20;i++)
    {
        scanf("%d",&num[i]);
    }

    i = 0;
    while (i<20)
    {

        int index_of_smallest = i;
        for(j=i; j<20; j++)
        {
            if (num[j]<num[index_of_smallest])
                index_of_smallest = j;
        }

        int temp = num[i];
        num[i] = num[index_of_smallest];
        num[index_of_smallest] = temp;

        i++;
    }
    printf("The sorted numbers in ascending order is:\n");
    for(i=0;i<20;i++)
        printf("%d\n",num[i]);

    return 0;
}
