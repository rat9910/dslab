//WRITE a program to transpose a 4*4 matrix
#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[4][4], tran[4][4];
	int i, j;

	printf("Enter the elements of the 4 by 4 matrix\n");
	for (i = 0; i<4; i++)//scanning matrix
		for (j = 0; j<4; j++)
			scanf("%d", &mat[i][j]);

	for (i = 0; i<4; i++)//finding transpose of the martrix
		for (j = 0; j<4; j++)
			tran[i][j] = mat[j][i];

	for (i = 0; i < 4; i++)//printing transpose of the matrix
	{
		for (j = 0; j < 4; j++)
			printf("%d ", tran[i][j]);
		printf("\n");
	}

	_getch();
	return 0;
}
