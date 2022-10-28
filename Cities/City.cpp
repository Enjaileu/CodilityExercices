#include "City.h"
#include <iostream>
using namespace std;

City::City(string letterP):
	letter{letterP}
{
}

void City::AddConnection(string letter, int distance)
{
	connections[letter] = distance;
}

void City::DisplayConnections() const
{
	for (auto it = connections.begin(); it != connections.end(); ++it) {
		cout << "From " << letter << " to " <<  (* it).first << " : " << (*it).second << endl;
	}
	
}
