/*#include <stdio.h>   //01번문제
int main(void) {
	int a, b;
	int result = 1;
	scanf_s("%d %d", &a, &b);
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	printf("%d" ,result);
	return 0;
}*/

/*#include <stdio.h> // 02번문제
int main() {
	for (int i = 0; i < 101; i += 4) {
		printf("%d %f\n", i, i * 1.8 + 32);
	}
	return 0;
}*/

/*
#include <stdio.h> // 03번문제
int main() {
	int a;
	scanf_s("%d", &a);
	float result = 0;
	for (float i = 1; i < a+1; i++) {
		result += 1 / i;
	}
	printf("%f", result);
	return 0;
}*/
/*#include <stdio.h> //04번문제 
int main() {
	int n;
	scanf_s("%d", &n);
	int fn1 = 1;
	int fn2 = 1;
	int room = 0;
	for (int i = 0; i < n-1; i++) {
		room = fn1 + fn2;
		fn1 = fn2;
		fn2 = room;
	}
	printf("%d", fn2);
	return 0;
}*/

/*#include <stdio.h> //05번문제
int main() {
	int n;
	scanf_s("%d", &n);
	int pd0=1, pd1=1, pd2=1;
	int room=0;
	for (int i = 0; i < n-2; i++) {
		room = pd0 + pd1;
		pd0 = pd1;
		pd1 = pd2;
		pd2 = room;
	}
	printf("%d", room);
	return 0;
}*/

/*#include <stdio.h> //06번 문제
int main() {
	int n;
	scanf_s("%d", &n);
	float a = 2;
	float result = 1;
	for (int i = 0; i < n; i++) {
		result += 1 / a;
		a *= 2;
	}
	printf("%f", result);
	return 0;
}*/

/*#include <stdio.h>  //07번 문제
int main() {
	int n;
	scanf_s("%d", &n);
	float a = 2;
	float result = 1;
	float b = -1;
	for (int i = 0; i < n; i++) {
		result += (1 / a) * b;
		a *= 2;
		b *= -1;
	}
	printf("%f", result);
	return 0;
}*/

/*#include <stdio.h> // 08번 문제
int main() {
	int n;
	scanf_s("%d", &n);
	float fac = 1;
	float result = 0;
	for (int i = 0; i < n; i++) {
		result += 1/fac;
		fac *= (i + 2);
	}
	printf("%f", result);
	return 0;
}*/

/*#include <stdio.h> // 09번 문제
int main() {
	int n;
	scanf_s("%d", &n);
	float a = 1;
	float b = 1;
	float result = 0;
	for (int i = 0; i < n; i++) {
		result += ((4 / a)*b);
		a += 2;
		b *= -1;
	}
	printf("%f", result);
	return 0;
}*/

/*#include <stdio.h> //10번문제
int main() {
	int n;
	scanf_s("%d", &n);
	for (; n >= 2; n /= 2) {
		printf("hello\n");
	}
	return 0;
}*/

/*#include <stdio.h> // 11번 문제 
int main() {
	int n;
	scanf_s("%d", &n);
	for (; n != 1; n /= 2) {
		printf("%d ", n / 2);
	}
	return 0;
}*/

/*#include <stdio.h> //12번 문제
int main() {
	int n;
	float result=0;
	for (int i = 1; i <= 10; i++) {
		scanf_s("%d", &n);
		result += n;
		printf("%f ", result/i);
	}
	return 0;
}*/

/*#include <stdio.h> // 13번 문제
int main() {
	float r=0;
	int m=0;
	float bank = 0;
	scanf_s("%f", &r);
	for (int i = 0; i < 12; i++) {
		scanf_s("%d", &m);
		bank += m;
		bank = bank + (r * bank);
		printf("%f\n", bank);
	}
	return 0;
}*/

/*#include <stdio.h> // 14번 문제
int main() {
	float x;
	scanf_s("%f", &x);
	float sin = 0;
	float sinx = x;
	float sinfac = 1;
	float cos = 1;
	float cosx = x * x;
	float cosfac = 2;
	int a = 1;
	for (int i = 1; i < 100; i++) {
		sin += (sinx / sinfac) * a;
		cos += (cosx / cosfac) * a * -1;
		sinx = sinx * x * x;
		cosx = cosx * x * x;
		sinfac = sinfac * (i * 2) * (i * 2 + 1);
		cosfac = cosfac * ((i+1) * 2) * ((i+1) * 2 - 1);
		a *= -1;
	}
	cos -= (cosx / cosfac) * a * -1;
	printf("%f %f", sin, cos);
	return 0;
}*/