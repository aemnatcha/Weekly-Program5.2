#include <stdio.h>
int main() {
	int x = 0, n;
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &n);
		x += n;
	}
	printf("%c", "FFFFFDCBAA"[x / 10]);
	if ((x > 50 && x < 80) && (x % 10 >= 5)) {
		printf("+");
	}
}