/*
 * main.c
 *
 ============================================================================
 Name        : firstpro.c
 Author      : ff
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
	if(choice=='a')
	{
	area = 3.14159 * raduis * raduis;
	printf("\r\narea is %f\r\n", area);
	}
	else if (choice=='c')
	{
	circumference = 2 * 3.14159 * raduis;
	printf("\r\ncircumference is %f\r\n",
	circumference);

	}
	else
	printf("\r\nwrong choice\r\n");



}
