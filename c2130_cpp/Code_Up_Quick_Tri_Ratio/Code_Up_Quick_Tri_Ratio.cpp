#include <stdio.h>
#include <math.h>

#define pi 3.14159

float fact(int n);
float tris(float n);
float tric(float n);
float trit(float t);

float d, r;

int main() {
	scanf_s("%f", &d);
	r = ((int)d % 360) * pi / 180;
	float t = tris(r) / tric(r);
	trit(t);
}

float fact(int n) {
	float res = 1;
	for (int j = 1; j <= n; j++) res *= (float)j;
	return res;
}

float tris(float n) {
	float s = 0, k = 0;
	if (n < 0) {
		n *= -1;
		k = 1;
	}
	for (int i = 0; i <= 12; i++) {
		s += pow(-1, i) * pow(n, 2 * i + 1) / fact(2 * i + 1);
	}
	if (s <= 0.000001) s = 0;
	if (k == 1) s *= -1;
	printf("%.6f ", s);
	return s;
}

float tric(float n) {
	float c = 0;
	if (n < 0) n *= -1;
	for (int i = 0; i <= 12; i++) {
		c += pow(-1, i) * pow(n, 2 * i) / fact(2 * i);
	}
	if (c <= 0.000001) c = 0;
	printf("%.6f ", c);
	return c;
}

float trit(float t) {
	if (((int)d - 90) % 180 == 0) printf("Infinity");
	else  printf("%.6f", t);
	return t;
}
