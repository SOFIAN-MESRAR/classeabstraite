#include "Notification.h"

Notification::Notification( string dest,  string msg)
	: destinataire(dest), message(msg)
{
}

void Notification::afficher() const
{
	cout << "Destinataire: " << destinataire << endl;
	cout << "Message: " << message << endl;	
}

