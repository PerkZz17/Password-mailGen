#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

	FILE* file = fopen("List.txt", "w");
	if (file == NULL) {
		printf("Error opening file\n");
		return 1;
	}
	srand((unsigned int)(time(NULL)));

	char char1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

	int userInput;

	printf("Enter the amount of password:mail you want to generate: ");
	scanf("%d", &userInput);
	int index;

	for (int index = 0; index < userInput; index++) {
		for (int j = 0; j < 16; j++) {
			fprintf(file, "%c", char1[rand() % (sizeof char1 - 1)]);
		}
		fprintf(file, ":");
			for (int j = 0; j < 16; j++) {
			fprintf(file, "%c", char1[rand() % (sizeof char1 - 1)]);
		}
		fprintf(file, "@gmail.com");
		fprintf(file, "\n");
	}
	fclose(file);
	return 0;
}
