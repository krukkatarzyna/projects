#include <iostream>
#include <string>

using namespace std;
int * lotto(int,int);
const int ILOSC_KULEK = 49;

int main(){
   cout << "\n" << "_______________________________________" << "\n\n";

    int ile;
    cout << "Podaj ile liczb chcesz wylosowac sposrod " << ILOSC_KULEK << endl;
    cin >> ile;

    int *wsk = lotto(ILOSC_KULEK, ile);
    if(wsk != NULL){
        for(int i=0; i<ile; i++){
            cout << "ball [" << i+1 << "] = " << wsk[i] << endl;
        }
    } else{cout << "Podales/as wieksza ilosc kulek niz jest dozwolona, czyli " << ILOSC_KULEK << endl;}

    cout << "\n" << "_______________________________________" << "\n\n";
}

int * lotto(int total_bolls,int balls_to_allot){
    if (total_bolls < balls_to_allot){
        cout << "blad" <<endl;
        return NULL;
    }
    srand(time(NULL));
    int *balls = new int[balls_to_allot];
    for (int i=0; i<balls_to_allot; i++){
        balls[i] = rand() % total_bolls + 1;

        for(int j=0; j<i+1; j++){
            if (balls[i] == balls[j] && i != j){
                i--;
                break;
            }
        }
    }
    return balls;
}