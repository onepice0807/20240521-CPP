#include <iostream>

using namespace std;

// ���
// ����� �ϴ� �������
// �Ϲ�ȭ, Ư��ȭ

// �������� �ù����̼� ���� 
// ��, ����, ��

class Cow {
private: 
	string _name; // �̸�
	float _weight; // ������
	float _height; // ����
	float _health; // �ǰ�����
	
public:
	Cow(string name, float weight, float height, float health)
		: _name(name), _weight(weight), _height(height), _health(health) {}

	void Speak() {
		cout << _name << "�� �����մϴ�." << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�." << endl;
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�." << endl;
	}

	string GetHealth() {
		if (_health > 80) {
			return "�ſ� �ǰ�";
		}

		else if (_health > 60 && _health <= 80) {
			return "�ǰ�";
		}

		else if (_health > 40 && _health <= 60) {
			return "�ν�";
		}
		else {
			return "ġ����";
		}
	}

	void Info() {
		cout << "�̸�: " << _name << endl;
		cout << "������: " << _weight << endl;
		cout << "����: " << _height << endl;
		cout << "�ǰ�����: " << _health << endl;
		cout << endl;
	}
};

class Pig {
private:
	string _name; // �̸�
	float _weight; // ������
	float _height; // ����
	float _health; // �ǰ�����
public:
	Pig(string name, float weight, float height, float health)
		: _name(name), _weight(weight), _height(height), _health(health) {}
};

class Chicken {

};

int main() {

	return 0;
}