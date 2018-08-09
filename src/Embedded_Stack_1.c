/*
 ============================================================================
 Name        : Embedded_Stack_1.c
 Author      : mohammed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 2

typedef struct Stack
{
	char *Arr;
	int counter;

}stack;

void push(char *arr , int *count , char item);
void pop(char *arr , int *count , char *item);
int isempty(int count);
int isfull(int count);
void create(char *arr, int *count , int size);




int main(void) {
	stack container;
	char data = 0;


	create(container.Arr , &container.counter , STACK_SIZE);

	push(container.Arr , &container.counter , 5);
	push(container.Arr , &container.counter , 6);
	push(container.Arr , &container.counter , 7);

	pop(container.Arr , &container.counter , &data);

	printf("%d" , data);

	return EXIT_SUCCESS;
}

void create(char *arr, int *count , int size)
{
	(*count) = -1;
	arr = (char*) malloc(size * sizeof(char));
}

int isfull(int count)
{
	return (count == STACK_SIZE-1);
}

int isempty(int count)
{
	return (count == -1);
}
void push(char *arr , int *count , char item)
{
	if(isfull(*count))
		return;
	(*count)++;
	arr[*count] = item;
}

void pop(char *arr , int *count , char *item)
{
	if(isempty(*count))
		return;
	*item = arr[*count];
	(*count)--;
}



