#include <vector>
#include "File.h"
#include <fstream>
#include <iostream>
#include "UserConnection.h"
#include "User.h"

using namespace std;
class ArchiveServer : public File, User, UserConnection
{
public:

	ArchiveServer();

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	void constructFile(string name, string address, int root, int fileType, string dataToWrite);

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	string searchForFileAddress(string fileName);		// Leder efter adressen på filen med oplyste navn. Hvis filen findes returneres dens fulde adresse.
	void addFile(File f);								// Tilføjer filer til vektoren Files. Her ligger alle filer på serveren.
	void addFileNames(string n);
	string sendFileList();									// Skal sende alle filnavne klienten ikke har 
	void fileOnServer(string fileName);

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//
	
	void write(string fileName, string dataToWrite);	// Opretter en fil, i første omgang .txt, hvilken der skrives det ønskede indhold til.
	void read(string specificFile);						// Åbner en fil og læser den ind i en stream, hvorefter indholdet gemmes i en string kaldet completeFile.
	void removeFile(string fileName);

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	string getCompleteFile();			//KIIIG			// KUN TIL TEST
	int	   getFileAmount();

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//
	void   checkCommands(string commandList);

	~ArchiveServer();
protected:
	vector <File> files;
	vector <string> fileNames;
	string completeFile;
	int fileAmount;
	int fileNameAmount;
	int currentFile;
	int characterAmount;
};

