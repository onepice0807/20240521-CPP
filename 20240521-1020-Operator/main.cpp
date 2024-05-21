#include <iostream>
#include <string>

using namespace std;

class Fruit {
private:
	string _name; // 과일명
	float _weight; // 무게
	float _brixDegree; // 당도

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
		cout << "과일명 : " << _name << endl;
		cout << "무게 : " << _weight << endl;
		cout << "당도 : " << _brixDegree << endl;
		cout << endl;
	}
};

// PrintFruit 함수는 인자로 Fruit& 타입을 받는다.
// 인자값을 const로 넘기면 const 객체가 되고
// const 객체로는 const 멤버함수만 호출할 수 있다.
// const 멤버함수는 멤버변수의 값을 변경하지 않는 함수다.
void PrintFruit(const Fruit& ref) {
	cout << "과일명 : " << ref.GetName() << endl;
	cout << "무게 : " << ref.GetWeight() << "g" << endl;
	cout << "당도 : " << ref.GetBbixDegree() << "%" << endl;
	// ref.SetName("몬스터");
	cout << endl;
}


int main() {
	Fruit fruitArray[3] = {
		{"바나나", 0.3f, 80.0f},
		{"사과", 0.8f, 83.0f},
		{"딸기", 0.2f, 78.0f},
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