#include "NotificationPush.h"

NotificationPush::NotificationPush(string dest, string msg, string app)
	: Notification(dest, msg), application(app)
{
}

void NotificationPush::envoyer() const
{
	cout << "Envoi de la notification push à " << destinataire << " via l'application '" << application << "' avec le message: " << message << endl;
}

void NotificationPush::afficher() const
{
	cout << "Destinataire: " << destinataire << endl;
	cout << "Application: " << application << endl;
	cout << "Message: " << message << endl;
}
 