#include <stdio.h>
#define SIZE 11

int main(void)
{
	// �غ�
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', '\0' };
	int index, i;
	char value;
	printf("������ġ : ");
	scanf_s("%d", &index);
	getchar(1); // enterŰ�� �� �� ���������� ����
	printf("���� Data : ");
	scanf_s("%c", &value, 1); // %c�̸� �� �����ε� �ݵ�� ���� �ϳ��� �޾ƾ��Ѵ�.
	getchar();
	i = SIZE - 1;
	while (i > index)
	{
		a[i] = a[i - 1]; //  a[i-1] -> i�� �����ʿ������� ���
		i--;
	}
	a[SIZE - 1] = '\0'; // null���ڸ� �־��ش�.
	a[index] = value;
	printf("���� ��� : %s\n", a);
	return 0;
}