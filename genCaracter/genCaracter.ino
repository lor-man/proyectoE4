//Definicion de las letras en formato de matriz de 6x4
/*   C0 C1 C2 C3
     |  |  |  |
F0-- X  X  X  X
F1-- X  X  X  X
F2-- X  X  X  X
F3-- X  X  X  X
F4-- X  X  X  X
F5-- X  X  X  X
*/
//------------------------------------------------------------------------------------------------------------
//Caracteres

uint8_t cA[4]  = { 0x3F  , 0x09 , 0x09 , 0x3F  } ;
uint8_t cB[4]  = { 0x3F  , 0x2D  , 0x2D  , 0x12  } ;
uint8_t cC[4]  = { 0x3F  , 0x21 , 0x21 , 0x21 } ;
uint8_t cD[4]  = { 0x3F  , 0x21  , 0x21  , 0x1E  } ;
uint8_t cE[4]  = { 0x3F  , 0x29 , 0x29 , 0x29 } ;
uint8_t cF[4]  = { 0x3F  , 0x05 , 0x05 , 0x05 } ;
uint8_t cG[4] =  { 0x3F  , 0x21  , 0x25  , 0x3D  } ;
uint8_t cH[4]  = { 0x3F  , 0x0C , 0x0C , 0x3F } ;
uint8_t cI[4]  = { 0x21  , 0x3F , 0x3F , 0x21 } ;
uint8_t cJ[4]  = { 0x20  , 0x20  , 0x21  , 0x3F  } ;
uint8_t cK[4]  = { 0x3F  , 0x0C , 0x12 , 0x21 } ;
uint8_t cL[4]  = { 0x3F  , 0x20 , 0x20 , 0x20 } ;
uint8_t cM[4]  = { 0x3F  , 0x06 , 0x06 , 0x3F } ;
uint8_t cN[4]  = { 0x3F  , 0x06  , 0x08  , 0x3F  } ;
uint8_t cO[4]  = { 0x3F  , 0x21  , 0x21  , 0x3F  } ;
uint8_t cP[4]  = { 0x3F  , 0x05 , 0x05 , 0x07 } ;

uint8_t cQ[4]  = { 0x7 , 0x5 , 0x5 , 0x3F  } ;



uint8_t cR[4]  = { 0x3F  , 0x09 , 0x19  , 0x26  } ;
uint8_t cS[4]  ={ 0x2F  , 0x29  , 0x29  , 0x39  } ;

uint8_t cT[4]  = { 0x01  , 0x3F , 0x3F , 0x01 } ;
uint8_t cU[4]  = { 0x1F  , 0x20 , 0x20 , 0x1F } ;
uint8_t cV[4]  = { 0x00  , 0x3F  , 0x20  , 0x3F  } ;
uint8_t cW[4]  = { 0x3F  , 0x10  , 0x10  , 0x3F  } ;
uint8_t cX[4]  = { 0x33  , 0x0C , 0x0C , 0x33 } ;
uint8_t cY[4]  = { 0x07  , 0x38 , 0x38 , 0x07 } ;
uint8_t cZ[4]  = { 0x31  , 0x29 , 0x25 , 0x23 } ;
//Minusculas
uint8_t ca[4] =  { 0x00  , 0x1C  , 0x14  , 0x3C  } ;
uint8_t   cb  [4] =  { 0x3F  , 0x28  , 0x28  , 0x38  } ;
uint8_t   cc  [4] = { 0x00  , 0x3C  , 0x24  , 0x24  } ;
uint8_t   cd  [4] = { 0x00  , 0x3C  , 0x24  , 0x3F  } ;
uint8_t   ce  [4] =  { 0x00  , 0x3E  , 0x2A  , 0x2A  } ;
uint8_t   cf  [4] = { 0x00  , 0x3E  , 0x0A  , 0x0A  } ;
uint8_t   cg  [4] =  { 0x2F  , 0x29  , 0x29  , 0x3F  } ;
uint8_t   ch  [4] =  { 0x00  , 0x3F  , 0x04  , 0x3C  } ;
uint8_t   ci  [4] = {  0x00  , 0x00  , 0x00  , 0x3A  } ;
uint8_t   cj  [4] =  { 0x00  , 0x20  , 0x20  , 0x3D  } ;
uint8_t   ck  [4]= { 0x3E  , 0x08  , 0x14  , 0x22  } ;
uint8_t   cl  [4] = { 0x00  , 0x00  , 0x00  , 0x3F  } ;
uint8_t   cm  [4] =  { 0x3C  , 0x08  , 0x08  , 0x3C  } ;
uint8_t   cn  [4] = { 0x00  , 0x3C  , 0x08  , 0x38  } ;
uint8_t   co  [4] = {  0x3C  , 0x24  , 0x24  , 0x3C  } ;
uint8_t   cp  [4] =  { 0x00  , 0x3E  , 0x0A  , 0x0E  } ;
uint8_t   cq  [4] =  { 0x00  , 0x0E  , 0x0A  , 0x3E  } ;
uint8_t   cr  [4] = { 0x00  , 0x3C  , 0x08  , 0x04  } ;
uint8_t   cs  [4] = { 0x00  , 0x2E  , 0x2A  , 0x3A  } ;
uint8_t   ct  [4] =  { 0x00  , 0x02  , 0x3F  , 0x02  } ;
uint8_t   cu  [4] = { 0x3C , 0x20   , 0x20  , 0x3C  } ;
uint8_t   cv  [4] =  { 0x0C  , 0x20  , 0x20  , 0x0C  } ;
uint8_t   cw  [4] = { 0x1C  , 0x30  , 0x30  , 0x1C  } ;
uint8_t   cx  [4] =  { 0x24  , 0x18  , 0x18  , 0x24  } ;
uint8_t   cy  [4] = { 0x00  , 0x0C  , 0x30  , 0x0C  } ;
//uint8_t   cy  [4] =  { 0x2A  , 0x15  , 0x2A  , 0x15  } ;
uint8_t   cz  [4] = { 0x00  , 0x32  , 0x2A  , 0x26  } ;
//uint8_t   cz  [4] =  { 0x15  , 0x2A  , 0x15  , 0x2A  } ;





//digitos
uint8_t c0[4] =  { 0x0 , 0x3F  , 0x21  , 0x3F  } ;
uint8_t c1[4]  = { 0x00 , 0x02 , 0x01 , 0x3F  } ;
uint8_t c2[4]  = { 0x0 , 0x32  , 0x29  , 0x26  } ;
uint8_t c3[4]  = { 0x0 , 0x25  , 0x25  , 0x3F  } ;
uint8_t c4[4]  = { 0x07  , 0x04  , 0x04  , 0x3F  } ;
uint8_t c5[4]  = { 0x00 , 0x27 , 0x25 , 0x3D  } ;
uint8_t c6[4]  = { 0x00 , 0x3F , 0x25 , 0x3D  } ;
uint8_t c7[4]  = { 0x00 , 0x01 , 0x01 , 0x3F  } ;
uint8_t c8[4]  = { 0x00 , 0x3F , 0x25 , 0x3F  } ;
uint8_t c9[4]  = { 0x00 , 0x07 , 0x05 , 0x3F  } ;
//Caracteres especiales por definir
uint8_t cEspacio[4]  = { 0x20  , 0x20  , 0x20  , 0x20  } ;// El espacio sera un guion bajo _, se utilizara tambien cuando no se encuentre el caracter enviado.

uint8_t   cpunto  [4] = { 0x3F  , 0x3F  , 0x3F  , 0x3F  } ;



//------------------------------------------------------------------------------------------------------------
unsigned long tiempo1=0,tiempo2=0;
//------------------------------------------------------------------------------------------------------------

int outRow[]={PD_0,PD_1,PD_2,PD_3,PE_0,PE_1};// PD_0=F0,PD_1=F1,PD_2=F2,PD_3=F3,PE_0=F4,PE_1=F5 Filas
int outCol[]={PE_2,PE_3,PE_4,PE_5};//PE_2=C0,PE_3=C1,PE_4=C2,PE_5=C3  Columnas

//------------------------------------------------------------------------------------------------------------

uint8_t matrizCaracter(String letra); //Obtencion de la letra en formato de matriz
//------------------------------------------------------------------------------------------------------------


void setup() {
  
  Serial.begin(9600);
  while (!Serial) {}
  
//Inicializacion de pines en modo de salida---------

  for(int cnt=0;cnt<6;cnt++){ //Salidas de filas
    pinMode(outRow[cnt],OUTPUT);
  }
  
  for(int cnt=0;cnt<4;cnt++){//Salidas de columnas
    pinMode(outCol[cnt],OUTPUT);
  }
//---------------------------------------------------
//Inicializacion de pines en estado bajo-------------
  for(int cnt=0;cnt<6;cnt++){ //Salidas de filas
    digitalWrite(outRow[cnt],LOW);
  }
  for(int cnt=0;cnt<4;cnt++){ //Salidas de columnas
    digitalWrite(outCol[cnt],LOW);
  }  
  tiempo1=millis();
}

//------------------------------------------------------------------------------------------------------------

char caracterX='0';
short unsigned int posCaracter=0;

uint8_t * dispCaracter;
volatile uint8_t carX[4];
int pinVal=0;
int timeD=1;

void loop() {
  
  String cadenaSer="";//String de concatenacion de datos recibidos
  String cadEnv="";//String con el que se trabaja la matriz copia de cadenaSer 
   
  while (Serial.available()) {  // While de recepcion de cadena de caracteres enviados desde la computadora
    
    cadenaSer = Serial.readString(); 
         
      if(cadenaSer.length()!=0){ //si lo que se envia no es una cadena vacia entonces se extrae dato pordatopara eliminar los ultimos dos caracteres que se envia desde la PC
       
        for( uint8_t cnt_len=0; cnt_len<=cadenaSer.length()-1;cnt_len++){
          cadEnv=cadEnv+cadenaSer[cnt_len];
        }
      }

    Serial.println(cadEnv+String(cadEnv.length()));
    
    Serial.flush();//Se limpia el buffer de recepcion del modulo uart
    cadenaSer="";  //Se limpia la variable tipo string de recepcion
    //cadEnv.toUpperCase();// Se convierte a mayusculas el texto recibido
  }

 
 //---------Logica de multiplexacion de caracteres y control de tiempo de visibilidad------------------------
 //Seleccion de caracter y asignacion al carX donde se guarda el caracter con un intervalo de 1 segundo
while(posCaracter<cadEnv.length()&&cadEnv.length()!=0){
  
  //tiempo2=millis(); 
   //if(tiempo2>(tiempo1+5000)){
     //tiempo1=millis();

     //Cambia el caracter cada 2 segundos
     posCaracter++;
     if(posCaracter-1<cadEnv.length()){
      
       caracterX=cadEnv.charAt(posCaracter-1);  
       Serial.print("letra : ");
       Serial.println(caracterX);         
       matrizCaracter(caracterX); 
       
       for(int cont=0; cont<4;cont++){
         carX[cont]=*(dispCaracter+cont);        
        }      
      }  
   //}

   
 tiempo2=millis();
 
 while(tiempo1<(tiempo2+700)){
  //=========================================Multiplexacion de matriz led=============================================================================
 //-------------Multiplexado   por filas ---------------------------------------------------------------------------------
 tiempo1=millis();
//######################################################################


//######################################################################


 
 /*
  for(int col=0; col<4; col++){
  
    digitalWrite(outCol[col],HIGH);
    
      for(int row=0;row<6;row++){
          pinVal=bitRead(carX[col],row);
          digitalWrite(outRow[row],pinVal);
          
          delay(5);
          
          digitalWrite(outRow[row],LOW);
      }
      
      digitalWrite(outCol[col],LOW);
      delayMicroseconds(800);
  }
  */
 
//----------------------------------------------------------------------------------------------------------------

  
//----------Multiplexacion  por columnas-------------------------------------------------------------------------------------
/*
  for(int fila=0; fila<6;fila++){
    digitalWrite(outRow[fila],HIGH);
    for (int col=0; col<4;col++){
        pinVal=bitRead(carX[col],fila);
        digitalWrite(outCol[col],pinVal);
        delay(8);
        //digitalWrite(outCol[col],LOW);
      }
      
      digitalWrite(outRow[fila],LOW);
      //delayMicroseconds(10);
      }

*/
  //==========================================================================================================================
//#############################Multiplexacion de focos###############################################################


 //-------------Multiplexado   por filas METODO 1---------------------------------------------------------------------------------
 
 // bien con mayusculas
  for(int col=0; col<4; col++){
      for(int row=0;row<6;row++){
          
          digitalWrite(outCol[col],HIGH);
          pinVal=bitRead(carX[col],row);
          digitalWrite(outRow[row],pinVal);
          delayMicroseconds(5000);
          digitalWrite(outRow[row],LOW);          
          digitalWrite(outCol[col],LOW);
          delayMicroseconds(50);
        }
        delay(1);
  }
 
//----------------------------------------------------------------------------------------------------------------

  
//----------Multiplexacion  por columnas  METODO 2-------------------------------------------------------------------------------------
/*
  for(int fila=0; fila<6;fila++){
    
    for (int col=0; col<4;col++){
        digitalWrite(outRow[fila],HIGH);
        pinVal=bitRead(carX[col],fila);
        digitalWrite(outCol[col],pinVal);
        delayMicroseconds(30000);
        digitalWrite(outRow[fila],LOW);
        digitalWrite(outCol[col],LOW);
        delayMicroseconds(30000);
      }
    }
  */    

//####################################################################################################################


 } 
 delay(300); 
}
 //---------Fin de bloque de logica--------------------------------------------------------------------------
  posCaracter=0;//reinicio de la variable de posicion del caracter
  cadEnv="";// Se limpia la variable tipo string donde se guarda la copia de la cadena recibido  
  caracterX=' ';
}
//------------------------------------------------------------------------------------------------------------
void matrizCaracter(char letra){
  switch(letra){
      case 'A':
        dispCaracter=cA;
        
        break;
      case 'B':
        dispCaracter=cB;
        break;
      case 'C':
        dispCaracter=cC;
        break;
      case 'D':
        dispCaracter=cD;
        break;
      case 'E':
        dispCaracter=cE;
        break;
      case 'F':
        dispCaracter=cF;
        break;  
      case 'G':
       dispCaracter=cG;
        break; 
      case 'H':
        dispCaracter=cH;
        break;
      case 'I':
        dispCaracter=cI;
        break;
      case 'J':
        dispCaracter=cJ;
        break;
      case 'K':
        dispCaracter=cK;
        break;
      case 'L':
        dispCaracter=cL;
        break;
      case 'M':
        dispCaracter=cM;
        break;
      case 'N':
        dispCaracter=cN;
        break;
      case 'O':
       dispCaracter=cO;
        break;
      case 'P':
        dispCaracter=cP;
        break;
      case 'Q':
        dispCaracter=cQ;
        break;
      case 'R':
       dispCaracter=cR;
        break;
      case 'S':
        dispCaracter=cS;
        break;
      case 'T':
        dispCaracter=cT;
        break;
      case 'U':
        dispCaracter=cU;
        break;
      case 'V':
       dispCaracter=cV;
        break;
      case 'W':
        dispCaracter=cW;
        break;
      case 'X':
        dispCaracter=cX;
        break;
      case 'Y':
        dispCaracter=cY;
        break;
      case 'Z':
        dispCaracter=cZ;
        break;
      //Minusculas
      case 'a':
        dispCaracter=ca;
        break;
      case 'b':
        dispCaracter=cb;
        break;
      case 'c':
        dispCaracter=cc;
        break;
      case 'd':
        dispCaracter=cd;
        break;
      case 'e':
        dispCaracter=ce;
        break;
      case 'f':
        dispCaracter=cf;
        break;
      case 'g':
        dispCaracter=cg;
        break;
      case 'h':
        dispCaracter=ch;
        break;
      case 'i':
        dispCaracter=ci;
        break;
      case 'j':
        dispCaracter=cj;
        break;
      case 'k':
        dispCaracter=ck;
        break;
      case 'l':
        dispCaracter=cl;
        break;
      case 'm':
        dispCaracter=cm;
        break;
      case 'n':
        dispCaracter=cn;
        break;
      case 'o':
        dispCaracter=co;
        break;
      case 'p':
        dispCaracter=cp;
        break;
      case 'q':
        dispCaracter=cq;
        break;
      case 'r':
        dispCaracter=cr;
        break;
      case 's':
        dispCaracter=cs;
        break;
      case 't':
        dispCaracter=ct;
        break;
      case 'u':
        dispCaracter=cu;
        break;
      case 'v':
        dispCaracter=cv;
        break;
      case 'w':
        dispCaracter=cw;
        break;
      case 'x':
        dispCaracter=cx;
        break;
      case 'y':
        dispCaracter=cy;
        break;
      case 'z':
        dispCaracter=cz;
        break;
        


      
      //Numeros
      case '0':
        dispCaracter=c0;
        break;
      case '1':
        dispCaracter=c1;
        break;
      case '2':
        dispCaracter=c2;
        break;
      case '3':
        dispCaracter=c3;
        break;
      case '4':
        dispCaracter=c4;
        break;
      case '5':
        dispCaracter=c5;
        break;
      case '6':
        dispCaracter=c6;
        break;
      case '7':
        dispCaracter=c7;
        break;
      case '8':
        dispCaracter=c8;
        break;
      case '9':
        dispCaracter=c9;
        break;
      //Tres signos
      
      case ' ':
        dispCaracter=cEspacio;
        break;
      case '.':
        dispCaracter=cpunto;
        break;
      default:
        dispCaracter=cEspacio;
        break;
  }
}
//------------------------------------------------------------------------------------------------------------
