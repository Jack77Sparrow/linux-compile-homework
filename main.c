#include <stdio.h>
#include "calc.h"


int main() {
	int choice;
	double num1, num2, result;

	printf(" === Console Calculator === ");
	printf("2. SUM (+)\n");
	printf("2. SUB (-)\n");
	printf("3. MULT (*)\n");
	printf("4. DIV (/)\n");
	printf("Chose operation (1-4): ");
	scanf("%d", &choice);

	if (choice < 1 || choice > 4) {
		printf("False operation");
		return 1;
	}
	
	printf("Write first number: ");
	scanf("%lf", &num1);
	printf("Write second number: ");
	scanf("%lf", &num2);

	switch(choice) {
		case 1:
			result = add(num1, num2);
			printf("Result: %2.lf + %2.lf = %.2lf\n", num1, num2, result);
			break;
		case 2:
			result = subtract(num1, num2);
			printf("Result: %2.lf - %2.lf = %.2lf\n", num1, num2, result);
			break;
		case 3:
			result = multiply(num1, num2);
			printf("Result: %2.lf * %2.lf = %.2lf\n", num1, num2, result);
			break;
		case 4:
			result = divide(num1, num2);
			if (num2 != 0) {
			printf("Result: %2.lf + %2.lf = %.2lf\n", num1, num2, result);
			}
			break;
	}

	return 0;
}
