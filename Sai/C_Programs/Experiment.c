//An experiment with pointers and arrays.
#include<stdio.h>
int main()
{
	char *ptr, surname[30];
	printf("What is your surname? ");
	scanf("%s", surname);
	printf("The memory address of your surname is: %p\n", surname);
	ptr = surname;
	printf("The memory address of your surname is: %p\n", ptr);
	ptr ++;
	printf("The memory address after your surname is: %p\n", ptr);
}