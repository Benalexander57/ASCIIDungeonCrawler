#include "Level.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

Level::Level()
{
}

void Level::loadMap(string filename)
{

	//open the input stream for the map file
	ifstream inputFile;
	inputFile.open(filename);

	//check if the opening of the file failed
	if (inputFile.fail())
	{
		perror(filename.c_str());
	}

	//create a vector of strings to hold the map
	vector<string> map;
	string column;

	//get the lines from the file and add them to the vector
	while (getline(inputFile, column))
	{
		map.push_back(column);

	}

	//print out the map
	for (int i = 0; i < map.size(); i++)
	{
		cout << map[i] << endl;
		/*for (int j = 0; j < map[i].size(); j++)
		{
			cout << map[i][j] << endl;
		}*/
	}
}

