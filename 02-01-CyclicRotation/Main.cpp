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

vector<int> solution(vector<int>& A, int K) {
    //for each rotation
    if (A.size() != 0) {
        if (A.size() != K) { 
            for (int i = 0; i < K; i++) {
                int end = A[A.size() - 1];
                //move all element
                for (auto j = A.end() - 1; j != A.begin(); j--) {
                    *j = *(j - 1);
                }
                A[0] = end;
            }
        }
    }
    return A;
}


int main() {
	vector<int> test{ 7, 5, 1, 6, 9, 4, 3 };
    displayList(test);
    solution(test, 3);
    displayList(test);
	return 0;
}