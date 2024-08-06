#include <string>
#include <iostream>
using namespace std;
int main(){

    int puntuacionExamen = 8;

    switch (puntuacionExamen)
    {
    case 1: std::cout << "Suspendido"; break;
    case 2: std::cout << "Suspendido"; break;
    case 3: std::cout << "Suspendido"; break;
    case 4: std::cout << "Suspendido"; break;
    case 5: std::cout << "Suspendido"; break;
    case 6: std::cout << "Suspendido"; break;
    case 7: std::cout << "Suspendido"; break;
    case 8: std::cout << "Aprobado"; break;
    
    default:
        std::cout<<"Puntuación no contemplada";
        break;
    }
    return 0;
}

