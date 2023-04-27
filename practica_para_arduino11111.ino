#include <Keypad.h>
//se crean valariables con el valor de cada pin conectado 
const int a= 10;
const int b= 11;
const int c= 12;
const int d= 13;
const int e= A0;
const int f= A1;
const int g= A2;
#define FILAS 4// se crea el numero de filas
#define COLUMNAS 4// se crea el numero de columnas
#define salida(pin) pinMode(pin,OUTPUT)// se define la función pinmode como salida
#define encendido(pin) digitalWrite(pin, HIGH)//se define encendido que sustituya a digitalWrite
#define apagado(pin)  digitalWrite(pin, LOW)//se define apagado que sustituya a digitalWrite

char keys[FILAS][COLUMNAS] = {//se indica como van las columnas y filas
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;//se crea para que dspues lea el caracter
byte Filas[FILAS]={9,8,7,6};//como van conectados en los pines las filas
byte Columnas[COLUMNAS] = {5,4,3,2};//como van conectados en los pines las columnas
Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS);// se le indica como van las filas y columas del teclado matricial

void setup()
{
  //se indica que pines van a hacer salida
 salida(a);
 salida(b);
 salida(c);
 salida(d);
 salida(e);
 salida(f);
 salida(g);
}

void loop(){
  key = teclado.getKey();//se dise que el key va a hacer igual que teclado.getKey el que nos dise que preconar el teclado va a hacer lo mismo que key
switch(key){//se crea el switch para que cuando se presione key se haga lo que se indica 
  case '1'://cuando en el monitor serial pongan 1 este va a hacer
   //se enciende para que den 1
    encendido(a);
    apagado(b);
    apagado(c);
    encendido(d);
    encendido(e);
    encendido(f);
    encendido(g);
    break;// parar la funcion
   
  case '2'://cuando en el monitor serial pongan 2 este va a hacer
   //se enciende para que den 2
    apagado(a);
    apagado(b);
    encendido(c);
    apagado(d);
    apagado(e);
    encendido(f);
    apagado(g);
   break;// parar la funcion
  
  case '3'://cuando en el monitor serial pongan 3 este va a hacer
   //se enciende para que den 3
    apagado(a);
    apagado(b);
    apagado(c);
    apagado(d);
    encendido(e);
    encendido(f);
    apagado(g);
    break;// parar la funcion
  
  case '4'://cuando en el monitor serial pongan 4 este va a hacer
   //se enciende para que den 4
    encendido(a);
    apagado(b);
    apagado(c);
    encendido(d);
    encendido(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion

  case '5'://cuando en el monitor serial pongan 5 este va a hacer
   //se enciende para que den 5
    apagado(a);
    encendido(b);
    apagado(c);
    apagado(d);
    encendido(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion

  case '6'://cuando en el monitor serial pongan 6 este va a hacer
   //se enciende para que den 6
    apagado(a);
    encendido(b);
    apagado(c);
    apagado(d);
    apagado(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion
    
  case '7'://cuando en el monitor serial pongan 7 este va a hacer
   //se enciende para que den 7
    apagado(a);
    apagado(b);
    apagado(c);
    encendido(d);
    encendido(e);
    encendido(f);
    encendido(g);
    break;// parar la funcion
    
  case '8'://cuando en el monitor serial pongan 8 este va a hacer
   //se enciende para que den 8
    apagado(a);
    apagado(b);
    apagado(c);
    apagado(d);
    apagado(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion
  case '9'://cuando en el monitor serial pongan 9 este va a hacer
   //se enciende para que den 9
    apagado(a);
    apagado(b);
    apagado(c);
    apagado(d);
    encendido(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion
  case '0'://cuando en el monitor serial pongan 0 este va a hacer
   //se enciende para que den 0
    apagado(a);
    apagado(b);
    apagado(c);
    apagado(d);
    apagado(e);
    apagado(f);
    encendido(g);
    break;// parar la funcion
    
  case 'A'://cuando en el monitor serial pongan A este va a hacer
   //se enciende para que den A
    apagado(a);
    apagado(b);
    apagado(c);
    encendido(d);
    apagado(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion

  case 'B'://cuando en el monitor serial pongan B este va a hacer
   //se enciende para que den B
    encendido(a);
    encendido(b);
    apagado(c);
    apagado(d);
    apagado(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion

  case 'C'://cuando en el monitor serial pongan C este va a hacer
   //se enciende para que den C
    apagado(a);
    encendido(b);
    encendido(c);
    apagado(d);
    apagado(e);
    apagado(f);
    encendido(g);
    break;// parar la funcion

  case 'D'://cuando en el monitor serial pongan D este va a hacer
   //se enciende para que den D
    encendido(a);
    apagado(b);
    apagado(c);
    apagado(d);
    apagado(e);
    encendido(f);
    apagado(g);
    break;// parar la funcion
    
  case '#'://cuando en el monitor serial pongan # este va a hacer
   //se enciende para que den # pero en este caso sería F
    apagado(a);
    encendido(b);
    encendido(c);
    encendido(d);
    apagado(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion

  case '*'://cuando en el monitor serial pongan * este va a hacer
   //se enciende para que den * pero en este caso sería E
    apagado(a);
    encendido(b);
    encendido(c);
    apagado(d);
    apagado(e);
    apagado(f);
    apagado(g);
    break;// parar la funcion
  }

}
  