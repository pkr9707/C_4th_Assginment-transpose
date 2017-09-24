#include <stdio.h>

int main()
{
	int a[10][10], transpose[10][10], r, c, i, j;
	printf("Enter rows and columns of matrix:  ");
	scanf("%d  %d", &r, &c);

	printf("\nEnter elements of matrix:\n");
	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {
		
			printf("Enter element a%d%d: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n\n");
	printf("Entered Matrix: \n");
	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {

			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}


	printf("\n\n");

	printf("Transpose of Matrix:\n");
	for (j = 1; j <= c; j++) {
		for (i = 1; i <= r; i++) {

			printf("%d   ", a[i][j]);
		}

		printf("\n");
	}
	




	getchar();
	getchar();
    return 0;
}

