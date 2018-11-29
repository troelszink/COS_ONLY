#include <thread>
#include "ServerRequestReply.h"


using namespace std;
class COSInit
{
public:
	COSInit();
	~COSInit();

private:
	thread server;

};

