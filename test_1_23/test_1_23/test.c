#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
static int count = 0;
void move(char getone, char putone) {

	count++;
	printf("%c-->%c\n", getone, putone);
}

void hanoit(int n, char a, char b, char c) {
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoit(n - 1, a, c, b);
		printf("count :%d\n", count);
		move(a, c);
		hanoit(n - 1, b, a, c);
	}

}

int main() {
	int m;

	scanf("%d", &m);
	hanoit(m, 'A', 'B', 'C');
	printf("count :%d", count);

	system("pause");
	return 0;
}