#ifndef CLASES_H_INCLUDED
#define CLASES_H_INCLUDED

using namespace std;
/*----------------------------------------------------------------------------------------------------------------------
                                                CLASE PADRE: VEHÍCULO
----------------------------------------------------------------------------------------------------------------------*/
class Vehiculo{
private:
    string marca;
    string modelo;
    string nota;
    string transmision;
    string placas;
    string color;
public:
    Vehiculo(string,string,string,string,string,string);
    virtual void mostrarDatos();
    void setMarca(string m);
    void setModelo(string m);
    void setNota(string n);
    void setTransmision(string t);
    void setPlacas(string t);
    void setColor(string t);
    string getMarca();
    string getModelo();
    string getNota();
    string getTranmision();
    string getPlacas();
    string getColor();
};

Vehiculo::Vehiculo(string _marca,string _modelo,string _nota,string _transmision,string _placas,string _color){
    marca = _marca;
    modelo = _modelo;
    nota = _nota;
    transmision = _transmision;
    placas = _placas;
    color = _color;
}

void Vehiculo::mostrarDatos(){
    cout << "Los datos del vehículo son:" << endl;
    cout << "Marca:                 " << marca << endl;
    cout << "Modelo:                " << modelo << endl;
    cout << "Transmisión:           " << transmision << endl;
    cout << "Placas:                " << placas << endl;
    cout << "Color:                 " << color << endl;
    cout << "Nota:                  " << nota << endl;
}

void Vehiculo::setMarca(string m){
    marca = m;
}
string Vehiculo::getMarca(){
    return marca;
}

void Vehiculo::setModelo(string m){
    modelo = m;
}
string Vehiculo::getModelo(){
    return modelo;
}

void Vehiculo::setTransmision(string t){
    transmision = t;
}
string Vehiculo::getTranmision(){
    return transmision;
}

void Vehiculo::setPlacas(string p){
    placas = p;
}
string Vehiculo::getPlacas(){
    return placas;
}

void Vehiculo::setColor(string c){
    color = c;
}
string Vehiculo::getColor(){
    return color;
}

void Vehiculo::setNota(string n){
    nota=n;
}
string Vehiculo::getNota(){
    return nota;
}
/*----------------------------------------------------------------------------------------------------------------------
                                                CLASE HIJA: AUTOMÓVIL
----------------------------------------------------------------------------------------------------------------------*/
class Automovil : public Vehiculo{
private:
    short numeroVentanas;
    short numeroPuertas;
public:
    Automovil(string,string,string,string,string,string,short,short);
    void mostrarDatos();
    void setNumeroVentanas(short nV);
    void setNumeroPuertas(short nP);
    short getNumeroVentanas();
    short getNumeroPuertas();
};

Automovil::Automovil(string _marca,string _modelo,string _nota,string _transmision,string _placas,string _color,
                     short _numeroVentanas,short _numeroPuertas) : Vehiculo(_marca, _modelo, _nota,_transmision,
                                                                            _placas, _color){
    numeroPuertas = _numeroPuertas;
    numeroVentanas = _numeroVentanas;
}

void Automovil::mostrarDatos(){
    Vehiculo::mostrarDatos();
    cout << "Número de puertas:     " << numeroPuertas << endl;
    cout << "Número de ventanas:    " << numeroVentanas << endl;
}

void Automovil::setNumeroVentanas(short nV){
    numeroVentanas = nV;
}
short Automovil::getNumeroVentanas(){
    return numeroVentanas;
}

void Automovil::setNumeroPuertas(short nP){
    numeroPuertas = nP;
}
short Automovil::getNumeroPuertas(){
    return numeroPuertas;
}
/*----------------------------------------------------------------------------------------------------------------------
                                                CLASE HIJA: MOTOCICLETA
----------------------------------------------------------------------------------------------------------------------*/
class Motocicleta : public Vehiculo{
private:
    short numeroCascos;
public:
    Motocicleta(string,string,string,string,string,string,short);
    void mostrarDatos();
    void setNumeroCascos(short nC);
    short getNumeroCascos();
};

Motocicleta::Motocicleta(string _marca,string _modelo,string _nota,string _transmision,string _placas,string _color,
                     short _numeroCascos) : Vehiculo(_marca, _modelo, _nota,_transmision,_placas, _color){
    numeroCascos = _numeroCascos;
}

void Motocicleta::mostrarDatos(){
    Vehiculo::mostrarDatos();
    cout << "Número de cascos:      " << numeroCascos << endl;
}

void Motocicleta::setNumeroCascos(short nC){
    numeroCascos = nC;
}
short Motocicleta::getNumeroCascos(){
    return numeroCascos;
}
#endif // CLASES_H_INCLUDED
