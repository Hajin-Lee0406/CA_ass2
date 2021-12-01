#include <stdio.h>

void main()
{
	int A[5][5] = { 0 };
	int R = 0;
	int C = 0;
	int V = 1;
	int S = 1;
	int T = 0;

	for (int i = 0; i <= 4; i++) {
		if (S == 1) {
			int T2 = T;
			while (T2 >= 0) {
				A[R][T2] = V;
				V++;
				R++;
				T2--;
			}
			R = 0;
			T++;
		} S = 0;
		if (S == 0) {
			int T3 = T;
			while (T3 >= 0) {
				A[T3][C] = V;
				V++;
				C++;
				T3--;
			}
			C = 0;
			T++;
		} S = 1;
	}

	//////
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d", A[i][j]);
		}
		printf("\n");
	}
}