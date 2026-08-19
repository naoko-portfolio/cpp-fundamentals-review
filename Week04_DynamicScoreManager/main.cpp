#include <iostream>

using namespace std;

void inputScores(int* scores, int size);
double getAverage(int* scores, int size);
void addBonus(int* scores, int size);
int getHighest(int* scores, int size);

int main() {
	int size;
	cout << "How many students? ";
	cin >> size;
	//create a dynamic array
	int* scores = new int[size];
	inputScores(scores, size);
	cout << endl;
	cout << "Average: " << getAverage(scores, size) << endl;
	cout << "Highest: " << getHighest(scores, size) << endl;
	cout << endl;
	int choice;
	cout << "Add 5 bonus points? (1 = Yes, 0 = No): ";
	cin >> choice;
	if (choice == 1) {
		//add 5 points to each score
		addBonus(scores, size);

	}
	cout << endl;
	cout << "---After Bonus---" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Score " << i + 1 << ": " << scores[i] << endl;
	}
	
	//release dynamic memory
	delete[] scores;

	return 0;
}

void inputScores(int* scores, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
	}
}

double getAverage(int* scores, int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += scores[i];
	}
	return (double)total / size;
}


int getHighest(int* scores, int size) {
	int high = scores[0];
	for (int i = 0; i < size; i++) {
		if (scores[i] > high) {
			high = scores[i];
		}
	}
	return high;
}

void addBonus(int* scores, int size) {
	for (int i = 0; i < size; i++) {
		scores[i] = scores[i] + 5;
	}
}