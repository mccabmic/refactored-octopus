#include <iostream>

using namespace std;

int recursiveSize(int size);

int main() {

	cout << "My's size is: " << recursiveSize(10) << endl;

	cin.get();
	return 0;
}

int recursiveSize(int start) {

	if (start == 0)
		return 0;
	else {
		return 1 + recursiveSize(start - 1);
	}


}

