#include <iostream>
using namespace std;
int main() {
 double P, H, IMC;
 cout << "Informe qual a Sua altura em M: ";
 cin >> H;
 cout << "informe seu peso em KG: " ;
 cin >> P;
 IMC = P/ (H * H);
 cout <<"O IMC referente é de "<<IMC <<"\n";
 if (IMC <= 18.5){
 cout << "A pessoa está abaixo do peso e deve se alimentar melhor e com melhor qualidade!";
 }
 if (IMC >= 18.51 && IMC <= 24.9){
 cout << "A pessoa se encontra com IMC normal e tem que controlar para permanecer desta forma!";
 }
 if (IMC >= 25 && IMC <= 29.9){
 cout << "A pessoa se encontra em sobrepeso e deve se previnir para não agravar a saúde!";
 }
 if (IMC >= 30 && IMC <= 34.9){
 cout << "A pessoa se encontra em Obsidade e deve ficar bem atento a saúde!";
 }
 if (IMC >= 35 && IMC<=39.9 ){
 cout << "A pessoa se encontra em Obesidade Severa e precisa de ajuda médica!";
 }
 if (IMC >40){
 cout << "A pessoa se encontra em Obesidade Mórbida e precisa urgentemente de ajuda médica!";
 }
return 0;
}