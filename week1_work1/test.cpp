#include <iostream>
#include <string>
using namespace std;
//����ڷκ��� 5���� ���ڸ� �Է¹޾� �迭�� ����
//�Է¹޴� ������ �迭�� Ȱ��
//5���� ������ �հ� ��� ���
//�հ� ����� ������ �Լ� ���


void sort(int numbers[], int size) {  //���� ���� �Լ�
		
	int a = 0;
	for (int n = 0; n < size; n++) {
		for (int m = n+1; m < size; m++) {
			if (numbers[n] > numbers[m]) 
			{ a = numbers[n]; 
			numbers[n] = numbers[m]; 
			numbers[m] = a; } //�������� ����
		}
	}

	int sortOrder = 0;
	while (sortOrder != 3) {
		cout << "sort : Ascending - press '1' / descending - press '2'/ Exit - press '3'" << endl; //��� ��� �Է�
		cin >> sortOrder;
		cout << "\n";
		if (sortOrder == 1) {
			for (int l = 0; l < size; l++) {
				cout << numbers[l];
			}cout << "\n"; //�״�� �������� ���
		}
		if (sortOrder == 2) {
			for (int o = size - 1; o >= 0; o--) {
				cout << numbers[o];
			}cout << "\n"; //���� �������� ���
		}
	}


}


//����� �Է� ���� ����
int add(int numbers[], int size) 
{
	int total = 0;
	for (int k = 0; k < size; k++)
		total = total + numbers[k];
	return total;
}

// ����� �Է� �� ������ ���
int average(int Total, int size) {
	return Total / size;
}

int main() {
	int numbers[5];//����ڷκ��� ���� 5�� �Է� �ޱ�
	cout << "Please enter five integers: ";
	cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

	cout << "The choosen numbers: "; //������ ��ȣ ���
	for (int i = 0; i < 5; i++) {
		if (i != 4) {
			cout << numbers[i] << ", ";
		}
		else { cout << numbers[i]; }
	}

	int Total = add(numbers, 5);
	int Aver = average(Total, 5);

	cout << " \nTotal: " << Total << endl; //���� ���
	cout << "Average: " << Aver << endl;   //��� ���

	
	sort(numbers, 5); //���� �Լ� ����


	return 0;
}
