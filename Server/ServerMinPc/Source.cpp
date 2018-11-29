#include <iostream>
#include <fstream>
#include <string>
#include "ArchiveServer.h"
#include <bitset>
//#include "User.h"

using namespace std;

void checkIfNumbe(string h)
{
	int length = 0;
	int nameLength;

		while ((int)h[length] != 10)
		{
			length++;
		}
		nameLength = length - 5;
		cout << h.substr(length - nameLength, nameLength);	
}

int main()
{
	ArchiveServer fa;

	string buffer[3] = { "1 - data", "1 - data", "2 - data"};

	for (int i=0;i<3;i++)
	{
		string command = buffer[i].substr(0, 1);
		if (command == "0")
		{
			cout << buffer[i].substr(0, 1) << endl;
		}

		else if (command == "1")
		{
			cout << buffer[i].substr(0, 1) << endl;
		}

		else if (command == "2")
		{
			cout << buffer[i].substr(0, 1) << endl;
		}

		else if (command == "3")
		{
			cout << buffer[i].substr(0, 1) << endl;
		}
	}

	cout << "" << endl;
	fa.constructFile("Hello World", "Hello World", 0, 0, "Hej med dig\ndin so\næÆøØåÅ");
	fa.constructFile("Hello World Copy", "Hello World Copy", 0, 0, "Hej med dig\ndin so\næÆøØåÅ nummer 2");
	fa.read("Hello World");
	fa.read("Hello World Copy");
	fa.sendFileList();
	fa.removeFile("Hello World");
	fa.sendFileList();

	checkIfNumbe("01 1 hej med dig\n");

	//User d;
	//d.addUser();
	//d.addUser();
	//d.addUser();
	//d.addUser();
	//d.listUsers();
	getchar();
	return 0;
}