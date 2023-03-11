#include <iostream>
#include <string>

using namespace std;

enum enOddEven { Even = 1, Odd = 2 };


int ReadNumber() {
	int N;
	cout << "Please Enter Your Number : " << endl;
	cin >> N;
	return N;
}

enOddEven CheckOddEven(int Number) {

	if (Number % 2 != 0) {
		return enOddEven::Odd;
	}
	else {
		return enOddEven::Even;
	}

}

int SumOddNumbersByFor(int N) {
	int Sum = 0;
	cout << "Sum odd numbers using For Statement: \n";

	for (int Counter = 1; Counter <= N; Counter++) {
		if (CheckOddEven(Counter) == enOddEven::Odd) {
			Sum += Counter;
		}
	}
	return Sum;

}

int SumEvenNumbersByFor(int N) {
	int Sum = 0;

	cout << "Sum Even Numbers using For Statment : \n";
	for (int Counter = 1; Counter <= N; Counter++) {
		if (CheckOddEven(Counter) == enOddEven::Even) {
			Sum += Counter;
		}
	}
	return Sum;
}

int SumOddNumbersByWhile(int N) {

	int Sum = 0;
	int Counter = 0;
	cout << "Sum odd numbers using While Statement: \n";
	while (Counter < N) {
		Counter++;
		if (CheckOddEven(Counter) == enOddEven::Odd) {
			Sum += Counter;
		}
	}
	return Sum;

}

int SumEvenNumbersByWhile(int N) {
	int Sum = 0;
	int Counter = 0;
	cout << "Sum Even numbers using While Statement: \n";
	while (Counter < N) {
		Counter++;
		if (CheckOddEven(Counter) == enOddEven::Even) {
			Sum += Counter;
		}
	}
	return Sum;

}

int SumOddNumbersByDoWhile(int N) {
	int Sum = 0;
	int Counter = 0;
	cout << "Sum odd numbers using Do While Statement: \n";
	do {
		Counter++;
		if (CheckOddEven(Counter) == enOddEven::Odd)
			Sum += Counter;
	} while (Counter < N);
	return Sum;
}

int SumEvenNumbersByDoWhile(int N) {
	int Sum = 0;
	int Counter = 0;
	cout << "Sum Even numbers using Do While Statement: \n";
	do {
		Counter++;
		if (CheckOddEven(Counter) == enOddEven::Even)
			Sum += Counter;
	} while (Counter < N);
	return Sum;
}



int main() {

	int N = ReadNumber();
	cout << SumOddNumbersByDoWhile(N) <<endl;
	cout << SumOddNumbersByWhile(N) <<endl;
	cout << SumOddNumbersByFor(N) <<endl;

	return 0;
}