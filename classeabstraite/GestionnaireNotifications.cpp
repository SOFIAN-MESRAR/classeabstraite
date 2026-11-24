#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications()
	: compteur(0)
{
	for(int i = 0; i < CAPACITE_MAX; ++i)
	{
		notifications[i] = nullptr;
	}
}

void GestionnaireNotifications::ajouterNotification(Notification* notification)
{
    if (notification == nullptr) {
        return;
    }
    if (compteur < CAPACITE_MAX) {
        notifications[compteur] = notification;
        compteur++;
    }
    else {
        cout << "Erreur : Le gestionnaire de notifications est plein !" << endl;
    }
}

void GestionnaireNotifications::envoyerToutes() const
{
    for (int i = 0; i < compteur; ++i) {
        if (notifications[i] != nullptr) {
            notifications[i]->envoyer();
        }
    }
}

void GestionnaireNotifications::afficherToutes() const
{
    for (int i = 0; i < compteur; ++i) {
        if (notifications[i] != nullptr) {
            notifications[i]->afficher();
        }
    }
}

GestionnaireNotifications::~GestionnaireNotifications()
{
}
