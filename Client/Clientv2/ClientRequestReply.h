#include <string>
#include "ArchiveClient.h"
#include "Buffer.h"
#include <vector>

using namespace std;
class ClientRequestReply : public ArchiveClient
{
public:
	ClientRequestReply();

	void addCommand(string command);
	bool isClient();
	void connectToServer();
	void DHCP();										//Dynamic Host Configuration Protokol
	void upload(string fileName, int command);
	void download(string fileName);
	void test(int i);

	~ClientRequestReply();

private:
	Buffer *buffer;
	int commandAmount;
	vector <string> commands;
	string serverAddress = "0000";
	string tempClientAddress = "1111";
	string clientAddress = "";
};

