#include <iostream>

using namespace std;

class DynamicArray {
private:
	int* _parr;
	int _size;

public:
	DynamicArray(int size) // ������
		: _size(size)
	{
		cout << "DynamicArray(int size) ������" << endl;
		_parr = new int[_size]; // �����迭 ����
	}

	DynamicArray(DynamicArray& ref) // ��������� : �ڽ��� Ÿ���� ���ڷ� �޴� ������
		: _size(ref._size)
	{
		cout << "DynamicArray ���������" << endl;
		_parr = new int[_size];

		for (int i = 0; i < _size; i++) {
			_parr[i] = ref._parr[i];
		}
	}

	~DynamicArray() { // �Ҹ���
		cout << "DynamicArray() �Ҹ���" << endl;
		delete[] _parr; // �����迭 �ݳ�ó��
	}

	void SetIndex(int index, int value) {
		_parr[index] = value;
	}

	int GetIndex(int index) {
		return _parr[index];
	}

	int GetSize() {
		return _size;
	}

};

int main() {
	cout << "array ��ü" << endl;
	DynamicArray array(10);

	for (int i = 0; i < array.GetSize(); i++) {
		array.SetIndex(i, i);
	}

	for(int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << endl;
	cout << "array2 ��ü" << endl;
	// DynamicArray array2 = array;
	DynamicArray array2(array); // ��������� �۵�

	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << endl;

	for (int i = 0; i < array.GetSize(); i++) {
		array2.SetIndex(i, i *2);
	}

	for (int i = 0; i < array2.GetSize(); i++) {
		cout << "array2[" << i << "] = " << array2.GetIndex(i) << endl;
	}

	cout << endl;
	cout << "array ��ü" << endl;
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}

	return 0;
}