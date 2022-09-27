#include <iostream>
using namespace std;
#define phi 3.1415;
int main () {

double jari-jari, tinggi, luas, volume;
cout << "masukan nilai jari-jari tabung = ";
cin >> jari-jari ;
cout << "masukan nilai tinggi tabung = ";
cin >> tinggi ;

luas = jari-jari*jari-jari*phi;
volume = luas*tinggi;

cout << "luas tabung adalah " <<luas << endl;
cout << "volume tabung adalah " << volume << endl;
return 0;
}