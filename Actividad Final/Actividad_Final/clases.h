#ifndef CLASES_H_INCLUDED
#define CLASES_H_INCLUDED
#define DATO_POR_DEFECTO_NUMERICO   0
#define DATO_POR_DEFECTO_TEXTUAL    "N/E"

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
    float horaIngreso;
public:
    Vehiculo();
    ~Vehiculo();
    virtual void mostrarDatos();
    void setMarca(string m);
    void setModelo(string m);
    void setNota(string n);
    void setTransmision(string t);
    void setPlacas(string p);
    void setColor(string c);
    void setHoraIngreso(float h);
    string getMarca();
    string getModelo();
    string getNota();
    string getTranmision();
    string getPlacas();
    string getColor();
    float getHoraIngreso();
};

Vehiculo::Vehiculo(){
    marca = DATO_POR_DEFECTO_TEXTUAL;
    modelo = DATO_POR_DEFECTO_TEXTUAL;
    nota = DATO_POR_DEFECTO_TEXTUAL;
    transmision = DATO_POR_DEFECTO_TEXTUAL;
    placas = DATO_POR_DEFECTO_TEXTUAL;
    color = DATO_POR_DEFECTO_TEXTUAL;
    horaIngreso = DATO_POR_DEFECTO_NUMERICO;
}
Vehiculo::~Vehiculo(){
}
void Vehiculo::mostrarDatos(){
    cout << "Los datos del vehículo son:" << endl;
    cout << "Marca:                             " << marca << endl;
    cout << "Modelo:                            " << modelo << endl;
    cout << "Color:                             " << color << endl;
    cout << "Transmisión:                       " << transmision << endl;
    cout << "Placas:                            " << placas << endl;
    cout << "Nota:                              " << nota << endl;
    cout << "Hora de ingreso                    " << horaIngreso << endl;
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

void Vehiculo::setHoraIngreso(float h){
    horaIngreso=h;
}
float Vehiculo::getHoraIngreso(){
    return horaIngreso;
}
/*----------------------------------------------------------------------------------------------------------------------
                                                CLASE HIJA: AUTOMÓVIL
----------------------------------------------------------------------------------------------------------------------*/
class Automovil : public Vehiculo{
private:
    short numeroVentanas;
    short numeroPuertas;
public:
    Automovil();
    ~Automovil();
    void mostrarDatos();
    void setNumeroVentanas(short nV);
    void setNumeroPuertas(short nP);
    short getNumeroVentanas();
    short getNumeroPuertas();
};

Automovil::Automovil() : Vehiculo(){
    numeroPuertas = DATO_POR_DEFECTO_NUMERICO;
    numeroVentanas = DATO_POR_DEFECTO_NUMERICO;
}

Automovil::~Automovil(){
}

void Automovil::mostrarDatos(){
    Vehiculo::mostrarDatos();
    cout << "Número de puertas sin detalles:    " << numeroPuertas << endl;
    cout << "Número de ventanas sin detalles:   " << numeroVentanas << endl;
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
    Motocicleta();
    ~Motocicleta();
    void mostrarDatos();
    void setNumeroCascos(short nC);
    short getNumeroCascos();
};

Motocicleta::Motocicleta() : Vehiculo(){
    numeroCascos = DATO_POR_DEFECTO_NUMERICO;
}

Motocicleta::~Motocicleta(){
}

void Motocicleta::mostrarDatos(){
    Vehiculo::mostrarDatos();
    cout << "Número de cascos que entregó:      " << numeroCascos << endl;
}

void Motocicleta::setNumeroCascos(short nC){
    numeroCascos = nC;
}
short Motocicleta::getNumeroCascos(){
    return numeroCascos;
}
#endif // CLASES_H_INCLUDED
