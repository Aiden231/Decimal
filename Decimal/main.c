#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100 // �ִ밪 ����

int main()
{
	int num, i; 
	int sum = 0; // �Ҽ����� ��

	for (num = 2; num <= MAX_NUM; num++) { // 0�� 1�� �Ҽ��� �ƴ����� 2���� ����
		for (i = 2; i <= num; i++) {
			if (num % i == 0) break; // �������� �� �������� 0�� �Ǹ� �����϶�� �ǹ�
		}
		if (num == i) { // �Ҽ��� �������� �� 1�� �ڱ� �ڽŸ��� ������ ���������� ���� �� �Ҽ��̴�.
			sum += num; // �Ҽ����� �� ���ϱ�
			printf("%d ", num); 
		}
	}
	printf("\n0���� 100������ �Ҽ��� ���� %d�Դϴ�.\n", sum);

	return 0;
}