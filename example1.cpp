// funciones

// prototipo de la función
float calculaIvaValorSinIva(float);
float calculaIvaValorConIva(float);
#include <string>
#include <iostream>
using namespace std;
int main(){

    float iva1 = calculaIvaValorSinIva(1000.00);
    float iva2 = calculaIvaValorConIva(1190.00);

    cout << iva1 << endl;
    cout << iva2 << endl;

    return 0;
}

float calculaIvaValorSinIva(float sinIva){
    return sinIva*0.19;
}
float calculaIvaValorConIva(float conIva){
    float ValorSinIva = conIva / 1.19;

    return calculaIvaValorSinIva(ValorSinIva);

}

