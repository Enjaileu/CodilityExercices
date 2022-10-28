#include <math.h>
#include <iostream>
using namespace std;

int solution(int X, int Y, int D) {
	int distance = abs(X - Y);
	int rest = distance % D;
	if (rest > 0) {
		return distance / D + 1;
	}
	else {
		return distance / D;
	}
}

int main() {
	cout << "The frog is at 20, the goal is at 90 and the frog has jump of 15 long." << endl;
	cout << "The frog need " << solution(20, 90, 15) << " jump(s) to reach its goal." << endl;

	return 0;
}