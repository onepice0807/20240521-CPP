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
		: _name("����"), _health(0), _attack(0), _defense(0)
	{
		cout << "Monster �⺻ ������" << endl;
	};

	Monster(string name, int health, int attack, int defense)
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "������" << endl;
	}

	~Monster() {
		cout << _name << " �Ҹ���" << endl;
	}

	void Init(string name, int health, int attack, int defense) {
		_name = name;
		_health = health;
		_attack = attack;
		_defense = defense;
	}

	void Attack() {
		cout << _name << "�� �����Ѵ�" << endl;
	}

	void Deffense() {
		cout << _name << "�� ����Ѵ�" << endl;
	}

	void Info() {
		cout << "���͸� : " << _name << endl;
		cout << "����� : " << _health << endl;
		cout << "���ݷ� : " << _attack << endl;
		cout << "���� : " << _defense << endl;
	}
};


// ��ü �迭
int main() {
	// ���� �迭 ����
	int count = 0;
	char buff[30];

	cout << "������ ������ ��ü���� �Է��ϼ��� : ";
	cin >> count;

	Monster** ppMonsArray = new Monster * [count]; // Monster* �����ϴ� �����迭

	for (int i = 0; i < count; i++) {
		sprintf(buff, "DynamicMonster_%d", i);
		ppMonsArray[i] = new Monster(buff, i * 10, i * 3, i * 2); // ���� ��ü�� ������ �����Ͽ�
		// Monster* �迭�� �����Ѵ�.
	}

	for (int i = 0; i < count; i++) {
		ppMonsArray[i]->Attack();

	}

	// Monster* �迭�� 2��°�� ����� ��ü�� �ݳ�ó��
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

	// ���� ����
	for (int i = 0; i < count; i++) {
		if (ppMonsArray[i] == NULL) {
			ppMonsArray[i] = new Monster("NewMonster", 100, 40, 10);
		}
	}

	// ���ݸ�� �ϰ�ó��
	for (int i = 0; i < count; i++) {
		ppMonsArray[i]->Attack();
	}

	// Monster* �迭�� ����� ������ Monster ��ü�� �ݳ�ó��
	// ���� ��ü �ݳ�ó��
	for (int i = 0; i < count; i++) {
		if (ppMonsArray[i] != NULL) {
			delete(ppMonsArray[i]);
			ppMonsArray[i] = NULL;
		}
	}

	delete[] ppMonsArray; // Monster* �����迭�� �ݳ�ó��

	return 0;
}