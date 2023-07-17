#include<iostream>
#include<cstdlib>
#include<ctime>



//����� ������� � �������
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}

//�� ������� ������� ������� std::swap
void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

//������� ��������� ������� ������� std::swap
void p_swap(int* pointer1, int* pointer2) {
	int tmp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = tmp;
}

//������� ������� ������� ������� std::swap
void ref_swap(int& ref1, int& ref2) {
	int tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

//�������, ������������ ������ �� ������ ������� �������
int mx[10][2];

int& second_column(int index) {
	return mx[index][1];
}

// �������, ������������ ������ �� ������������ ������� �������
int& max_arr(int arr[], const int length) {
	int max_index = 0;
	for (int i = 1; i < length; i++)
		max_index = arr[i] > arr[max_index] ? i : max_index;
	return arr[max_index];
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������ �� ����������
	/*n = 7;
	int& refn = n;//�������� ������ �� ���������� n
	std::cout << "refn = " << refn << std::endl;//����� ������ � �������. �� ������: 7
	refn = 15;// ��������� ���������� n ����� ������
	std::cout << "n = " << n << std::endl; // n = 15*/

	//������, ��� ��������� �������
	/*n = 7; m = 15;
	std::cout << "n = " << n << "; m = " << m << std::endl;
	//my_swap(n, m);//�� ��������, ��� ��� ��������� ���� ����� ����������
	//p_swap(&n, &m); // ��������, �� �������� ��-�� �������� ������� ����������
	ref_swap(n, m); //�������� ����� ������ � �������������
	std::cout << "���������� ... (����� �������)\n";
	std::cout << "n = " << n << "; m = " << m << std::endl;*/

	//������, ��� ���������� ������ �������
	/*std::cout << "���� ������ � ������:\n";
	for (int i = 0; i < 10; i++) {
		std::cout << "������� " << i + 1 << " ����� -> ";
		std::cin >> mx[i][0];
		second_column(i) = mx[i][0];//������������ �������� ������ ������� ������� ��������
	}
	std::cout << "�������� ������:\n";
	for (int i = 0; i < 10; i++)
		std::cout << mx[i][0] << '\t' << second_column(i) << std::endl;*/
	 
	//������� "������ �� ��������"
	/*std::cout << "����������� ������:\n";
	const int size = 5;
	int arr[size]{ 6, 4, 7, 2, 7 };
	print_arr(arr, size);

	std::cout << "��������: " << max_arr(arr, size) << std::endl;

	std::cout << "������ ��������...\n";
	max_arr(arr, size) = 0;
	std::cout << "�������� ������:\n";
	print_arr(arr, size);*/







	return 0;
}