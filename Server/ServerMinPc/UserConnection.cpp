#include "UserConnection.h"



UserConnection::UserConnection()
{
}

void UserConnection::login(string userId)
{
	logLogin(stoi(userId));
}

void UserConnection::logout(string userId)
{
	logLogout(stoi(userId));
}

UserConnection::~UserConnection()
{
}
