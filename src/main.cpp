#include <iostream>
#include "../inc/Map.h"
#include "../inc/TileMap.h"
#include "../inc/Tile.h"
#include "../inc/Logger.h"
#include "../inc/Config.h"

using namespace std;
using namespace Common;

int main()
{
  int in,out,height,width;
  Logger::Log("Starting MapEditor...",LogLevel::INFO);
	//cout << new LogStatement("MapEditor") << endl;

  Config* config = new Config();
  config->LoadFile("config.txt");

	cout << "Height?" << endl;

	cin >> height;

	cout << "Width?" << endl;

	cin >> width;

	Map* map = new Map(width,height);

	cout << "New map created:";

	cout << map->getInfo();

	cin >> in;
  return 0;
}
