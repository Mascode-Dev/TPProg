using namespace std;

#include <cmath>
#include <string>
#include <iostream>

void dessinRectangle(int l, int h) {
    for (int ligne(0); ligne < h; ligne++) {
 
 
        for (int colonne(0); colonne < l; colonne++) {
 
            cout << "*";
 
        }
        cout << endl;
    }
}

int diagonale(int l, int h){
	// Utilisation du theorème de Pythagore. a² + b² = c²

	double l_carre = pow(l, 2);
	double h_carre = pow(h, 2);
	double diagonaleCarre = l_carre + h_carre;
	double resultat = sqrt(diagonaleCarre);

	return resultat;
}

int main(int argc, char const *argv[]){
	int longueur;
	int hauteur;

	cout << "Ce programme est destine à afficher un rectangle en caractère ASCII." << endl;

	cout << "Entrez la longueur de ce rectangle" << endl;
	cin >> longueur;

	cout << "Entrez la hauteur de ce rectangle" << endl;
	cin >> hauteur;

	dessinRectangle(longueur, hauteur);

	cout << "La longueur de la diagonale du carré est de : " << diagonale(longueur, hauteur) << "unites" << endl;

	

	cout << "Programme termine" << endl;


	return 0;
}