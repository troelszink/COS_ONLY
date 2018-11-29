#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include "ClientRequestReply.h"

using namespace std;

int main()
{
	ClientRequestReply ca; 
	ca.addCommand("1 det");
	ca.test(0);
	cout << (int)'\n';
	


	getchar();
	return 0;
}