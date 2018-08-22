#include <cstdio>
double n, m;
int t, c, stu[1000];

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
		m = (n / c) * 100;
		printf("%.3lf%%\n", m);
	}
	return 0;
}