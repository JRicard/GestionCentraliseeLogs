/**
* @file main.cpp
* @brief Fichier principal qui permet le lancement du programme via la fonction main()
* @author J. Ricard
* @version v1.0
* @date 07/12/2025
*/

#include "main.h"

int main(){
    int choix = 0;
    afficherMenu();
    cout << "Votre choix : ";
    cin >> choix;
    if (!cin.good()) {
        cout << "Erreur de saisie." << endl << endl;
        cin.clear(); // Effacer les indicateurs d'erreur
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // on vide tout
        main();
    } else {
        cout << "Votre choix est : " << choix << endl;
        choixLog(choix);
    }
    return 0;
}

