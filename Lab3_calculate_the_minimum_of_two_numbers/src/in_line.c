/*
 ============================================================================
 Name        : in_line.c
 Author      : Belall
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(int argc, char **argv) {

	int a,b;
	printf("Enter two numbers");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("The minimum is %d\r\n", (a<b)?a:b);



}
