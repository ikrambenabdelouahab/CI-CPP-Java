#include <iostream>
using namespace std;

class Rectangle {
  public :
    int largeur, hauteur;

  Rectangle(){ // constructeur par défauts
    largeur = 0;
    hauteur = 0;
  }

  int Perimetre(){
    return 2*(largeur+hauteur);
  }
  int Surface(){
    return largeur*hauteur;
  }
  void Affichage(){
    cout << "Largeur =" << largeur << endl;
    cout << "Hauteur =" << hauteur << endl;
  }
  int getHauteur(){
    return hauteur;
  }
  int getLargeur(){
    return largeur;
  }
  void setHauteur(int nouveau_hauteur){
    hauteur = nouveau_hauteur;
  }
  void setLargeur(int nouveau_largeur){
    largeur = nouveau_largeur;
  }
};

int main() {
  Rectangle r1 = Rectangle();
  int h;
  cout << "Donnez la hauteur" << endl;
  cin >> h;
  
  r1.setHauteur(h);
  r1.setLargeur(9);

  cout << "Calcul de la surface" << endl;
  cout << "surface = " << r1.Surface() << endl;

  cout << "Calcul du Perimetre" << endl;
  int p;
  p = r1.Perimetre();
  cout << "Perimetre = " << p << endl;

  r1.Affichage();

}