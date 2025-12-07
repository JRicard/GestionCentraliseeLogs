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
    cout << "Votre choix est : " << choix << endl;
    choixMenu(choix);
    return 0;
}

void afficherMenu() {
    cout << "CIEL - Gestion centralisee de logs" << endl;
    cout << "Menu" << endl;
    cout << " Choisir une option" << endl;
    cout << "1 - Afficher log sudo" << endl;
    cout << "2 - Afficher et enregistrer log ssh" << endl;
    cout << "3 - pocoGetAllLog" << endl;
    cout << "4 - pocoGetOneLog" << endl;
    cout << "5 - pocoPostSSHLog" << endl;
    cout << "0 - Sortir du programme" << endl << endl;
}

void choixMenu(int choix) {
    /* Structure if
    if (choix == 1) {
        cout << "log sudo" << endl;
    }
    else if (choix == 2) {
        cout << "log ssh" << endl;
    }
    else if (choix == 3) {
        cout << "pocoGetAllLog" << endl;
    }
    else if (choix == 4) {
        cout << "pocoGetOneLog" << endl;
    }
    else if (choix == 5) {
        cout << "pocoPostSSHLog" << endl ;
    }
    else if (choix == 0) {
        cout << "Bye bye " << endl;
    }
    else {
        cout << "Choix non implémenté, choisir une autre touche svp" << endl;
        main();
    } */

    // Structure switch
    switch (choix) {
        case 1:
            cout << "Afficher log sudo" << endl;
            break;
        case 2:
            cout << "Log ssh" << endl;
            break;
        case 3:
            cout << "pocoGetAllLog" << endl;
            break;
        case 4:
            cout << "pocoGetOneLog" << endl;
            break;
        case 5:
            cout << "pocoPostSSHLog" << endl;
            break;
        case 0:
            cout << "Sortie" << endl;
            break;
        default:
            cout << "Choix non implemente, choisir une autre touche svp" << endl;
            main();
            break;
    }
}