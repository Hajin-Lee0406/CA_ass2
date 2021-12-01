#include <stdio.h>

void main()
{
	int A[5][5]={0}; // 배열 선언
	int R = 0; // 배열의 행
	int C = 0; // 배열의 열 
	int V = 1; // 배열에 입력할 값

	for (int i = 0; i <= 4; i++) {
		int T = R; // 반복 횟수T에 행만큼 대입
		while (T >= 0) {
			A[T][C] = V; 
			V++;
			C++;
			T--; //대각선으로 채우기 위해 행 1 감소, 열 1 증가
		}
		R = R + 1; // 행 1 증가
		C = 0; // 열 초기화
	}
	
	// 남은 부분 채우기
	R = 4;
	C = 1;
	for (int i = 1; i <= 4; i++) {
		int T2 = C;         
		while (T2 <= 4) {
			A[R][T2] = V;
			V++;
			T2++;
			R--; //대각선으로 채우기 위해 행 1 감소, 열 1 증가
		}
		C++;   // 첫번째 열의 인덱스 값이 1씩 증가
		R = 4; // 첫번쩨 행의 인덱스 값은 4로 고정
	}

	//배열출력//
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}