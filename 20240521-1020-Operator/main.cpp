#include <iostream>
#include <string>

using namespace std;

class Fruit {
private:
	string _name; // ���ϸ�
	float _weight; // ����
	float _brixDegree; // �絵

public:
	Fruit(string name, float weight, float brixDegree)
		: _name(name), _weight(weight), _brixDegree(brixDegree) {}

	string GetName() const {
		return _name;
	}

	void SetName(string value) {
		_name = value;
	}

	float GetWeight() const {
		return _weight;
	}

	float SetWeight(float value) {
		_weight = value;
	}

	float GetBbixDegree() const {
		return _brixDegree;
	}

	float SetBbixDegree(float value) {
		_brixDegree = value;
	}

	void ShowInfo() const {
		cout << "���ϸ� : " << _name << endl;
		cout << "���� : " << _weight << endl;
		cout << "�絵 : " << _brixDegree << endl;
		cout << endl;
	}
};

// PrintFruit �Լ��� ���ڷ� Fruit& Ÿ���� �޴´�.
// ���ڰ��� const�� �ѱ�� const ��ü�� �ǰ�
// const ��ü�δ� const ����Լ��� ȣ���� �� �ִ�.
// const ����Լ��� ��������� ���� �������� �ʴ� �Լ���.
void PrintFruit(const Fruit& ref) {
	cout << "���ϸ� : " << ref.GetName() << endl;
	cout << "���� : " << ref.GetWeight() << "g" << endl;
	cout << "�絵 : " << ref.GetBbixDegree() << "%" << endl;
	// ref.SetName("����");
	cout << endl;
}


int main() {
	Fruit fruitArray[3] = {
		{"�ٳ���", 0.3f, 80.0f},
		{"���", 0.8f, 83.0f},
		{"����", 0.2f, 78.0f},
	};

	int length = sizeof(fruitArray) / sizeof(Fruit);

	for (int i = 0; i < length; i++) {
		PrintFruit(fruitArray[i]);
	}

	cout << endl;

	for (int i = 0; i < length; i++) {
		fruitArray[i].ShowInfo();
	}

	return 0;
}