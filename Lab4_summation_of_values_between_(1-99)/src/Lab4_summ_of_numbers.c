/*
 ============================================================================
 Name        : Lab4_summ_of_numbers.c
 Author      : Belall
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int i, sum=0;
	for(i=1;i<=99;i++)
	{
		sum += i;
	}
	printf("Summation of values between(1 and 99) is : %d",sum);



}


