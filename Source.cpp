#include <vector>
#include <iostream>



class A {

};


class Collection {
public:

	
	///*constructor
	Collection ();
	Collection (int size);
	Collection (Collection &&other); // конструктор перемещения
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

	// методы доступа к коллекции
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
	
	// рабочие нагрузки. Те операции, которые выполняет коллекция
		//reserve - разворачивает коллекцию в памяти
		//capacity
		//shrink_to_fit. Size 10, capacity - 100, блок памяти возвращается
		//clear. Очистить данные
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
	//   обязательно в начале:
	//		конструкторы
	//		деструкторы
	// --------------------
	// методы вставки данных
	// методы уничтожения данных
	// --------------------
	// методы доступа к данным (at find, find)
	// произвольные:
	//      оператор []
	//      метод at find и прочие
	// последовательные:
	//      классы итераторов
	//      методы, которые их возвращают (все методы, которые возращают данные о коллекции)
	// --------------------
	// операторы и свойства класса

	void reverse () {

	}
private:
	// работа с памятью (аллокация)
	A *allocate (int blocks) {
		A *data = new A[blocks];
		return data;
	}
	// выделение памяти        аллокация       malloc calloc
	// перевыделение памяти    реаллокация     realloc
	// освобождение памяти     деаллокация     free
	// --------------------
	// блок полей данных. Как минимум 2 поля (указатель на начало, size, capacity)
	int *data_;
	int size_;
	int capacity_;
	// --------------------
	// приватные состояния.
	// 
};

int main () {


	return 0;
}