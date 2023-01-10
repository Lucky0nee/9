#include <iostream>
using namespace std;

int main() {
  setlocale(LC_CTYPE, "ukr");
  int rights, mask = 4;
  cout << "Введiть рiвень прав доступу: "; cin >> rights;
  
  cout << "Маска: " << mask << "\n";
  if (rights < 0 || rights > 7){
    cout << "Error" << "\n";
    return 0;
  }
  
  if (rights & mask) {
    cout << "The user has read permissions" << "\n";
  }
  else {
    cout << "The user does not have read permissions" << "\n";
  }
}
