#include <iostream>

using namespace std;

int main(){

float V, I, R;
float rumus_Arus, rumus_Tegangan, rumus_Hambatan;


cout << "Masukan nilai arus(I): ";
cin >> I;

cout << "Masukan nilai tegangan (V): ";
cin >> V; 

cout << "Masukan nilai hambatan (R): ";
cin >> R;


rumus_Arus = V / R;

rumus_Tegangan = I * R;

rumus_Hambatan = V / I;


cout << "Hasil perhitungan dari arus(I): " << rumus_Arus << endl;

cout << "Hasil perhitungan dari tegangan (V): " << rumus_Tegangan << endl;

cout << "Hasil perhitungan dari hambatan (R): "<< rumus_Hambatan << endl;

return 0;

}
