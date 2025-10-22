#include <iostream>
using namespace std;

int main()
{
    /*  int a;                                                        //zad1
      int b;

      cout << "Podaj dwie liczby:\n";
      cin >> a;
      cin >> b;
      if (a == b) {
          cout << "Liczby sa sobie rowne.";
      }
      else if(a<b){
          cout << "Druga liczba jest wieksza od pierwszej.";

      }
      else {
          cout << "Pierwsza liczba jest wieksza od drugiej.";
      }   */

      /*
      int a;                                                        //zad2
      int b;

      cout << "Podaj dwie liczby:\n";
      cin >> a;
      cin >> b;
      if (a > b && a!=b) {
          cout << "Pierwsza liczba jest wieksza od drugiej.";
      }
      if (a < b && a!=b) {
          cout << "Druga liczba jest wieksza od pierwszej.";

      }
      if (a == b) {
          cout << "Liczby sa sobie rowne.";
      }
      */
      /*
      float r;
      cout << "Podaj r:\n";
      cin >> r;
      if (0.7 <= r && r <= 1) {
          cout << "Wspolczynnik r wskazuje na bardzo silna korelacje dodatnia.";
       }
      else if (r >= 0.5) {
          cout << "Wspolczynnik r wskazuje na silna korelacje dodatnia.";
      }
      else if (r >= 0.3) {
          cout << "Wspolczynnik r wskazuje na umiarkowana korelacje dodatnia.";
      }
      else if (r >= 0.2) {
          cout << "Wspolczynnik r wskazuje na slaba korelacje dodatnia.";
      }
      else if (r >= 0) {
          cout << "Wspolczynnik r nie wskazuje korelacji";
      }
      */
      /*
      float a;      //zad 4
      float b;
      char opcja;
      cout << "Podaj dwie liczby:";
      cin >> a;
      cin >> b;
      cout << "Podaj symbol dzialania, ktore bedzie wykonywane:\n+ - DODAWANIE\n- - ODEJMOWANIE\n* - MNOZENIE\n/ - DZIELENIE\n";
      cin >> opcja;
      switch (opcja) {
      case '+':
          cout << a + b;
          break;
      case '-':
          cout << a - b;
          break;
      case '*':
          cout << a * b;
          break;
      case '/':
          if (b == 0) {
              cout << "Nie mozna dzielic przez 0.";
          }
          else{
              cout << a / b;
          }
          break;
      default:
          cout << "Niepoprawny znak.";
      }
    */
    /*
    bool zmienna_logiczna = true;       //zad 5

    while (zmienna_logiczna == true) {
        cout << "prawda" << endl;
    }
    */
    /*
    float a;                    //zad 6
    float b;
    int c = 1;
    char opcja;
    while (c == 1) {
        cout << "Podaj dwie liczby:\n";
        cin >> a;
        cin >> b;
        cout << "Podaj symbol dzialania, ktore bedzie wykonywane:\n+ - DODAWANIE\n- - ODEJMOWANIE\n* - MNOZENIE\n/ - DZIELENIE\n";
        cin >> opcja;
        
        if (c == 0) {
            return 0;
        }
        else {
            switch (opcja) {
            case '+':
                cout << a + b << "\n";
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            case '-':
                cout << a - b << "\n";
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            case '*':
                cout << a * b << "\n";
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            case '/':
                if (b == 0) {
                    cout << "Nie mozna dzielic przez 0.\n";
                }
                else {
                    cout << a / b << "\n";
                }
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            default:
                cout << "Niepoprawny znak.\n";
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
            }
        }

    }

    */

int a=0;
bool i = true;
while (i = true) {
    a++;
    if (a % 2 != 0) {
        cout << a << "\n";
        if (a == 200) {
            return 0;
        }
    }

  
}


}



