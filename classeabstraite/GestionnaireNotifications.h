#pragma once
#include "Notification.h"
class GestionnaireNotifications
{
private:
    static const int CAPACITE_MAX = 100;
    Notification* notifications[CAPACITE_MAX];
    int compteur;

public:
    GestionnaireNotifications();
    void ajouterNotification(Notification* notification);
    void envoyerToutes() const;
    void afficherToutes() const;
	~GestionnaireNotifications();
};

