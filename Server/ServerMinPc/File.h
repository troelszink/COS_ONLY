#include <string>
#include <array>

using namespace std;

class File
{
public:

	File();

	File(string name, string address, int root, int fileType, string data);
	string getName();
	string getAddress();
	string getRootAddress();
	int getRoot();
	string getFileType();
	string getData();

	~File();

private:

	string name;
	string address;
	int root;
	int fileType;
	string data;
	string fileTypes[4] = { ".txt" };
	string rootAddress = "C:/Users/Mirzet/Dropbox/Uni 3. semester/Projekt/ServerMinPc/ServerMinPc/";

};

