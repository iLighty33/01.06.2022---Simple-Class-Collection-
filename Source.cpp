#include <vector>
#include <iostream>



class A {

};


class Collection {
public:

	
	///*constructor
	Collection ();
	Collection (int size);
	Collection (Collection &&other); // ����������� �����������
	Collection (const Collection &other);

	//destructor
	~Collection ();

	//operator=
	Collection &operator = (const Collection &other);
	Collection &operator = (Collection &&other);

	
	//at
	//auto at (int pos)->int &; - tail trace
	//auto at (int pos)const->const int &; - tail trace
	
	int &at (int pos);
	const int &at (int pos)const;

	//operator[]
	int &operator[] (int pos);
	const int &operator[] (int pos)const;

	//front
	int &front () {
		return data_[0];
	}
	const int &front ()const {
		return data_[0];
	}

	//back
	int &back ();
	const int &back ()const;

	// ������ ������� � ���������
	//data
	int *data ();
	const int *data ()const;

	//capacity
	int capacity ()const;

	//empty
	bool empty () const {
		if (size_ > 0) {
			return false;
		}
		else
			return true;
	}

	//size
	
	// ������� ��������. �� ��������, ������� ��������� ���������
		//reserve - ������������� ��������� � ������
		//capacity
		//shrink_to_fit. Size 10, capacity - 100, ���� ������ ������������
		//clear. �������� ������
		//insert
		//erase
		//push_back
		//emplace_back
		//pop_back
		//resize
		//swap
		//swaps the contents
		//operator==*/


	// --------------------
	//   ����������� � ������:
	//		������������
	//		�����������
	// --------------------
	// ������ ������� ������
	// ������ ����������� ������
	// --------------------
	// ������ ������� � ������ (at find, find)
	// ������������:
	//      �������� []
	//      ����� at find � ������
	// ����������������:
	//      ������ ����������
	//      ������, ������� �� ���������� (��� ������, ������� ��������� ������ � ���������)
	// --------------------
	// ��������� � �������� ������

	void reverse () {

	}
private:
	// ������ � ������� (���������)
	A *allocate (int blocks) {
		A *data = new A[blocks];
		return data;
	}
	// ��������� ������        ���������       malloc calloc
	// ������������� ������    �����������     realloc
	// ������������ ������     �����������     free
	// --------------------
	// ���� ����� ������. ��� ������� 2 ���� (��������� �� ������, size, capacity)
	int *data_;
	int size_;
	int capacity_;
	// --------------------
	// ��������� ���������.
	// 
};

int main () {


	return 0;
}