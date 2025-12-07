/**
* @file main.cpp
* @brief Fichier principal qui permet le lancement du programme via la fonction main()
* @author J. Ricard
* @version v1.0
* @date 07/12/2025
*/

#include "main.h"

int main(){
    afficherMenu();
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
    cout << "0 - Sortir du programme" << endl;
}
