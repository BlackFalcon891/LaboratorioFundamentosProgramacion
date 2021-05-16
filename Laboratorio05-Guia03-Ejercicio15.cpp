//Declaracion de bibliotecas 
#include <iostream>

using namespace std;

//Funcion principal
int main (void) {

    //Declaracion de variables a usar
    int dia, mes, anio, diaA, mesA, anioA;

    //Interaccion con el usuario
    cout << "\n----- BIENVENIDO -----\n" << endl;
    cout << "A traves de este programa, podra conocer el dia anterior con respecto a la fecha ingresada.\n" << endl;
    cout << "ADVERTENCIA: Este programa esta preparado para valorar anios bisiestos.\n" << endl;

    //Peticion de datos
    cout << "Por favor, ingrese la fecha en formato de numeros:" << endl;
    cout << "Dia (1, 2, 3, ..., 31): ";
    cin >> dia;
    cout << "Mes (1, 2, 3, ..., 12): ";
    cin >> mes;
    cout << "Anio (1900, 1999, 2021, etc.): ";
    cin >> anio;

    //Tratamiento de datos y decisiones
    if (anio >= 1) {
    
    switch (mes) {

        //Enero
        case 1:

            if (dia >=2 && dia <=31) {
            
                diaA = dia - 1;
                mesA = mes;
                anioA = anio;

                cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl; 
            
            } else if (dia = 1) {

                diaA = 31;
                mesA = 12;
                anioA = anio - 1;

                cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl; 

            } else {

                cout << "\nEl dia ingresado no es valido.\n" << endl; 

            }

            break;

        //Febrero
        case 2:

            //Determinacion en caso de anio bisiesto (febrero puede tener 28 o 29 dias)
            if (anio % 400 == 0) {

                if (dia >= 2 && dia <= 29) {

                        diaA = dia - 1;
                        mesA = mes;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else if (dia == 1) {

                        diaA = 31;
                        mesA = mes - 1;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else {

                        cout << "\nEl dia ingresado no es valido\n" << endl;

                    }

            } else if (anio % 4 == 0 && anio % 100 != 0) {

                if (dia >= 2 && dia <= 29) {

                        diaA = dia - 1;
                        mesA = mes;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else if (dia == 1) {

                        diaA = 31;
                        mesA = mes - 1;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else {

                        cout << "\nEl dia ingresado no es valido\n" << endl;

                    }

            } else {

                if (dia >= 2 && dia <= 28) {

                        diaA = dia - 1;
                        mesA = mes;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else if (dia == 1) {

                        diaA = 31;
                        mesA = mes - 1;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else {

                        cout << "\nEl dia ingresado no es valido\n" << endl;

                    }

            }
            
            break;

        //Marzo
        case 3:

            //Determinacion en caso de anio bisiesto (febrero puede tener 28 o 29 dias)
            if (anio % 400 == 0) {

                if (dia >= 2 && dia <= 31) {

                        diaA = dia - 1;
                        mesA = mes;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else if (dia == 1) {

                        diaA = 29;
                        mesA = mes - 1;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else {

                        cout << "\nEl dia ingresado no es valido\n" << endl;

                    }

            } else if (anio % 4 == 0 && anio % 100 != 0) {

                if (dia >= 2 && dia <= 31) {

                        diaA = dia - 1;
                        mesA = mes;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else if (dia == 1) {

                        diaA = 29;
                        mesA = mes - 1;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else {

                        cout << "\nEl dia ingresado no es valido\n" << endl;

                    }

            } else {

                if (dia >= 2 && dia <= 31) {

                        diaA = dia - 1;
                        mesA = mes;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else if (dia == 1) {

                        diaA = 28;
                        mesA = mes - 1;
                        anioA = anio;

                        cout << "\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                    } else {

                        cout << "\nEl dia ingresado no es valido\n" << endl;

                    }

            }

            break;
        
        //Meses de 30 dias que se comportan igual
        case 4:
        case 6:
        case 9: 
        case 11:

            if (dia >=2 && dia <=30) {
            
                diaA = dia - 1;
                mesA = mes;
                anioA = anio;

                cout <<"\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl; 
            
            } else if (dia = 1) {
                
                diaA = 31;
                mesA = mes - 1;
                anioA = anio;

                cout <<"\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl; 

            } else {

                cout << "\nEl dia ingresado no es valido.\n" << endl;

            }

            break;

        //Meses de 31 dias
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            
            if (dia >=2 && dia <=31) {
            
                diaA = dia - 1;
                mesA = mes;
                anioA = anio;

                cout <<"\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl; 
            
            } else if (dia = 1) {

                //Excepcion de agosto para el dia anterior
                if (mes == 8) {
                
                    diaA = 31;
                    mesA = mes - 1;
                    anioA = anio;

                    cout <<"\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                } else {
                
                diaA = 30;
                mesA = mes - 1;
                anioA = anio;

                cout <<"\nEl dia anterior es " << diaA << " / " << mesA << " / " << anioA << '\n' << endl;

                }

            } else {

                cout << "\nEl dia ingresado no es valido.\n" << endl;

            }

            break;

        default:
            
            cout << "\nEl mes ingresado no existe.\n" << endl;

    }

    } else {

        cout << "\nEl calculo de anios Antes de Cristo (A.C.) no esta contemplado en este programa.\n" << endl;

    }

    return 0;
}