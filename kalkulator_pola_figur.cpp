#include <iostream>
#include <string>
#define PI 3.14

using namespace std;
void initMenuBox();
void menuDecision(int);
double poleKola(double);
double poleKwadratu(double);
double poleProstokata(double, double);
double poleTrojkata(double, double);
bool isRight(string error_mag);

int main() {
    char znak = 'T';
    int wybor;

    do {
        system("cls");
        initMenuBox();

        while (!(cin >> wybor)) {
            cin.clear();
            cin.ignore(1024, '\n');
            system("cls");
            initMenuBox();
            cout << "Wpisales niepoprawny znak. Wybierz miedzy 1, 2, 3, albo 4: " << endl;
        }
        menuDecision(wybor);
        do {
            cout << "Czy chcesz kontynuowac program? (T/N)" << endl;
            cin >> znak;
            cin.ignore(1024, '\n');
        } while (znak != 'n' && znak != 'N' && znak != 't' && znak != 'T');
    } while (znak =='t' || znak == 'T');
}

void initMenuBox() {
    cout << "wybierz opcje"<< endl;
    cout << "1. Pole kola"<< endl;
    cout << "2. Pole kwadratu"<< endl;
    cout << "3. Pole prostokata"<< endl;
    cout << "4. Pole trojkata"<< endl;
}

void menuDecision(int wybor) {
    system("cls");
    initMenuBox();
    double a, b, h, r;
    switch (wybor) {
    case 1:
        cout << "Podaj promień: " << endl;
        do{cin >> r;} while(!isRight("Źle. Podaj promien ponownie: "));
        poleKola(r);
        break;
    case 2:
        cout << "Podaj dlugosc bokow: " << endl;
        do{cin >> a;} while(!isRight("Źle. Podaj dlugosc bokow ponownie: "));
        poleKwadratu(a);
        break;
    case 3:
        cout << "Podaj szerokosc oraz wysokosc prostokata: " << endl;
        do{cin >> a >> b;} while(!isRight("Źle. Jedna z danych jest nieprawidlowo. Podaj dane ponownie: "));
        poleProstokata(a, b);
        break;
    case 4:
        cout << "Podaj podstawe oraz wysokosc trojkata: " << endl;
        do{cin >> a >> h;} while(!isRight("Źle. Jedna z danych jest nieprawidlowo. Podaj dane ponownie: "));
        poleTrojkata(a, h);
        break;
    default:
        cout << "Nie wybrales odpowiedniej opcji z menu" << endl;
    }
}

double poleKola(double r) {
    double wynik = PI * r * r;
    cout << "pole kola o promieniu " << r << " wynosi: " << wynik << endl;
    return wynik;
}

double poleKwadratu(double a) {
    double wynik = a * a;
    cout << "pole kwadratu o boku " << a << " wynosi: " << wynik << endl;
    return wynik;
}
double poleProstokata(double a, double b) {
    double wynik = a * b;
    cout << "pole kwadratu o bokach " << a << " i " << b << " wynosi: " << wynik << endl;
    return wynik;
}
double poleTrojkata(double a, double h) {
    double wynik = 0.5 * a * h;
    cout << "pole kwadratu o podstawie " << a << " i wysokosci " << h << " wynosi: " << wynik << endl;
    return wynik;
}
bool isRight(string error_mag){
    if(cin.rdstate()){
        cin.clear();
        cin.ignore(1024, '\n');
        system("cls");
        initMenuBox();
        cout << error_mag << endl;
        return false;
    }
    return true;
}