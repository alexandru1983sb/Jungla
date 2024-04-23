// Jungla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define Grr "Leii"
#define Rawr "Tigrii"
#define Sss "Serpii"
#define Cirip "Pasarile"




int main() {
    string sunete;
    int leii = 0, tigrii = 0, serpii = 0, pasarile = 0;
    cout << "Jungla.\n\n";
    cout << "Cuvintele cheie sunt : \n";
    cout << " - Grr   Leii\n";
    cout << " - Rawr  Tigrii\n";
    cout << " - Sss   Serpii\n";
    cout << " - Cirip Pasarile\n\n\n";
    cout << "Adaugati un string : ";
    getline(cin, sunete);

    int spaceCount = 0;
    for (char ch : sunete) {
        if (ch == ' ') {
            spaceCount++;
        }
    }

    cout << "Afisam numerul de spatii : " << spaceCount << endl;
    cout << "\n\n";

    stringstream verificam(sunete);
    string word;
    cout << "Descifram sunetele in animale : ";
    while (verificam >> word) {
        if (word == "Grr") {
            std::cout << Grr << " ";
            leii++;
        }
        if (word == "Rawr") {
            std::cout << Rawr << " ";
            tigrii++;
        }
        if (word == "Sss") {
            std::cout << Sss << " ";
            serpii++;
        }
        if (word == "Cirip") {
            std::cout << Cirip << " ";
            pasarile++;
        }      
    }
    cout << "\n\n";
    cout << "Afisam de cate ori au urlat animalele in jungla : \n";
    if (leii != 0) {
        cout << Grr << "     : " << leii << endl;
    }
    if (tigrii != 0) {
        cout << Rawr << "   : " << tigrii << endl;
    }
    if (serpii != 0) {
        cout << Sss << "   : " << serpii << endl;
    }
    if (pasarile != 0) {
        cout << Cirip << " : " << pasarile << endl;
    }
}

