#include <iostream>
#include <string>
using namespace std;

class Personne {
    private: string nom, prenom, dateNaissance;
    public:
        Personne(string n, string p, string d) : nom(n), prenom(p), dateNaissance(d) {}
        virtual void Afficher() {
            cout<<"Nom: "<<nom<<", Prenom: "<<prenom<<", Date de naissance: "<<dateNaissance<<endl;
        }
};

class Employe : public Personne {
    private: double salaire;
    public:
        Employe(string n, string p, string d, double s) : Personne(n, p, d), salaire(s) {}
        void Afficher() {
            Personne::Afficher();
            cout<<"Salaire: "<<salaire<<endl;
        }
};

class Chef : public Employe {
    private: string service;
    public:
        Chef(string n, string p, string d, double s, string serv): Employe(n, p, d, s), service(serv) {}
        void Afficher() {
            Employe::Afficher();
            cout<<"Service: "<<service<<endl;
        }
};

class Directeur : public Chef {
    private: string societe;
    public:
        Directeur(string n, string p, string d, double s, string serv, string soc): Chef(n, p, d, s, serv), societe(soc) {}
        void Afficher() {
            Chef::Afficher();
            cout<<"Societe: "<<societe<<endl;
        }
};

int main() {
    Personne personne("Doe", "John", "01/01/1990");
    Employe employe("Smith", "Alice", "15/03/1985", 50000.0);
    Chef chef("Johnson", "Bob", "10/05/1978", 80000.0, "R&D");
    Directeur directeur("Williams", "Emily", "20/11/1970", 120000.0, "Marketing", "XYZ Company");

    cout << endl << "------------------- Affichage PERSONNE :: -----------------"<<endl;
    personne.Afficher();
    cout << endl << "------------------- Affichage EMPLOYE :: -----------------"<<endl;
    employe.Afficher();
    cout << endl << "------------------- Affichage CHEF :: -----------------"<<endl;
    chef.Afficher();
    cout << endl << "------------------- Affichage DIRECTEUR :: -----------------"<<endl;
    directeur.Afficher();

    return 0;
}
