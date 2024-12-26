#include <iostream>
#include <string>
using namespace std;
//사용자로부터 5개의 숫자를 입력받아 배열에 저장
//입력받는 공간은 배열을 활용
//5개의 숫자의 합과 평균 출력
//합과 평균은 각각의 함수 사용


void sort(int numbers[], int size) {  //차순 정렬 함수
		
	int a = 0;
	for (int n = 0; n < size; n++) {
		for (int m = n+1; m < size; m++) {
			if (numbers[n] > numbers[m]) 
			{ a = numbers[n]; 
			numbers[n] = numbers[m]; 
			numbers[m] = a; } //오름차순 정렬
		}
	}

	int sortOrder = 0;
	while (sortOrder != 3) {
		cout << "sort : Ascending - press '1' / descending - press '2'/ Exit - press '3'" << endl; //출력 방식 입력
		cin >> sortOrder;
		cout << "\n";
		if (sortOrder == 1) {
			for (int l = 0; l < size; l++) {
				cout << numbers[l];
			}cout << "\n"; //그대로 오름차순 출력
		}
		if (sortOrder == 2) {
			for (int o = size - 1; o >= 0; o--) {
				cout << numbers[o];
			}cout << "\n"; //역순 내림차순 출력
		}
	}


}


//사용자 입력 값의 총합
int add(int numbers[], int size) 
{
	int total = 0;
	for (int k = 0; k < size; k++)
		total = total + numbers[k];
	return total;
}

// 사용자 입력 값 총합의 평균
int average(int Total, int size) {
	return Total / size;
}

int main() {
	int numbers[5];//사용자로부터 정수 5개 입력 받기
	cout << "Please enter five integers: ";
	cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

	cout << "The choosen numbers: "; //선택한 번호 출력
	for (int i = 0; i < 5; i++) {
		if (i != 4) {
			cout << numbers[i] << ", ";
		}
		else { cout << numbers[i]; }
	}

	int Total = add(numbers, 5);
	int Aver = average(Total, 5);

	cout << " \nTotal: " << Total << endl; //총합 출력
	cout << "Average: " << Aver << endl;   //평균 출력

	
	sort(numbers, 5); //정렬 함수 실행


	return 0;
}
