#include <vector>
#include <bitset>
#include <iostream>
using namespace std;


int solution(int N) {

	//convert int in bit
	bitset<32> nBit(N);

	//convert bit in string
	string bitStr = nBit.to_string();

	// we will iterate from the first '0' right to the first '1'
	int index = bitStr.find('1') + 1;
	string::iterator it{ bitStr.begin() };
	std::advance(it, index);

	//iterate

	int max{ 0 };
	int iteration{ 0 };

	for (auto i = it; i != bitStr.end(); i++) {
		if (*i == '0') {
			iteration++;
		}
		else {
			if (max < iteration) {
				max = iteration;
			}
			iteration = 0;
		}
	}

	return max;
}

int main() {
	vector<int> test{ 451, 32, 965748 };

	for (auto it = test.begin(); it != test.end(); ++it) {
		cout << "The binarygap of " << *it << " is : " << solution(*it) << endl;
	}

	return 0;
}