#include "Country.h"


void Country::ConnectCities(City &cityA, City &cityB, int distance)
{
	cityA.AddConnection(cityB.GetLetter(), distance);
	cityB.AddConnection(cityA.GetLetter(), distance);
}

void Country::AddCity(City& cityP)
{
	cities.push_back(cityP);
}

void Country::DisplayConnections()
{
	for (auto it = cities.begin(); it != cities.end(); ++it) {
		(*it).DisplayConnections();
	}
}

vector<string> Country::GoThrough(string cityA, string cityB)
{
	vector<string> path{ cityA };
	City city = GetCity(cityA);
	for (auto it = city.GetConnections().begin(); it != city.GetConnections().end(); it++) {
		if (find(path.begin(), path.end(), (*it).first) != path.end() && (*it).first != cityB) {
			path.push_back((*it).first);
			break;
		}
	}
	return path;

}

int Country::GetSumDistance(vector<string> path)
{
	int sumDistance{ 0 };
	for (auto it = path.begin(); it != path.end()-1; ++it) {
		City city = GetCity(*it);
		sumDistance += city.GetDistance(*(it + 1));
	}
	return sumDistance;
}

City Country::GetCity(string letter)
{
	for (auto it = cities.begin(); it != cities.end(); ++it) {
		if ((*it).GetLetter() == letter) {
			return *it;
		}
	}
}
