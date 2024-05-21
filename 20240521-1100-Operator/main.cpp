#include <iostream>

using namespace std;

// 상속
// 상속을 하는 방법에는
// 일반화, 특수화

// 동물육성 시물레이션 게임 
// 소, 돼지, 닭

class Cow {
private: 
	string _name; // 이름
	float _weight; // 몸무게
	float _height; // 신장
	float _health; // 건강지수
	
public:
	Cow(string name, float weight, float height, float health)
		: _name(name), _weight(weight), _height(height), _health(health) {}

	void Speak() {
		cout << _name << "이 음매합니다." << endl;
	}

	void Run() {
		cout << _name << "이 뜁니다." << endl;
	}

	void Eat() {
		cout << _name << "이 먹습니다." << endl;
	}

	string GetHealth() {
		if (_health > 80) {
			return "매우 건강";
		}

		else if (_health > 60 && _health <= 80) {
			return "건강";
		}

		else if (_health > 40 && _health <= 60) {
			return "부실";
		}
		else {
			return "치료요망";
		}
	}

	void Info() {
		cout << "이름: " << _name << endl;
		cout << "몸무게: " << _weight << endl;
		cout << "신장: " << _height << endl;
		cout << "건강지수: " << _health << endl;
		cout << endl;
	}
};

class Pig {
private:
	string _name; // 이름
	float _weight; // 몸무게
	float _height; // 신장
	float _health; // 건강지수
public:
	Pig(string name, float weight, float height, float health)
		: _name(name), _weight(weight), _height(height), _health(health) {}
};

class Chicken {

};

int main() {

	return 0;
}