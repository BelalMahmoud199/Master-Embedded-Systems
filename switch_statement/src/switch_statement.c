/*
 ============================================================================
 Name        : switch_statement.c
 Author      : Belall
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
	char choice;
	float raduis;
	float area, circumference;
	printf("Enter cicle raduis : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &raduis);
	printf("Enter your choice (a to print the area, c to print the circumferece) : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &choice);
	switch (choice)
	{
	case 'a':
	case 'A':
	{
		area=3.14159*raduis*raduis;
		printf("\r\n area is %f\r\n", area);
	}
	break;
	case 'c':
	case 'C':
	{
		circumference=2*3.14159*raduis;
		printf("\r\ncircumference is %f\r\n",
				circumference);

	}
	break;
	default:
		printf("\r\n wrong choice \r\n");

	}
}



