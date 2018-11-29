#include "User.h"



User::User()
{
	userAmount = 0;
}

string User::createUser()
{
	if (userAmount == 0)
	{
		return bitset<4>(1).to_string();
	}
	else
	{
		return bitset<4>(stoi(users[userAmount-1]) + 1).to_string();
	}
}

void User::addUser()
{
	users[userAmount] = createUser();
	userAmount = userAmount + 1;
}

void User::listUsers()
{
	for (int i = 0; i < userAmount; i++)
	{
		cout << getUser(i) << endl;
	}
}



string User::getUser(int user)
{
	return users[user];
}


User::~User()
{
}
