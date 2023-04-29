#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *my_constructor - function that will execute before main
 *@__attribute__((constructor)): tells the function to mark.
 *Return:nothing
 */
void __attribute__ ((constructor)) my_constructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
