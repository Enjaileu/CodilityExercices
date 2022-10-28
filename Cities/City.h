#pragma once
#include <string>
#include <map>
using std::string;
using std::map;


class City
{
public:
	City(string letter);
	void AddConnection(string letter, int distance);
	map<string, int> GetConnections() const { return connections; }
	int GetDistance(string letterP) { return connections[letterP]; }
	string GetLetter() const { return letter; }
	void DisplayConnections() const;

private:
	map < string, int> connections;
	string letter;
};

