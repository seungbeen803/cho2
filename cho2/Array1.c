#include <stdio.h>
#define SIZE 11

int main(void)
{
	// 준비
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', '\0' };
	int index, i;
	char value;
	printf("삽입위치 : ");
	scanf_s("%d", &index);
	getchar(1); // enter키를 한 번 날려버리는 역할
	printf("삽입 Data : ");
	scanf_s("%c", &value, 1); // %c이면 한 문자인데 반드시 숫자 하나를 받아야한다.
	getchar();
	i = SIZE - 1;
	while (i > index)
	{
		a[i] = a[i - 1]; //  a[i-1] -> i가 오른쪽에서부터 출발
		i--;
	}
	a[SIZE - 1] = '\0'; // null문자를 넣어준다.
	a[index] = value;
	printf("삽입 결과 : %s\n", a);
	return 0;
}