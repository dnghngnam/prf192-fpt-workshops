#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int intRandom(int a, int b);

int main(int argc, char *argv[]) {
	int total, check, count = 1, a, b;
	char c;
	
	srand(time(NULL));
	
	do {
		system("cls");
		printf("Dice Thrower\n");
		printf("============\n");
		printf("Total sought : ");
		check = scanf("%d%c", &total, &c);
		fflush(stdin);
	} while (check != 2 || c != '\n' || total < 2 || total > 12);
	
	do {  
		a = intRandom(1, 6);
		b = intRandom(1, 6);
		printf("Result of throw %d: %d + %d\n", count, a, b);
		count++;
	} while (a + b != total);
	
	printf("You got your total in %d throws!", --count);
	return 0;
}

int intRandom(int a, int b) {
	return a + (int)(rand() * (b - a + 1.0) / (1.0 + RAND_MAX));
}

