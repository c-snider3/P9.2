/*Integer sort check - Collin Snider*/

#include <iostream>
using namespace std;

bool isSortedIncreasing(int arr[], int size);		// Function prototypes
bool isSortedDecreasing(int arr[], int size);
bool hasAdjacentDuplicates(int arr[], int size);
bool hasDuplicates(int arr[], int size);

bool isSortedIncreasing(int arr[], int size) {		//check sort increasing
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;							//return boolean
		}
	}
	return true;
}

bool isSortedDecreasing(int arr[], int size) {		//check sort decreasing
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			return false;							//return boolean
		}
	}
	return true;
}

bool hasAdjacentDuplicates(int arr[], int size) {	//check adjacent duplicates
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			return true;							//return boolean
		}
	}
	return false;
}

bool hasDuplicates(int arr[], int size) {			//check duplicates
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {		//cycle through each element and compare to all elements after it
			if (arr[i] == arr[j]) {
				return true;						//return boolean
			}
		}
	}
	return false;
}

int main() {

	const int size = 6;								//declare array size

	int arr[size];									//get array of integers from user
	for (int i = 0; i < size; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> arr[i];
	}


	if (isSortedIncreasing(arr, size)) {			//check sort increasing
		cout << "The data are increasing." << endl;
	}
	else {
		cout << "The data are not increasing." << endl;
	}

	if (isSortedDecreasing(arr, size)) {			//check sort decreasing
		cout << "The data are decreasing." << endl;
	}
	else {
		cout << "The data are not decreasing." << endl;
	}

	if (hasAdjacentDuplicates(arr, size)) {			//check adjacent duplicates
		cout << "The data have adjacent duplicates." << endl;
	}
	else {
		cout << "The data do not have adjacent duplicates." << endl;
	}

	if (hasDuplicates(arr, size)) {					//check duplicates
		cout << "The data have duplicates." << endl;
	}
	else {
		cout << "The data do not have duplicates." << endl;
	}

}