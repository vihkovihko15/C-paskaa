/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03.09.2024 20.16.21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (inclinedwanderer), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>
int main(){
	char A[10];
	double B, V;	
	bool E = true;
	do{
		printf("Lämpötilan muuntaja valitse C tai F:  ");
		scanf("%s",A);
		A[0] = tolower(A[0]);
		if (!strcmp(A, "f")){
			//printf("Valitsit %s\n", A);
			printf("Fahrenheittien määrä?: ");
			if (scanf("%lf",&B) != NULL){
				V = B; V -= 32; V /= 1.8;
		//	printf("Muunnetaan odota hetki.....\n");
				sleep(1);
				printf("Vastaus on %lf Celsiusta\n", V);
				break;
				E = false;
			}
			else{
				printf("ERROR\n");
				continue;
			}
		}
		else if (!strcmp(A, "c")){
			//printf("Valitsit %s\n", A);
			printf("Celsiusten määrä?: ");
			//scanf("%lf",&B);
			if (scanf("%lf",&B) != NULL){
				V = B; V *= 1.8; V += 32;
		//	printf("Muunnetaan odota hetki.....\n");
				sleep(1);
				printf("Vastaus on %lf Fahrenheittiä\n", V);
				break;
				E = false;
			}
			else{
				printf("ERROR\n");
				continue;
			}
		}
		else{
			printf("Valitse vain C tai F\n");
			continue;
		}

		printf(" %s\n", A);
	}while(E == true);
	return 0;	
}
