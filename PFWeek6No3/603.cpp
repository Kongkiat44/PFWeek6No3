#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void swapVal(int* a, int* b);

int main() {
	char text[60];
	int x = 1, y = 2, z = 3, k = 0, count = 0;
	scanf("%[^\n]s", &text);
	k = strlen(text);
	for (int i = 0; i < k; i++) {
		if (count < 51) {
			if (text[i] == 'A') {
				swapVal(&x, &y);
				count++;
			}
			else if (text[i] == 'B') {
				swapVal(&y, &z);
				count++;
			}
			else if (text[i] == 'C') {
				swapVal(&z, &x);
				count++;
			}
			else {
				printf("Enter only A B or C\n");
				return 0;
			}
		}
		else {
			printf("The maximum alphabets which you can enter are 50\n");
			return 0;
		}
	}
	if (x == 1) printf("1\n");
	else if (y == 1) printf("2\n");
	else if (z == 1) printf("3\n");
	else printf("Error\n");
	return 0;
}
void swapVal(int* a, int* b)
{
	int in;
	in = *a;
	*a = *b;
	*b = in;
}