/**
* @file main.h
* @brief Fichier header contenant les en-têtes des fonctions développées dans main.cpp
* @author J. Ricard
* @version v1.0
* @date 07/12/2025
*/

#ifndef GESTIONCENTRALISEELOGS_MAIN_H
#define GESTIONCENTRALISEELOGS_MAIN_H

#include <iostream>
#include <limits>

using namespace std;

/**
* @fn int main();
* @brief Fonction principale qui permet le lancement du programme
* @return int : renvoie 0 si aucune erreur
*/
int main();

/**
* @fn void afficherMenu();
* @brief Fonction qui permet l'affichage du menu
* @return void : ne renvoie rien.
*/
void afficherMenu();

/**
* @fn void choixMenu(int choix);
* @brief Fonction qui permet l'affichage du choix de l'utilisateur
* @return void : ne renvoie rien.
*/
void choixMenu(int choix);
#endif //GESTIONCENTRALISEELOGS_MAIN_H