#pragma once
#include "Notification.h"
class NotificationSMS : public Notification
{
private:
	string operateur;

public:
	NotificationSMS(string dest, string msg, string op);
	void envoyer() const override;
	void afficher() const override;
	~NotificationSMS() {}
};

