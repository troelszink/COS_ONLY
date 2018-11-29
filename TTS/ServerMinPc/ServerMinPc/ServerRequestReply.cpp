#include "ServerRequestReply.h"



ServerRequestReply::ServerRequestReply()
{
	buffer = Buffer::getInstance();
}

void ServerRequestReply::extract_Execute()
{
	while (true)
	{
		while (!buffer->getBufferLength(4) == 0)
		{
			string commandlist = buffer->takeFrom_datalinkToApp();

			currentUser = commandlist.substr(4, 4);

			if (commands[0][8] == '1') //write
			{
				constructFile("Hello World", "Hello World", 0, 0, commandlist.substr(9, commandlist.length() - 1));
			}
		}
	}


	//while (!buffer->getbufferlength(4)==0)
	//{
	//	for (int i = 0; i < buffer-> getbufferlength(4); i++)
	//	{
	//		string elements = buffer-> getbufferelement(4, i);

	//		if (elements[8] == '5')
	//		{
	//			string commandlist = buffer->takefrom_datalinktoapp();
	//			
	//			currentuser = commandlist.substr(4, 4);

	//			addcommands(commandlist);
	//			checkcommands(commandlist);

	//			commands.erase(commands.begin());

	//			int currentcommand=0;
	//			while (!commands.empty())
	//			{

	//			if (commands[currentcommand][8]=='1') //write
	//				{
	//				string data = buffer->takefrom_datalinktoapp();
	//					constructfile(filenames[0], filenames[0], 0, 0, data.substr(9,data.length()-1));
	//					filenames.erase(filenames.begin());
	//					commands.erase(commands.begin());
	//				}

	//			else if (commands[currentcommand][8] == '2') //read
	//				{
	//					buffer->takefrom_datalinktoapp();
	//					read(filenames[0]);
	//					filenames.erase(filenames.begin());
	//					buffer->addto_apptodatalink(currentuser+serveraddress+"2"+completefile);
	//					commands.erase(commands.begin());
	//				}
	//			else if (commands[currentcommand][8] == '3') //remove
	//				{
	//					buffer->takefrom_datalinktoapp();
	//					removefile(filenames[0]);
	//					filenames.erase(filenames.begin());
	//					commands.erase(commands.begin());
	//				}
	//			}
	//		}

	//		else if (elements[8] == '0') //listfiles
	//		{
	//			listfiles();
	//		}
	//		else if (elements[8] == '4') //broadcast signal
	//		{
	//			//cout << requestbuffer[i].substr(0, 1) << endl;
	//		}
	//	

	//	}

	//}
}

void ServerRequestReply::addCommands(string receivedCommands)
{
	int lineAmount = 0;
	int lastPos = receivedCommands.length() - 1;
	string tmp;
	while (lastPos >= 0)
	{
		if (receivedCommands[lastPos] == 10)
		{
			lineAmount++;
		}
		lastPos--;
	}
	for (int i = 0; i < lineAmount; i++)
	{
		tmp = receivedCommands.substr(0, receivedCommands.find('\n'));
		commands.push_back(tmp);
		receivedCommands.erase(0, receivedCommands.find('\n'));
	}
}




ServerRequestReply::~ServerRequestReply()
{
}
