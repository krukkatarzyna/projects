#include <iostream>
#include <string>
using namespace std;

int main(){
    bool isTrue = true;
    string gracz1;
    string gracz2;
    string wejscie;
    char znak = 'T';

    cout << "*** GRA *** " << endl;
    cout <<  "*** PAPIER KAMIEN NOZYCE ***" << endl;
    do {
        do {
            cout << "Pierwszy gracz wybiera (P/K/N)" << endl;
            cin >> gracz1;
            cin.ignore(1023, '\n');
        } while (gracz1 != "p" && gracz1 != "P" && 
    gracz1 != "k" && gracz1 != "K" && 
    gracz1 != "n" && gracz1 != "N");

        
        do {
            cout << "Drugi gracz wybiera (P/K/N)" << endl;
            cin >> gracz2;
            cin.ignore(1023, '\n');
        } while (gracz2 != "p" && gracz2 != "P" && 
    gracz2 != "k" && gracz2 != "K" && 
    gracz2 != "n" && gracz2 != "N");

        if (gracz1 == "k" && gracz2 == "n" || 
        gracz1 == "k" && gracz2 == "N" || 
        gracz1 == "K" && gracz2 == "n" || 
        gracz1 == "K" && gracz2 == "N" ) 
            cout << "Gracz 1 wygral" << endl;
        else if(gracz1 == "p" && gracz2 == "k" || 
        gracz1 == "P" && gracz2 == "k" || 
        gracz1 == "p" && gracz2 == "K" || 
        gracz1 == "P" && gracz2 == "K" ) 
            cout << "Gracz 1 wygral" << endl;
        else if(gracz1 == "n" && gracz2 == "p" || 
        gracz1 == "N" && gracz2 == "p" || 
        gracz1 == "n" && gracz2 == "P" || 
        gracz1 == "N" && gracz2 == "P" ) 
            cout << "Gracz 1 wygral" << endl;
        else if(gracz1 == "k" && gracz2 == "k" || 
        gracz1 == "K" && gracz2 == "k" || 
        gracz1 == "k" && gracz2 == "K" || 
        gracz1 == "K" && gracz2 == "K" ||
        gracz1 == "p" && gracz2 == "p" || 
        gracz1 == "P" && gracz2 == "p" || 
        gracz1 == "p" && gracz2 == "P" || 
        gracz1 == "P" && gracz2 == "P" ||
        gracz1 == "n" && gracz2 == "n" || 
        gracz1 == "N" && gracz2 == "n" || 
        gracz1 == "n" && gracz2 == "N" || 
        gracz1 == "N" && gracz2 == "N") 
            cout << "Remis!" << endl;
        else
        cout << "Gracz 2 wygrał" << endl;
        
        do {
            cout << "Czy chcesz zagrac jeszcze raz? (T/N)" << endl;
            cin >> znak;
            cin.ignore(1024, '\n');
        } while (znak != 'n' && znak != 'N' && znak != 't' && znak != 'T');
  
    }while(isTrue != false && znak =='t' || znak == 'T');
    return 0;
}