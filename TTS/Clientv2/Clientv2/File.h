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

	~File();

private:
	string name;
	string address;
	int root;
	int fileType;
	string data;
	string fileTypes[4] = { ".txt" };
	string rootAddress = "C:/Users/TZink/Dropbox/SDU Robotteknologi/Client/Client/";
};

