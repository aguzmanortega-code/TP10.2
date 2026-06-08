/*
 * main.c
 *
 *  Created on: Jun 7, 2026
 *      Author: progra
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(NULL));

	int l ;
	scanf("%d", &l);

	float a , b , c;
	int i ;
	for ( i = 0 ; i < 50 ; i++) {

	a = rand()%10 + rand()%2 ;
	b = rand()%2 + 10 ;
	c = a/b + rand()%(l);

	printf("%3.3f\n",  c);
	}
	return 0 ;
}
