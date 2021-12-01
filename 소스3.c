#include <stdio.h>

void main()
{
	int A[5][5] = {0};
	int N = 26, S = 1, i = -1, j = 0, K = 5;

	while (1) {
		for (int P = 0; P < K; P++) {
			N = N - 1; // 감소하면서 값 대입
			i = i + S;
			A[i][j] = N;
		}
		K = K - 1;  // 변수 K 감소
		if (K <= 0) break;
		for (int P = 0; P < K; P++) {
			N = N - 1; // 감소하면서 값 대입
			j = j + S;
			A[i][j] = N;
		}
		S = S * (-1);
	}

	//배열 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}
