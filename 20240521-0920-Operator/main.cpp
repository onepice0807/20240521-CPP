#include <iostream>

using namespace std;

class Complex {
private:
	int _real;
	int _imaginary;

public:
	Complex(int real, int imaginary)
		: _real(real), _imaginary(imaginary)
	{
		cout << "���ڸ� �޴� ������" << endl;
	}

	Complex(Complex& ref) // ���������
		: _real(ref._real), _imaginary(ref._imaginary)
	{
		cout << "Complex ���� ������" << endl;
	}

	int GetReal() {
		return _real;
	}

	int GetImaginary() {
		return _imaginary;
	}

	void Info() {
		cout << _real << showpos << _imaginary << "i";
		cout << noshowpos;
	}
};

int main() {
	Complex a(10, -10);

	cout << "a��ü : ";
	a.Info();

	cout << endl;

	// Complex b = a;
	Complex b(a); // ���� ������: �ڽ��� Ÿ���� ���ڷ� �޴� ������
				  // �Ϲ������� ��������ڸ� �ȸ��� �ȴ�.
	              // ��������ڰ� ������ �����Ϸ��� �ڵ����� ������

	cout << "b��ü : ";
	b.Info();

	return 0;
}