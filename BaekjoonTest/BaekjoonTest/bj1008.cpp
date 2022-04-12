#include <iostream>
using namespace std;

int main() {
	 double A, B; 

	cin >> A >> B;
	cout.precision(10);
	cout << fixed;
	cout << A / B;
	
	return 0;
}

// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

// 부동 소수점 문제

// C++에서 작성 시에는
// fixed, cout.precision 사용

// 고정 소수점 표기 fixed
// 고정 소수점 표기x unsetf(ios::fixed)

// float로 자료형을 선언하면 근사값을 표현하면서 오차가 발생한다고 한다
// 그래서 최대한 많은 비트를 사용해야 하기 때문에 double형으로 선언한다

/*
C로 작성 시에는
#include <stdio.h>

int main(){

	double a, b;

	scanf("%lf %lf", &a, &b);
	printf("%.9lf", a / b);
}
*/