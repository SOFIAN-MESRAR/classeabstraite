#pragma once
#include "Notification.h"
class NotificationPush :  public Notification
{
private:
	string application;

public:
	NotificationPush(string dest, string msg, string app);
	void envoyer() const override;
	void afficher() const override;
	~NotificationPush() {}
};

