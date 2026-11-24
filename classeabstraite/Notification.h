#pragma once
#include <iostream>
using namespace std;    
class Notification
{
protected:
    string destinataire;
    string message;

public:
    Notification( string dest, string msg);
	virtual void envoyer() const = 0; // Méthode pure virtuelle
	virtual void afficher()const; 
	virtual ~Notification() {} // Destructeur virtuel
};

