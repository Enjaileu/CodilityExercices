#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


void displayList(vector<int> list) {
	cout << "[ ";
	for (auto it = list.begin(); it != list.end(); it++) {
		cout << *it << " ";
	}
	cout << "]" << endl;
}


int solution(vector<int>& A) {
	std::sort(A.begin(), A.end());
	for (auto it = A.begin(); it != A.end()-1; it += 2) {
		if (*it != *(it + 1)) {
			return *it;
		}
	}
	return A[A.size() - 1];
}

int main() {
	vector<int> test{ 4, 9, 5, 8, 5, 4, 8 };
	displayList(test);
	cout << "The lonely element is : " << solution(test) << endl;


	return 0;
}