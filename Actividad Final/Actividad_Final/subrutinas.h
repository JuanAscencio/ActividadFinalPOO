#ifndef SUBRUTINAS_H_INCLUDED
#define SUBRUTINAS_H_INCLUDED
#include<string>
#include<cctype>
#include<cstdlib>
#include "funciones.h"
#include "variablesGlobales.h"
#include "arregloCoches.h"
#include "arregloMotos.h"

using namespace std;

//-------------------------------------------------PROTOTIPOS---------------------------------------------------------//

void limpiarPantalla();
void limpiarPantallaPausado();


void ValidarMenuPrincipal();
void ValidarOpciones();


void ValidarCajonesAutomovil();
void ValidarCajonesMotocicleta();


void validarEliminarAutomovil();
void validarEliminarMotocicleta();


void validarSobrescribirAutomovil();
void validarSobrescribirMotocicleta();

void validarRegistrarAutomovil();
void validarRegistrarMotocicleta();

void costos();
void cobrarAutomovil();
void cobrarMotocicleta();


//--------------------------------------------------SUBRUTINAS--------------------------------------------------------//

void limpiarPantalla(){
    system("cls");
}

void limpiarPantallaPausado(){
    system("pause");
    system("cls");
}

//-----------------------------------------------VALIDAR OPCIONES-----------------------------------------------------//

void ValidarMenuPrincipal(){
    cout << "Opci�n: ";
    cin >> s;

    if(EsNumero(s)){
        opcionMenuPrincipal = ConvertirStringNumero(s);
    }else{
        cout << "\nValor no v�lido. Int�ntelo de nuevo" << endl;
    }
}

void ValidarOpciones(){
    cout << "Opci�n: ";
    cin >> s;

    if(EsNumero(s)){
        opcion = ConvertirStringNumero(s);
    }else{
        cout << "\nValor no v�lido. Int�ntelo de nuevo" << endl;
    }
}

//------------------------------------------------VALIDAR CAJONES-----------------------------------------------------//
                                                //   AUTOM�VIL   //
void ValidarCajonesAutomovil(){
    cout << "Ingrese el n�mero de cajones para autom�vil:      ";
    cin >> s;

    if(EsNumero(s)){
        cajonesCarro = ConvertirStringNumero(s);}
        else{
            cout << "\nValor no v�lido. Int�ntelo de nuevo." << endl;
            cin.ignore();
            limpiarPantallaPausado();
            ValidarCajonesAutomovil();
        }
    }

                                                //   MOTOCICLETA   //
void ValidarCajonesMotocicleta(){
    cout << "Ingrese el n�mero de cajones para motocicleta:    ";
    cin >> s;

if(EsNumero(s)){
    cajonesMoto = ConvertirStringNumero(s);}
    else{
        cout << "\nValor no v�lido. Int�ntelo de nuevo." << endl;
        cin.ignore();
        limpiarPantallaPausado();
        ValidarCajonesMotocicleta();
    }
}

//-------------------------------------------VALIDAR ELIMINAR VEH�CULO------------------------------------------------//
                                                //   AUTOM�VIL   //
void validarEliminarAutomovil(){
    cin.ignore();
    if(contadorArregloCoches==CERO){
        cout <<"Estacionamiento"<< endl;
        cout <<"No ha ingresado ning�n coche. " << endl;
    }else{
        cout <<"Estacionamiento"<< endl;
        cout <<"�Qu� posici�n desea eliminar? " << endl;
        cout << "Marca - Modelo" << endl;

        for(int i=0;i<cajonesCarro;i++){
            cout << i+UNO << ". " << Coches[i].getMarca() << " - " << Coches[i].getModelo() << endl;
        }
        cout << cajonesCarro+UNO << ". Salir" << endl << endl;

        ValidarOpciones();

        if(opcion>CERO && opcion<=cajonesCarro){
            eliminarElementoCoche(opcion);
        }else if(opcion==cajonesCarro+UNO){
            cout << "" << endl;
                }else{
                    cout << "Formato no v�lido, intentelo de nuevo. " << endl;
                    }

    }
}

                                                //   MOTOCICLETA   //
void validarEliminarMotocicleta(){
    cin.ignore();
    if(contadorArregloMotos==CERO){
        cout <<"Estacionamiento"<< endl;
        cout <<"No ha ingresado ning�na moto. " << endl;
    }else{
        cout <<"Estacionamiento"<< endl;
        cout <<"�Qu� posici�n desea eliminar? " << endl;

        for(int i=0;i<cajonesMoto;i++){
        cout << i+UNO << ". " << Motos[i].getMarca() << " - " << Motos[i].getModelo() <<  endl;
        }
        cout << cajonesMoto+UNO << ". Salir" << endl << endl;

        ValidarOpciones();

        if(opcion>CERO && opcion<=cajonesMoto){
            eliminarElementoMoto(opcion);
        }else if(opcion==cajonesMoto+UNO){
            cout << "" << endl;
                }else{
                    cout << "Formato no v�lido, intentelo de nuevo. " << endl;
                }
    }
}

//-------------------------------------------VALIDAR REGISTRAR VEH�CULO-----------------------------------------------//
                                                //   AUTOM�VIL   //
void validarRegistrarAutomovil(){
    cin.ignore();
    cout << "Estacionamiento" << endl;
    cout << "Ingrese la posici�n a ocupar/cambiar:" << endl;
    cout << "Espacios disponibles: [" <<cajonesCarro - contadorArregloCoches<< "] de [ " << cajonesCarro<< "]" <<  endl;
    cout << "Marca - Modelo" << endl;
    for(int i=0;i<cajonesCarro;i++){
        cout << i+UNO << ". " << Coches[i].getMarca() << " - " << Coches[i].getModelo() << endl;
    }
    cout << cajonesCarro + UNO <<". Salir" << endl << endl;

    ValidarOpciones();

    if(opcion>CERO && opcion<=cajonesCarro){
        agregarCarro(opcion);
    }else if(opcion==cajonesCarro+UNO){
        cout << "" << endl;
        }else{
            cout << "\nFormato no v�lido. Int�ntelo de nuevo." << endl;
        }
}

                                                //   MOTOCICLETA   //
void validarRegistrarMotocicleta(){
    cin.ignore();
    cout << "Estacionamiento" << endl;
    cout << "Ingrese la posici�n a ocupar/cambiar:" << endl;
    cout << "Espacios disponibles: [" <<cajonesMoto - contadorArregloMotos<< "] de [ " << cajonesMoto<< "]" <<  endl;
    cout << "Marca - Modelo" << endl;
    for(int i=0;i<cajonesMoto;i++){
        cout << i+UNO << ". " << Motos[i].getMarca() << " - " << Motos[i].getModelo() << endl;
    }
    cout << cajonesMoto + 1 <<". Salir" << endl << endl;

    ValidarOpciones();

    if(opcion>CERO && opcion<=cajonesMoto){
        agregarMoto(opcion);
    }else if(opcion==cajonesMoto+UNO){
        cout << "" << endl;
        }else{
            cout << "\nFormato no v�lido. Int�ntelo de nuevo." << endl;
        }
}

//------------------------------------------------------ COBRAR ------------------------------------------------------//

void costos(){
    cout << "Estacionamiento" << endl;
    cout << "        Tiempo             Costo  " << endl;
    cout << "----------------------------------" << endl;
    cout << "    0 a 15 minutos    =      $0" << endl;
    cout << "    16 a 60 minutos   =      $15" << endl;
    cout << "    1.01 a 2 horas    =      $30" << endl;
    cout << "    2.01 a 3 horas    =      $45" << endl;
    cout << "    3.01 a 4 horas    =      $60" << endl;
    cout << "    4.01 a 5 horas    =      $75" << endl;
    cout << "    5.01 a 6 horas    =      $90" << endl;
    cout << "    6.01 a 7 horas    =      $105" << endl;
    cout << "    7.01 a 8 horas    =      $120" << endl;
    cout << "    8.01 a 9 horas    =      $130" << endl;
    cout << "   9.01 a 10 horas    =      $150" << endl;
    cout << "  10.01 a 11 horas    =      $180" << endl;
    cout << "  11.01 a 12 horas    =      $200" << endl;
    cout << "      +12 horas       =      $500" << endl << endl;
    limpiarPantallaPausado();
}

// ------------ CARROS
void cobrarAutomovil(){
    cout << "Estacionamiento" << endl;
    cout << "Ingrese la posici�n a cobrar:" << endl;
    cout << "Marca - Modelo" << endl;
    for(int i=0;i<cajonesCarro;i++){
        cout << i+UNO << ". " << Coches[i].getMarca() << " - " << Coches[i].getModelo() << endl;
    }
    cout << cajonesCarro + UNO << ". Salir" << endl << endl;

    ValidarOpciones();

   if(opcion>CERO && opcion<=cajonesCarro){
        limpiarPantalla();
        //Calcular horas de estadia
        short posicion;
        float horaSalida,horaIngreso, horasDeEstadia, costo;

        posicion=opcion-UNO;

        cout << "Estacionamiento" << endl;
        cout << "Marca: " << Coches[posicion].getMarca() << endl;
        cout << "Modelo: " << Coches[posicion].getModelo() << endl;
        cout << "Hora de ingreso: " << Coches[posicion].getHoraIngreso() << endl;
        cout << "Ingrese la hora de salida: ";
        cin >> horaSalida;

        horaIngreso = Coches[posicion].getHoraIngreso();
        horasDeEstadia = horaSalida - horaIngreso;

        if(horasDeEstadia>12.01){
            costo = 500.00;
        }else if(horasDeEstadia<=12.00 && horasDeEstadia>11.00){
            costo = 200.00;
            }else if(horasDeEstadia<=11.00 && horasDeEstadia>10.00){
                costo = 180.00;
                }else if(horasDeEstadia<=10.00 && horasDeEstadia>9.00){
                    costo = 150.00;
                    } else if(horasDeEstadia>8.00 && horasDeEstadia<=9.00){
                        costo = 130.00;
                        } else if(horasDeEstadia>7.00 && horasDeEstadia<=8.00){
                            costo = 120.00;
                            }else if(horasDeEstadia>6.00 && horasDeEstadia<=7.00){
                                costo = 105.00;
                                }else if(horasDeEstadia>5.00 && horasDeEstadia<=6.00){
                                    costo = 90.00;
                                    }else if(horasDeEstadia>4.00 && horasDeEstadia<=5.00){
                                        costo = 75.00;
                                        }else if(horasDeEstadia>3.00 && horasDeEstadia<=4.00){
                                            costo = 60.00;
                                            }else if(horasDeEstadia>2.00 && horasDeEstadia<=3.00){
                                                costo=45.00;
                                                }else if(horasDeEstadia>1.00 && horasDeEstadia<=2.00){
                                                    costo = 30.00;
                                                    }else if(horasDeEstadia>00.15 && horasDeEstadia<=1.00){
                                                        costo = 15.00;
                                                        }else if(horasDeEstadia<=00.15){
                                                            costo = CERO;
                                                        }

        //Cobrar horas de estadia
        cout << "Costo: " << costo << endl << endl;

        limpiarPantallaPausado();

    }else if(opcion==cajonesCarro+UNO){
        cout << "" << endl;
        }else{
            cout << "\nFormato no v�lido. Int�ntelo de nuevo." << endl;
        }
}

// ------------ MOTOS
void cobrarMotocicleta(){
    cout << "Estacionamiento" << endl;
    cout << "Ingrese la posici�n a cobrar:" << endl;
    cout << "Marca - Modelo" << endl;
    for(int i=0;i<cajonesMoto;i++){
        cout << i+UNO << ". " << Motos[i].getMarca() << " - " << Motos[i].getModelo() << endl;
    }
    cout << cajonesMoto + UNO << ". Salir" << endl << endl;

    ValidarOpciones();

   if(opcion>CERO && opcion<=cajonesMoto){
        limpiarPantalla();
        //Calcular horas de estadia
        short posicion;
        float horaSalida,horaIngreso, horasDeEstadia, costo;

        posicion=opcion-UNO;

        cout << "Estacionamiento" << endl;
        cout << "Marca: " << Motos[posicion].getMarca() << endl;
        cout << "Modelo: " << Motos[posicion].getModelo() << endl;
        cout << "Hora de ingreso: " << Motos[posicion].getHoraIngreso() << endl;
        cout << "Ingrese la hora de salida: ";
        cin >> horaSalida;

        horaIngreso = Motos[posicion].getHoraIngreso();
        horasDeEstadia = horaSalida - horaIngreso;

        if(horasDeEstadia>12.01){
            costo = 500.00;
        }else if(horasDeEstadia<=12.00 && horasDeEstadia>11.00){
            costo = 200.00;
            }else if(horasDeEstadia<=11.00 && horasDeEstadia>10.00){
                costo = 180.00;
                }else if(horasDeEstadia<=10.00 && horasDeEstadia>9.00){
                    costo = 150.00;
                    } else if(horasDeEstadia>8.00 && horasDeEstadia<=9.00){
                        costo = 130.00;
                        } else if(horasDeEstadia>7.00 && horasDeEstadia<=8.00){
                            costo = 120.00;
                            }else if(horasDeEstadia>6.00 && horasDeEstadia<=7.00){
                                costo = 105.00;
                                }else if(horasDeEstadia>5.00 && horasDeEstadia<=6.00){
                                    costo = 90.00;
                                    }else if(horasDeEstadia>4.00 && horasDeEstadia<=5.00){
                                        costo = 75.00;
                                        }else if(horasDeEstadia>3.00 && horasDeEstadia<=4.00){
                                            costo = 60.00;
                                            }else if(horasDeEstadia>2.00 && horasDeEstadia<=3.00){
                                                costo=45.00;
                                                }else if(horasDeEstadia>1.00 && horasDeEstadia<=2.00){
                                                    costo = 30.00;
                                                    }else if(horasDeEstadia>00.15 && horasDeEstadia<=1.00){
                                                        costo = 15.00;
                                                        }else if(horasDeEstadia<=00.15){
                                                            costo = CERO;
                                                        }

        //Cobrar horas de estadia
        cout << "Costo: " << costo << endl << endl;

        limpiarPantallaPausado();

    }else if(opcion==cajonesMoto+UNO){
        cout << "" << endl;
        }else{
            cout << "\nFormato no v�lido. Int�ntelo de nuevo." << endl;
        }

}

#endif // SUBRUTINAS_H_INCLUDED
