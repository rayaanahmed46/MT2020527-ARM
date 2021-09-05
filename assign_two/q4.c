#include<stdio.h> //this is an example of empty ascending stack
#include<stdlib.h>

int n, top =0, *stack;
int push(int x){
	if(top==n) 
    {
        printf("Stack is full\n");
        return -1;
    }
    else
    {
    stack[top]=x;
    top=top+1; //SP points to the empty location above the location of latest data
    return 0;
    }
}

int pop(){
	if(top==0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        top=top-1;
        return stack[top];
    }	
}


void print(){
	for(int i=n-1 ; i>-1 ; i--)
    {
         printf("%d ",stack[i]);
    }
	printf("\n\n");
}

int main(){
	
	n = 4;
	
	printf("Initializing the stack with size 4\n\n");
	
	stack = (int*)malloc(n*sizeof(int));  //Allocate n*4 bytes as Stack Memory

	pop();
	push(1);
	push(2);
	push(3);
    push(4);
    push(7);
    push(8);
	
	printf("Displaying elements of the stack -\n");
	
	print();
	
	return 0;
}