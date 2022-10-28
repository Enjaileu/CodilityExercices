#include "City.h"
#include "Country.h"
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

City a("A");
City b("B");
City c("C");
City d("D");
City e("E");
Country country;


int main() {
	// connections cities
	country.ConnectCities(a, b, 2);
	country.ConnectCities(a, c, 2);
	country.ConnectCities(b, c, 3);
	country.ConnectCities(b, d, 3);
	country.ConnectCities(b, e, 1);
	country.ConnectCities(c, d, 1);
	country.ConnectCities(c, e, 3);
	country.ConnectCities(d, e, 3);

	//add cities
	vector<City> cities{ a, b, c, d, e };
	for (auto it = cities.begin(); it != cities.end(); ++it) {
		country.AddCity(*it);
	}

	vector<string> path = country.GoThrough("A", "E");
	cout << path[1] << endl;
	cout << country.GetSumDistance(path) << endl;


	return 0;
}