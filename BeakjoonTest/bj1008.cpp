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

// �� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �ε� �Ҽ��� ����

// C++���� �ۼ� �ÿ���
// fixed, cout.precision ���

// ���� �Ҽ��� ǥ�� fixed
// ���� �Ҽ��� ǥ��x unsetf(ios::fixed)

// float�� �ڷ����� �����ϸ� �ٻ簪�� ǥ���ϸ鼭 ������ �߻��Ѵٰ� �Ѵ�
// �׷��� �ִ��� ���� ��Ʈ�� ����ؾ� �ϱ� ������ double������ �����Ѵ�

/*
C�� �ۼ� �ÿ���
#include <stdio.h>

int main(){

	double a, b;

	scanf("%lf %lf", &a, &b);
	printf("%.9lf", a / b);
}
*/