#include <stdio.h>
void main()
{
	int a,b,c,i,largest;
	printf("Enter three integers\n");
	scanf("%d %d %d",&a,&b,&c);
    int num[3]={a,b,c};
    largest=a;
    for (i=1;i<3;i++)
    {
        if (num[i]>largest)
        {
            largest=num[i];
        }
    }
    printf("The largest of %d,%d and %d is %d",a,b,c,largest);
}
