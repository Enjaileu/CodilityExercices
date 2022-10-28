#include <math.h>
#include <vector>
#include <iostream>
#include <limits>
using namespace std;


int solution(vector<int>& A) {
    int sum{ 0 };
    for (auto it = A.begin(); it != A.end(); ++it) {
        sum += *it;
    }

    int min{ numeric_limits<int>::max() };
    int sumPart01{ 0 };
    int sumPart02{ sum };
    for (auto it = A.begin(); it != A.end() - 1; ++it) {
        sumPart01 += *it;
        sumPart02 -= *it;
        int difference{ abs(sumPart01 - sumPart02) };

        if (min > difference) {
            min = difference;
        }
    }
    return min;
}

int main() {
	vector<int> test{ 45, 123, 96, 78, 45, 25, 22, 62, 18 };
	cout << solution(test) << endl;
}