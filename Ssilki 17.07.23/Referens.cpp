#include<iostream>
#include<cstdlib>
#include<ctime>



//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}

//не рабочий вариант функции std::swap
void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

//Рабочий неудобный вариант функции std::swap
void p_swap(int* pointer1, int* pointer2) {
	int tmp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = tmp;
}

//Рабочий удобный вариант функции std::swap
void ref_swap(int& ref1, int& ref2) {
	int tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

//Функция, возвращающая ссылку на второй элемент массива
int mx[10][2];

int& second_column(int index) {
	return mx[index][1];
}

// функция, возвращающая ссылку на максимальный элемент массива
int& max_arr(int arr[], const int length) {
	int max_index = 0;
	for (int i = 1; i < length; i++)
		max_index = arr[i] > arr[max_index] ? i : max_index;
	return arr[max_index];
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Ссылки на переменную
	/*n = 7;
	int& refn = n;//создание ссылки на переменную n
	std::cout << "refn = " << refn << std::endl;//вывод ссылки в консоль. на экране: 7
	refn = 15;// изменение переменной n через ссылку
	std::cout << "n = " << n << std::endl; // n = 15*/

	//Ссылки, как параметры функций
	/*n = 7; m = 15;
	std::cout << "n = " << n << "; m = " << m << std::endl;
	//my_swap(n, m);//не работает, так как параметры лишь копии аргументов
	//p_swap(&n, &m); // работает, но неудобно из-за передачи адресов переменных
	ref_swap(n, m); //работает очень удобно в использовании
	std::cout << "Волшебство ... (Вызов функции)\n";
	std::cout << "n = " << n << "; m = " << m << std::endl;*/

	//Ссылки, как результаты работы функций
	/*std::cout << "Ввод данных в массив:\n";
	for (int i = 0; i < 10; i++) {
		std::cout << "Введите " << i + 1 << " число -> ";
		std::cin >> mx[i][0];
		second_column(i) = mx[i][0];//присваивание элементу второй колонки массива значения
	}
	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < 10; i++)
		std::cout << mx[i][0] << '\t' << second_column(i) << std::endl;*/
	 
	//Задание "ссылка на максимум"
	/*std::cout << "Изначальный массив:\n";
	const int size = 5;
	int arr[size]{ 6, 4, 7, 2, 7 };
	print_arr(arr, size);

	std::cout << "Максимум: " << max_arr(arr, size) << std::endl;

	std::cout << "Меняем максимум...\n";
	max_arr(arr, size) = 0;
	std::cout << "Итоговый массив:\n";
	print_arr(arr, size);*/







	return 0;
}