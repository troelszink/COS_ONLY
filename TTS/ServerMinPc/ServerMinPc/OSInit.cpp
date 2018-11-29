#include "OSInit.h"



COSInit::COSInit()
{
	ServerRequestReply * SRR = new ServerRequestReply();
	server = thread(&ServerRequestReply::extract_Execute, SRR);

	server.join();
}


COSInit::~COSInit()
{
}
