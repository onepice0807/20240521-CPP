#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Monster {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

public:

	Monster()
		: _name("없음"), _health(0), _attack(0), _defense(0)
	{
		cout << "Monster 기본 생성자" << endl;
	};

	Monster(string name, int health, int attack, int defense)
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "생성자" << endl;
	}

	~Monster() {
		cout << _name << " 소멸자" << endl;
	}

	void Init(string name, int health, int attack, int defense) {
		_name = name;
		_health = health;
		_attack = attack;
		_defense = defense;
	}

	void Attack() {
		cout << _name << "이 공격한다" << endl;
	}

	void Deffense() {
		cout << _name << "이 방어한다" << endl;
	}

	void Info() {
		cout << "몬스터명 : " << _name << endl;
		cout << "생명력 : " << _health << endl;
		cout << "공격력 : " << _attack << endl;
		cout << "방어력 : " << _defense << endl;
	}
};


// 객체 배열
int main() {
	// 동적 배열 생성
	int count = 0;
	char buff[30];

	cout << "제작할 몬스터의 개체수를 입력하세요 : ";
	cin >> count;

	Monster** ppMonsArray = new Monster * [count]; // Monster* 저장하는 동적배열

	for (int i = 0; i < count; i++) {
		sprintf(buff, "DynamicMonster_%d", i);
		ppMonsArray[i] = new Monster(buff, i * 10, i * 3, i * 2); // 몬스터 객체를 각각에 생성하여
		// Monster* 배열에 연결한다.
	}

	for (int i = 0; i < count; i++) {
		ppMonsArray[i]->Attack();

	}

	// Monster* 배열의 2번째에 저장된 객체를 반납처리
	delete(ppMonsArray[2]);
	ppMonsArray[2] = NULL;

	for (int i = 0; i < count; i++) {
		if (ppMonsArray[i] != NULL) {
			ppMonsArray[i]->Deffense();
		}

	}

	for (int i = 0; i < count; i++) {
		if (ppMonsArray[i] != NULL) {
			ppMonsArray[i]->Info();
		}
	}

	// 몬스터 생성
	for (int i = 0; i < count; i++) {
		if (ppMonsArray[i] == NULL) {
			ppMonsArray[i] = new Monster("NewMonster", 100, 40, 10);
		}
	}

	// 공격명령 일괄처리
	for (int i = 0; i < count; i++) {
		ppMonsArray[i]->Attack();
	}

	// Monster* 배열에 연결된 각각의 Monster 객체를 반납처리
	// 몬스터 객체 반납처리
	for (int i = 0; i < count; i++) {
		if (ppMonsArray[i] != NULL) {
			delete(ppMonsArray[i]);
			ppMonsArray[i] = NULL;
		}
	}

	delete[] ppMonsArray; // Monster* 동적배열을 반납처리

	return 0;
}