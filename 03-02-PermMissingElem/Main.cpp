#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int>& A) {
	std::sort(A.begin(), A.end());
	int count{ 1 };
	for (auto it = A.begin(); it != A.end(); it++) {
		if (*it != count) {
			return count;
		}
		count++;
	}
}

int main() {
	vector <int> test{ 1, 6, 5, 3, 8, 4, 2 };
	cout << solution(test) << endl;
}