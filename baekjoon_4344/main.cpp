#include <cstdio>

int t, c, n, m, stu[1000];
int main() {
	scanf_s("%d", &t);
	while (t--) {
		m = 0; n = 0;
		scanf_s("%d", &c);
		for (int i = 0; i < c; i++) {
			scanf_s("%d", &stu[i]);
			m += stu[i];
		}
		m /= c;
		for (int i = 0; i < c; i++) { if (stu[i] > m) n++; }
		printf("%.3lf%%\n", (double)n/c*100);
	}
	return 0;
}