#include "Loader.h"
#include "File.h"

#include <iostream>

using namespace std;

int main()
{
	File *file = nullptr;

	if (!Loader::instance())
	{
		Loader::create();
	}
	Loader::instance()->createFile(&file, "file.txt");

	//ローダ実行
	Loader::instance()->update();

	cout << file->getDate();

	return 0;
}