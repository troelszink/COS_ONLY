#include <vector>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class ServerLog
{
public:

	ServerLog();

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	void    logListFiles();

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	void	logWrite(int fileOnList, string fileName);			//Når en fil tilføjes serveren logger den filens nummer på listen af filer.
	void	logRead(int fileOnList, string fileName);			//Når en fil hentes fra serveren logger den filens nummer på listen af filer.
	void	logRemove(int fileOnList, string fileName);			//Når en fil fjernes fra serveren logger den filens nummer på listen af filer.
	void	logLogin(int userId);
	void	logLogout(int userId);

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	void	addLogElement(string toBeLoged);					//Tilføjer et element til vektoren logVector.

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	void	logSaveToFile();									//Gemmer logen til en fil på serveren.
	
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	string	logChanges(string ClientId);

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

	~ServerLog();

protected:

	int logAmount;
	vector <string> logVector;

};

