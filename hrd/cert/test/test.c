#include<stdio.h>
int a[5][5];
int main() {
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 4; j >= 0; j--) {
			a[i][j] = k;
			k++;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
