#include <iostream>
using namespace std;

int main ()
{

  float a, b, c;
  cout << "Adj meg egy szamot: ";
  cin >> a;
  cout << "Adj meg egy masik szamot: ";
  cin >> b;
  cout << "Adj meg egy harmadik szamot: ";
  cin >> c;

  cout << "A harom szam osszege: " << a + b + c << endl;
  cout << "A harom szam kulonbsege: " << a - b - c << endl;
  cout << "A harom szam szorzata: " << a * b * c << endl;
  cout << "A harom szam hanyadosa: " << a / b / c << endl;

}
