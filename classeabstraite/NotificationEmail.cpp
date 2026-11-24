#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string dest, string msg, string obj)
	: Notification(dest, msg), objet(obj)
{
}

void NotificationEmail::envoyer() const
{
	cout << "Envoi de l'email à " << destinataire << " avec l'objet '" << objet << "' et le message: " << message << endl;

}

void NotificationEmail::afficher() const
{
	cout << "Destinataire: " << destinataire << endl;
	cout << "Objet: " << objet << endl;
	cout << "Message: " << message << endl;
}

