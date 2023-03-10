#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100 // 최대값 설정

int main()
{
	int num, i; 
	int sum = 0; // 소수들의 합

	for (num = 2; num <= MAX_NUM; num++) { // 0과 1은 소수가 아님으로 2부터 시작
		for (i = 2; i <= num; i++) {
			if (num % i == 0) break; // 나누었을 때 나머지가 0이 되면 정지하라는 의미
		}
		if (num == i) { // 소수는 나누었을 때 1과 자기 자신만을 가지는 숫자임으로 같을 시 소수이다.
			sum += num; // 소수들의 합 구하기
			printf("%d ", num); 
		}
	}
	printf("\n0부터 100까지의 소수의 합은 %d입니다.\n", sum);

	return 0;
}