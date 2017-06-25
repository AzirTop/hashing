#include <iostream>
#include <string>

#define CORRUPT     0
#define EINFUEGEN   1
#define ENTFERNEN   2
#define ANZEIGEN    3
#define TERMINATE   4

using namespace std;

int main_menu() {
    int choice = 0;
    cout <<"Bitte waehlen Sie eine der folgenden Optionen und bestaetigen Sie mit Enter:\n";
    cout <<"[1] Schluessel Einfuegen\n";
    cout <<"[2] Schluessel Entfernen\n";
    cout <<"[3] Schluessel anzeigen\n";
    cout <<"[4] Programm beenden\n";
    cin >> choice;
    cin.get();
    return choice;
}
void insert_element(){
    string mystr;
    cout << "Welchen Schluessel wollen Sie einfuegen?\n";
    cin.get();
    getline (cin, mystr);
    cout << mystr << " \n";
}
void delete_element(){

}
void display_table_element(){

}
int main() {
    int choice = 0;
    while(1){
        choice = main_menu();
        switch (choice) {
            case CORRUPT: {
                cout<<"Das scheint keine Zahl gewesen zu sein."<<;
                break;
            }
            case EINFUEGEN: {
                insert_element();
                break;
            }
            case ENTFERNEN: {
                delete_element();
                break;
            }
            case ANZEIGEN: {
                display_table_element();
                break;
            }
            case TERMINATE: {
                return 0;
            }
            default:cout <<"Da ist etwas schief gelaufen beim Einlesen.\n"<<;
        }
    }
}
