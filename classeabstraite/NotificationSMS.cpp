#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string dest, string msg, string op)
	: Notification(dest, msg), operateur(op)
{
}

void NotificationSMS::envoyer() const
{
		cout << "Envoi du SMS à " << destinataire << " via l'opérateur " << operateur << " avec le message: " << message << endl;
}

void NotificationSMS::afficher() const
{
	cout << "Destinataire: " << destinataire << endl;
	cout << "Opérateur: " << operateur << endl;
	cout << "Message: " << message << endl;
}

