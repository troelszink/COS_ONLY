#include "File.h"

using namespace std;

File::File()
{
}

File::File(string nameCon, string addressCon, int rootCon, int fileTypeCon, string dataCon)
{
	name = nameCon;
	address = addressCon;
	root = rootCon;
	fileType = fileTypeCon;
	data = dataCon;
}

string File::getName()
{
	return name;
}

string File::getAddress()
{
	return address;
}

string File::getRootAddress()
{
	return rootAddress;
}

int File::getRoot()
{
	return root;
}

string File::getFileType()
{
	return fileTypes[fileType] ;
}

string File::getData()
{
	return data;
}

File::~File()
{
}