#include <string>
#include <vector>
#include <iostream>
#include "ArchiveServer.h"
#include "Buffer.h"

using namespace std;

class ServerRequestReply : public ArchiveServer
{
public:
	ServerRequestReply();

	void extract_Execute();
	
	void addCommands(string receivedCommands);
	

	~ServerRequestReply();
private:
	Buffer *buffer;
	string command;
	vector <string> commands;
	string currentUser;

	string serverAddress = "0000";
	string tempClientAddress = "1111";
	string clientAddress = "";
};

