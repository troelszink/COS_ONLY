#include "ServerLog.h"


class UserConnection : public ServerLog
{
public:
	UserConnection();

	void	login(string userId);
	void	logout(string userId);

	~UserConnection();
};

