#include <iostream>
using namespace std;

class ComplexNumber {
private:
    float real;
    float imaginary;

public:
    // Constructeur pour initialiser la partie réelle et imaginaire
    ComplexNumber(float r, float i) : real(r), imaginary(i) {}

    // Fonction pour additionner deux nombres complexes
    ComplexNumber add(ComplexNumber num) {
        return ComplexNumber(real + num.real, imaginary + num.imaginary);
    }

    // Fonction pour soustraire deux nombres complexes
    ComplexNumber subtract(ComplexNumber num) {
        return ComplexNumber(real - num.real, imaginary - num.imaginary);
    }

    // Fonction pour multiplier deux nombres complexes
    ComplexNumber multiply(ComplexNumber num) {
        float result_real = (real * num.real) - (imaginary * num.imaginary);
        float result_imaginary = (real * num.imaginary) + (imaginary * num.real);
        return ComplexNumber(result_real, result_imaginary);
    }

    // Fonction pour diviser deux nombres complexes
    ComplexNumber divide(ComplexNumber num) {
        float denominator = (num.real * num.real) + (num.imaginary * num.imaginary);
        float result_real = ((real * num.real) + (imaginary * num.imaginary)) / denominator;
        float result_imaginary = ((imaginary * num.real) - (real * num.imaginary)) / denominator;
        return ComplexNumber(result_real, result_imaginary);
    }

    // Fonction pour afficher le nombre complexe
    void display() {
        if (imaginary < 0)
            cout << "Le nombre complexe est : " << real << " - " << -imaginary << "i" << endl;
        else
            cout << "Le nombre complexe est : " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    float real1, imaginary1, real2, imaginary2;

    cout << "Entrez la partie reelle du premier nombre complexe : ";
    cin >> real1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginary1;

    cout << "Entrez la partie reelle du deuxieme nombre complexe : ";
    cin >> real2;
    cout << "Entrez la partie imaginaire du deuxieme nombre complexe : ";
    cin >> imaginary2;

    ComplexNumber num1(real1, imaginary1);
    ComplexNumber num2(real2, imaginary2);

    int choice;
    cout << "Choisissez l'operation a effectuer : " << endl;
    cout << "1. Egalite\n2. Addition\n3. Soustraction\n4. Multiplication\n5. Division\n";
    cin >> choice;

    switch (choice) {
        case 1:
            if (real1 == real2 && imaginary1 == imaginary2)
                cout << "Les nombres complexes sont egaux." << endl;
            else
                cout << "Les nombres complexes ne sont pas egaux." << endl;
            break;
        case 2:
            num1.add(num2).display();
            break;
        case 3:
            num1.subtract(num2).display();
            break;
        case 4:
            num1.multiply(num2).display();
            break;
        case 5:
            num1.divide(num2).display();
            break;
        default:
            cout << "Choix invalide." << endl;
            break;
    }

    return 0;
}
