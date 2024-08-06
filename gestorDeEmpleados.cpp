#include <string>
#include <iostream>
#include <vector>
using namespace std;
enum Categoria {A = 300,B = 350,C = 400,D = 0};

class Empleado{
     public:
        string nombre, apellido;
        Categoria bonificacionAsociada;
        static int proximaEvaluacion;

        Empleado(int identificador);
        float estimacionPagoTotalMensual();

        int getIdentificador();

        float getSalarioMensualMedio();
        void setSalarioMensualMedio(float salarioMensualMedio);
    private:
        int identificador;
        float salarioMensualMedio;

    


};


int main(){
    int id;
    float salario[12];
    bool salarioPorEncimaDeLaMedia;
    vector<Empleado> listadoEmpleados;
    char categoriaALaQuePertenece;
    int opcionMenu;

    do{
        cout << "hola, Bienvenido al gestor de empleados: " << endl;
        cout << "ingrese una opcion : " << endl;
        cout << "1.- Introducir un empleado" << endl;
        cout << "2.- Salir" << endl;
        cout << "Su opcion es: ";
        cin >> opcionMenu;
        Empleado *empleado;
        if (opcionMenu == 1){
        
            cout << "ingrese el ID del empleado: ";
            cin >> id;

            
            empleado = new Empleado(id);

            cout << "nombre: ";
            cin >> empleado->nombre;
            cout << "apellido: ";
            cin >> empleado->apellido;

            cout << "Salario Enero : ";
            cin >> salario[0];
            cout << "Salario Febrero : ";
            cin >> salario[1];
            cout << "Salario Marzo : ";
            cin >> salario[2];
            cout << "Salario Abril : ";
            cin >> salario[3];
            cout << "Salario Mayo : ";
            cin >> salario[4];
            cout << "Salario Junio : ";
            cin >> salario[5];
            cout << "Salario Julio : ";
            cin >> salario[6];
            cout << "Salario Agosto: ";
            cin >> salario[7];
            cout << "Salario Septiembre: ";
            cin >> salario[8];
            cout << "Salario Octubre: ";
            cin >> salario[9];
            cout << "Salario Noviembre: ";
            cin >> salario[10];
            cout << "Salario Diciembre: ";
            cin >> salario[11];

            empleado->setSalarioMensualMedio((salario[0]+salario[1]+salario[2]+salario[3]+salario[4]+salario[5]+salario[6]+salario[7]+salario[8]+salario[9]+salario[10]+salario[11])/12);


            cout << "El ID del empleado es: " << empleado->getIdentificador() << ". Su nombre es: " << empleado->nombre << " " << empleado->apellido << endl;
            cout << "El salario mensual medio es " << empleado->getSalarioMensualMedio() << endl;

            cout << "A que categoria pertecene? (A,B,C): ";
            cin >> categoriaALaQuePertenece;

            switch (categoriaALaQuePertenece)
            {
            case 'A': empleado->bonificacionAsociada=A; break;
            case 'B': empleado->bonificacionAsociada=B; break;
            case 'C': empleado->bonificacionAsociada=C; break;
            
            
            default:
                case 'D': empleado->bonificacionAsociada=D; break;
            }

            cout << "a pagar + bono: "<< empleado->estimacionPagoTotalMensual() << endl;
        }
            listadoEmpleados.push_back(*empleado);

    }while(opcionMenu!=2);

    for(int i=0; i<listadoEmpleados.size()-1; i++){
        cout << "- " << listadoEmpleados[i].nombre << " " << listadoEmpleados[i].apellido << " - Sueldo:  "<< listadoEmpleados[i].estimacionPagoTotalMensual() <<  endl;
    
    }
    

    return 0;
}

Empleado::Empleado(int identificador){
    this->identificador = identificador;
}

float Empleado::estimacionPagoTotalMensual(){
    return salarioMensualMedio+bonificacionAsociada;
}

int Empleado::getIdentificador(){
    return identificador;
}

float Empleado::getSalarioMensualMedio(){
    return salarioMensualMedio;
}
void Empleado::setSalarioMensualMedio(float salarioMensualMedio){
    this->salarioMensualMedio=salarioMensualMedio;
}

