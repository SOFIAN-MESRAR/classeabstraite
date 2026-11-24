// classeabstraite.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"
int main()
{
    NotificationEmail email("sara@example.com", "Securite", "Nouvelle connexion detectee");
    NotificationSMS sms("0612345678", "Orange", "Votre code est 4582");
    NotificationPush push("user_102", "MyBank", "Paiement confirme");

   
    Notification* tableauNotifs[3] = { &email, &sms, &push };

   
    cout << "=== Affichage et envoi via tableau de pointeurs ===" << endl;
    for (int i = 0; i < 3; ++i) {
        tableauNotifs[i]->afficher();
        tableauNotifs[i]->envoyer();
    }

    // Correction : instanciation et utilisation du gestionnaire dans main()
    GestionnaireNotifications gestionnaire;
    gestionnaire.ajouterNotification(&email);
    gestionnaire.ajouterNotification(&sms);
    gestionnaire.ajouterNotification(&push);

    gestionnaire.envoyerToutes();

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
