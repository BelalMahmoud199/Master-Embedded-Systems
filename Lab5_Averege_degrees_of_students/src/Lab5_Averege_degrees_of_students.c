/*
 ============================================================================
 Name        : Lab5_Averege_degrees_of_students.c
 Author      : Belall
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int i, nStudents;
	float degree, sum;
	printf("Enter the number of the students:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &nStudents);
	for(i=1, sum=0; i<=nStudents; i++)
	{
	printf("Enter student (%d) degree:", i);
	fflush(stdin); fflush(stdout);
	scanf("%f", &degree);
	sum +=degree;
	}
	printf("Averege students degree is: %f\r\n"
			,sum/nStudents);


}

