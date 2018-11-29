#include "ServerLog.h"

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

ServerLog::ServerLog()
{
	int logAmount = 0;

}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

void ServerLog::logListFiles()
{
	//Tilføj user id.
	string logElement = "0 - Listed Files on server\n";
	addLogElement(logElement);

	if (logAmount == 100)
	{
		logSaveToFile();
		logAmount = 0;
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

void ServerLog::logWrite(int fileOnList, string fileName)
{
	// user id - kommando id - fil id
//Tilføj user id.
	string logElement = "U-ID 1 ";
	logElement += to_string(fileOnList);
	logElement += " " + fileName;
	logElement += " to the server\n";
	addLogElement(logElement);

	if (logAmount == 100)
	{
		logSaveToFile();
		logAmount = 0;
	}
}

void ServerLog::logRead(int fileOnList, string fileName)
{
	//Tilføj user id.
	string logElement = "U-ID 2 ";
	logElement += to_string(fileOnList);
	logElement += " " + fileName;
	logElement += " from the server\n";
	addLogElement(logElement);

	if (logAmount == 100)
	{
		logSaveToFile();
		logAmount = 0;
	}
}

void ServerLog::logRemove(int fileOnList, string fileName)
{
	//Tilføj user id.
	string logElement = "U-ID 3 ";
	logElement += to_string(fileOnList);
	logElement += " " + fileName;
	logElement += " from the server\n";
	addLogElement(logElement);

	logSaveToFile();
	if (logAmount == 100)
	{
		logSaveToFile();
		logAmount = 0;
	}
}

void ServerLog::logLogin(int userId)
{
	string logElement = to_string(userId);
	logElement += " logged in to the server\n";

	if (logAmount == 100)
	{
		logSaveToFile();
		logAmount = 0;
	}
}

void ServerLog::logLogout(int userId)
{
	string logElement = to_string(userId);
	logElement += " logged out of the server\n";
	addLogElement(logElement);

	if (logAmount == 100)
	{
		logSaveToFile();
		logAmount = 0;
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

void ServerLog::addLogElement(string toBeLoged)
{
	logVector.push_back(toBeLoged);
	logAmount++;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

void ServerLog::logSaveToFile()
{
	ofstream fileToWrite;														// Opretter en stream, hvori en fil kan åbnes.
	fileToWrite.open("ServerLog.txt", ios::app);									// Den ønskede fil åbnes.

	for (int i = 0; i<logAmount ; i++) 
	{
		fileToWrite << logVector[i];												// Det ønskede data skrives ind i den åbne fil.
	}

	cout << endl << "-------------------------[Amount of log elements]------------------------------" << endl << endl;
	cout << "~[ "<< logAmount << " ]~"<< endl;
					
	fileToWrite.close();
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

string ServerLog::logChanges(string ClientId)
{
	for (int i = logAmount - 1; i >= 0; i--)
	{
	//	if(//currentClientId==logId)
	}

	for (int i = 99; i > logAmount-1; i--)
	{
	}

	return string();
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//

ServerLog::~ServerLog()
{
}
