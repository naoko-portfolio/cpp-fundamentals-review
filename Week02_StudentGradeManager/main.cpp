#include <iostream>

using namespace std;

double average(int scores[], int size);

int highest(int scores[], int size);

int lowest(int scores[], int size);

int passed(int scores[], int size);



int main() {
	int score[5];
	
	for (int i = 0; i < 5; i++) {
		cout << "Enter score " <<i+1<<": ";
		cin >> score[i];
	}
	cout << endl;
	double avg=average(score, 5);
	cout << "Average: " << avg << endl;

	int hig = highest(score, 5);
	cout << "Highest: " << hig << endl;

	int low = lowest(score, 5);
	cout << "Lowest: " << low << endl;

	int pas = passed(score, 5);

	cout << "Passed: " << pas << endl;
	cout << "Failed: " << 5-pas << endl;

}


double average(int scores[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += scores[i];
	}
	return (double)total / size;
}

int highest(int scores[], int size) {
	int highe = scores[0];
	for (int i = 0; i < size; i++) {
		if (highe < scores[i]) {
			highe = scores[i];
		}
	}
	return highe;
}

int lowest(int scores[], int size) {
	int low = scores[0];
	for (int i = 0; i < size; i++) {
		if (low > scores[i]) {
			low = scores[i];
		}
	}
	return low;
}

int passed(int scores[], int size) {
	int pass = 0;
	for (int i = 0; i < size; i++) {
		if(scores[i]>=60 ) {
			pass++;
		}
		
	}
	return pass;
}