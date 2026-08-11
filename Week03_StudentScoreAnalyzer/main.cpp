#include <iostream>

using namespace std;

void addBonus(int scores[], int size, int bonus);
double getAverage(int scores[], int size);
void findHighLow(int scores[], int size, int& high, int& low);
int countPassed(int scores[], int size);

int main() {
	int scores[5];
	int bonus=5;
	int high, low;
	for (int i = 0; i < 5; i++) {
		cout << "Enter the score "<<i+1<<": ";
		cin >> scores[i];
	}
	cout << endl;
	cout << "Enter bonus point: ";
	cin >> bonus;
	addBonus(scores, 5, bonus);
	

	cout << endl;
	cout << "Average: " << getAverage(scores, 5) << endl;
	findHighLow(scores, 5, high, low);
	cout << "Highest: " << high << endl;
	cout<<"Lowest: "<< low<< endl;
	cout << "Passed: " << countPassed(scores, 5) << endl;
	cout << "Failed: " << 5 - countPassed(scores, 5) << endl;
}

void addBonus(int scores[], int size, int bonus) {
	for (int i = 0; i < size; i++) {
		scores[i] = scores[i] + bonus;
	}

}

double getAverage(int scores[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += scores[i];
	}
	return (double)total/size;
}

void findHighLow(int scores[], int size, int& high, int& low) {
	high = scores[0];
	low = scores[0];

	for (int i = 0; i < size; i++) {
		if (high < scores[i]) {
			high = scores[i];
		}

		if (low > scores[i]) {
			low = scores[i];
		}
	}

}

int countPassed(int scores[], int size) {
	int pass = 0;
	for (int i = 0; i < size; i++) {
		if (scores[i] >= 60) {
			pass++;
		}
	}

	return pass;
}