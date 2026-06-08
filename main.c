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

	int h , l ;
	printf("Techo:");
	scanf("%d", &h);
	printf("Piso:");
	scanf("%d", &l);

	float a , b , c;
	int i , j ;
	for ( i = 0 , j = 0; j < 6 ; i++) {

	a = rand()%10 + rand()%2 ;
	b = rand()%2 + 10 ;
	c = l + a/b + rand()%(h-l);
		if (i > 4){
			j++;
			i=0;
			putchar('\n');
		}

	printf("%3.3f\t",  c);
	}
	putchar('\n');

	return 0 ;
}

