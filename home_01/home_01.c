#include<stdio.h>
#define COLUMN 5
#define ROW 5   
int main() {

	int a[ROW][COLUMN] = { 0 };
	int num = 1;


	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			a[i][j] = num++;
		}
	}

	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COLUMN; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}