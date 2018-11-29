#include "ClientRequestReply.h"



ClientRequestReply::ClientRequestReply()
{
	buffer = Buffer::getInstance();
	commandAmount = 0;  //skal sættes til 0 når komandoerne er færdige - ack fra serveren.
}


void ClientRequestReply::addCommand(string command)
{
	commands.push_back(command);
	commandAmount++;
}

bool ClientRequestReply::isClient()
{
	if (clientAddress.length() == 4 && clientAddress != "1111")
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ClientRequestReply::connectToServer()
{
	if (isClient() == false)
	{
		DHCP();
	}
	else
	{
	
	}
}

void ClientRequestReply::DHCP()
{
	buffer->addTo_appToDatalink("000011114");
}

void ClientRequestReply::upload(string fileName, int command)
{
	if (command == 0)
	{
		buffer->addTo_appToDatalink("000011110");
	}
	else if (command == 1)
	{
		read(fileName);
		completeFile = serverAddress + clientAddress + "1" + completeFile;
		buffer->addTo_appToDatalink(completeFile);
	}
}

void ClientRequestReply::download(string fileName)
{
	string fileData = buffer->takeFrom_datalinkToApp();

	if (fileData[8] == 0)
	{
		//skal have modtaget navne på filer fra server.
	}

	else if (fileData[8] == 2)
	{
		constructFile(fileName, fileName, 0, 0, fileData.substr(9, completeFile.length() - 1));
	}

	else if (fileData[8] == 4)
	{
		bitset <4> b (stoi(fileData.substr(8, 2)));
		clientAddress = b.to_string();
		
		/*b=b.to_ulong();
		b.to_string();*/
	}
}

void ClientRequestReply::test(int i)
{
	cout << commands[i] << endl;
}

ClientRequestReply::~ClientRequestReply()
{
}
