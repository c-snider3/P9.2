/*Integer sort check - Collin Snider*/
/*Write array functions that carry out the following tasks for a passed array of integers:
• isSortedIncreasing: Returns true if the array is currently sorted in increasing order.
• isSortedDecreasing: Returns true if the array is currently sorted in decreasing order.
• hasAdjecentDuplicates: Returns true if the array contains two adjacent duplicate values.
• hasDuplicates: Returns true if the array contains duplicate values (which need not be adjacent).*/

#include <iostream>
using namespace std;

bool isSortedIncreasing(int arr[], int size);
bool isSortedDecreasing(int arr[], int size);

bool isSortedIncreasing(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			return false;
		}
	}
	return true;
}

int main() {

	const int size = 6;

	int arr[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> arr[i];
	}


	if (isSortedIncreasing(arr, size)) {
		cout << "The data are increasing." << endl;
	}
	else {
		cout << "The data are not increasing." << endl;
	}

	if (isSortedDecreasing(arr, size)) {
		cout << "The data are decreasing." << endl;
	}
	else {
		cout << "The data are not decreasing." << endl;
	}


}