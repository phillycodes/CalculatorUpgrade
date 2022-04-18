/*
 * File Name:		TwoNumbers.c
 * Names:			Philben Pierre
 * Course:			COP 2220C at Valencia College
 * Professor:		David Stendel
 * Description:		A simple calculator. The user will be able to select from a menu that has
 *					set operations like addition, multiplication, division, etc, After inputting
 *					two digits. Then it will show the output of the selection
 * Date:			2/15/21
 */

 // Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

/*
 * Name:			main()
 * Parameters:		None.
 * Processes:		A simple calculator. The user will be able to select from a menu that has
 *					set operations like addition, multiplication, division, etc, After inputting
 *					two digits. Then it will show the output of the selection
 * Return Value:	An integer representing an error code; if the program ends without error, zero
 *					will be returned to the calling program or operating system.
 */
int main() {
	// Variables
	/*double num1 = 0.0;
	double num2 = 0.0;*/
	double result = 0.0;
	char menuSelect = '\0';
	const int COUNT = 2;

	int enterPlus = 0;
	do {
		// Menu selection
		printf("Calulator Menu\nEnter a letter in the parenthesis:\n");
		printf("(E)nter two numbers\n(A)dd\n(S)ubtract\n(M)ultiply\n(D)ivide\nA(V)erage\n");
		printf("(G)reater Value\n(P)ositive, Negative, or Zero\n(Q)uit\n");
		scanf_s(" %c", &menuSelect);

		if (menuSelect == 'e' || menuSelect == 'E') {
			enterPlus++;
		}
		if (enterPlus >= 1) {
			switch (menuSelect) {
				case 'e':
				case 'E':
					printf("Enter two numbers separated my a space: ");
					scanf_s("%lf %lf", &num1, &num2);
					break;
				case 'a':
				case 'A':
					result = num1 + num2;
					printf("You Have Selected Add.\nResult: %0.2lf\n", result);
					break;
				case 's':
				case 'S':
					result = num1 - num2;
					printf("You Have Selected Subtract.\nResult: %0.2lf\n", result);
					break;
				case 'm':
				case 'M':
					result = num1 * num2;
					printf("You Have Selected Multiply.\nResult: %0.2lf\n", result);
					break;
				case 'd':
				case 'D':
					if (num2 == 0) {
						printf("\tERROR: You cannot divide by 0. It is Undefined.\n");
						break;
					}
					result = num1 / num2;
					printf("You Have Selected Divide.\nResult: %0.4lf\n", result);
					break;
				case 'v':
				case 'V':
					result = (num1 + num2) / COUNT;
					printf("You Have Selected Average.\nResult: %0.4lf\n", result);
					break;
				case 'g':
				case 'G':
					result = (num1 > num2) ? num1 : num2;
					printf("You Have Selected Greater Value.\nResult: %0.2lf\n", result);
					break;
				case 'p':
				case 'P':
					if (num1 == 0) {
						printf("The first number is 0.\n");
					} else if (num1 < 0) {
						printf("The first number is negative.\n");
					} else {
						printf("The first number is positive.\n");
					}
					if (num2 == 0) {
						printf("The second number is 0.\n");
					} else if (num2 < 0) {
						printf("The second number is negative.\n");
					} else {
						printf("The second number is positive.\n");
					}
					break;
				case 'q':
				case 'Q':
					printf("You have chosen to quit. \n");
					break;
				default:
					printf("\tERROR: You have entered an invalid input!\n");
					break;
			}// close switch
		} else {
			printf("\tERROR: You have not entered two numbers!\n");
		}
	} while (menuSelect != 'q' && menuSelect != 'Q');
	printf("Good-Bye!");
	return 0;
}

