#include<stdio.h>
#define COLUMN 4
#define ROW 4  
int main() {

	int a[ROW][COLUMN] = { 0 };
	int num = 1;//수
	int i = 0;	//행
	int j = -1; //열
	int sw = 1; //스위치
	int p = 5; //횟수
	int r = ROW-1;
	int c = COLUMN;
	int count = 1;


	while (1) {
		if (count == 5) { count = 1; }
		
		if(count==1) {
			for (int k = 0; k < c; k++) {
			j = j + sw;
			a[i][j] = num++;
			}
			c = c - 1;
			count++;
			
			}
			
		if (count == 2) {
			for (int k = 0; k < r; k++) {
			i = i + sw;
			a[i][j] = num++;			
			}
			r = r - 1;
			count++;
			sw = sw * -1;
		}
				
		if (count == 3)  {
			
			for (int k = c; k >= 1; k--) {
				j = j + sw;
				a[i][j] = num++;
				
			}
			c = c - 1;
			count++;
			
		}
		if (count == 4) {
			for (int k = r; k >= 1; k--) {
				i = i + sw;
				a[i][j] = num++;
				
			}
			r = r - 1;
			count++;
			
		}
		if (num == ROW * COLUMN)break;
		
		
		
	
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