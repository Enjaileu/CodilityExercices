#pragma once
#include "City.h"
#include<map>
#include <vector>
using namespace std;

class Country
{
public:
	void ConnectCities(City &cityA, City &cityB, int distance);
	void AddCity(City &cityP);
	void DisplayConnections();
	vector<string> GoThrough(string cityA, string cityB);
	int GetSumDistance(vector<string> path);
	City GetCity(string letter);
private:
	vector<City> cities;
	map<City, City> nodes;
};

