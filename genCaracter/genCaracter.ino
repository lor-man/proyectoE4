//Definicion de las letras en formato de matriz de 6x4
//------------------------------------------------------------------------------------------------------------
//Caracteres
uint8_t cA[4]  = { 0x3F  , 0x09 , 0x09 , 0x3F } ;
uint8_t cB[4]  = { 0x3F  , 0x3F , 0x25 , 0x3F } ;
uint8_t cC[4]  = { 0x3F  , 0x21 , 0x21 , 0x21 } ;
uint8_t cD[4]  = { 0x3F  , 0x21 , 0x12 , 0x0C } ;
uint8_t cE[4]  = { 0x3F  , 0x29 , 0x29 , 0x29 } ;
uint8_t cF[4]  = { 0x3F  , 0x05 , 0x05 , 0x05 } ;
uint8_t cG[4]  = { 0x1E  , 0x21 , 0x25 , 0x19 } ;
uint8_t cH[4]  = { 0x3F  , 0x0C , 0x0C , 0x3F } ;
uint8_t cI[4]  = { 0x21  , 0x3F , 0x3F , 0x21 } ;
uint8_t cJ[4]  = { 0x00  , 0x21 , 0x3F , 0x01 } ;
uint8_t cK[4]  = { 0x3F  , 0x0C , 0x12 , 0x21 } ;
uint8_t cL[4]  = { 0x3F  , 0x20 , 0x20 , 0x20 } ;
uint8_t cM[4]  = { 0x3F  , 0x06 , 0x06 , 0x3F } ;
uint8_t cN[4]  = { 0x3F  , 0x06 , 0x18 , 0x3F } ;
uint8_t cO[4]  = { 0x1E  , 0x21 , 0x21 , 0x1E } ;
uint8_t cP[4]  = { 0x3E  , 0x09 , 0x09 , 0x0E } ;
uint8_t cQ[4]  = { 0x0F  , 0x11 , 0x13 , 0x20 } ;
uint8_t cR[4]  = { 0x3E  , 0x09 , 0x09 , 0x36 } ;
uint8_t cS[4]  = { 0x24  , 0x2A , 0x29 , 0x11 } ;
uint8_t cT[4]  = { 0x01  , 0x3F , 0x3F , 0x01 } ;
uint8_t cU[4]  = { 0x1F  , 0x20 , 0x20 , 0x1F } ;
uint8_t cV[4]  = { 0x0F  , 0x30 , 0x30 , 0x0F } ;
uint8_t cW[4]  = { 0x3F  , 0xC , 0xC , 0x2F  } ;
uint8_t cX[4]  = { 0x33  , 0x0C , 0x0C , 0x33 } ;
uint8_t cY[4]  = { 0x07  , 0x38 , 0x38 , 0x07 } ;
uint8_t cZ[4]  = { 0x31  , 0x29 , 0x25 , 0x23 } ;
//digitos
uint8_t c0[4]  = { 0x3F , 0x21 , 0x21 , 0x3F  } ;
uint8_t c1[4]  = { 0x00 , 0x02 , 0x01 , 0x3F  } ;
uint8_t c2[4]  = { 0x00 , 0x1A , 0x25 , 0x22  } ;
uint8_t c3[4]  = { 0x00 , 0x29 , 0x29 , 0x1E  } ;
uint8_t c4[4]  = { 0x00 , 0x07 , 0x04 , 0x3F  } ;
uint8_t c5[4]  = { 0x00 , 0x27 , 0x25 , 0x3D  } ;
uint8_t c6[4]  = { 0x00 , 0x3F , 0x25 , 0x3D  } ;
uint8_t c7[4]  = { 0x00 , 0x01 , 0x01 , 0x3F  } ;
uint8_t c8[4]  = { 0x00 , 0x3F , 0x25 , 0x3F  } ;
uint8_t c9[4]  = { 0x00 , 0x07 , 0x05 , 0x3F  } ;
//Caracteres especiales por definir
uint8_t cInterrogacion[4]  = { 0x02 , 0x01 , 0x2D  , 0x2 } ;//Signo de interrogacion ?
uint8_t cAdmiracion[4] = { 0x00 , 0x00 , 0x2F  , 0x00 } ;//signo de !
uint8_t cEspacio[4]  = { 0x20  , 0x20  , 0x20  , 0x20  } ;// El espacio sera un guion bajo _, se utilizara tambien cuando no se encuentre el caracter enviado.
//------------------------------------------------------------------------------------------------------------

int outRow[]={PD_0,PD_1,PD_2,PD_3,PE_0,PE_1};// PD_0,PD_1,PD_2,PD_3,PE_0,PE_1 Filas
int outCol[]={PE_2,PE_3,PE_4,PE_5};//PE_2,PE_3,PE_4,PE_5  Columnas
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
}
//------------------------------------------------------------------------------------------------------------

void loop() {
  String cadenaSer="";//String de concatenacion de datos recibidos
  String cadEnv="";//String con el que se trabaja la matriz copia de cadenaSer
  while (Serial.available()) {  // While de recepcion de cadena de caracteres enviados desde la computadora
    cadenaSer = Serial.readString();       
    }
  if(cadenaSer.length()!=0){ //si lo que se envia no es una cadena vacia entonces se extrae dato pordatopara eliminar los ultimos dos caracteres que se envia desde la PC
    for( uint8_t cnt_len=0; cnt_len<=cadenaSer.length()-1;cnt_len++){
      cadEnv=cadEnv+cadenaSer[cnt_len];
    }
    Serial.print(cadEnv);//Se envia de vuelta la cadena para corroborar la recepcion
  }
  Serial.flush();//Se limpia el buffer de recepcion del modulo uart
  cadenaSer="";  //Se limpia la variable tipo string de recepcion
  cadEnv.toUpperCase();// Se convierte a mayusculas el texto recibido
 //---------Logica de multiplexacion de caracteres y control de tiempo de visibilidad------------------------

//--------Aca falta esta parte-------------------------------------------------------------------------------
 //---------Fin de bloque de logica--------------------------------------------------------------------------



  
  cadEnv="";// Se limpia la variable tipo string donde se guarda la copia de la cadena recibido  
}
//------------------------------------------------------------------------------------------------------------
uint8_t * matrizCaracter(char letra){
  switch(letra){
      case 'A':
        return(cA);
        break;
      case 'B':
        return(cB);
        break;
      case 'C':
        return(cC);
        break;
      case 'D':
        return(cD);
        break;
      case 'E':
        return(cE);
        break;
      case 'F':
        return(cF);
        break;  
      case 'G':
        return(cG);
        break; 
      case 'H':
        return(cH);
        break;
      case 'I':
        return(cI);
        break;
      case 'J':
        return(cJ);
        break;
      case 'K':
        return(cK);
        break;
      case 'L':
        return(cL);
        break;
      case 'M':
        return(cM);
        break;
      case 'N':
        return(cE);
        break;
      case 'O':
        return(cO);
        break;
      case 'P':
        return(cP);
        break;
      case 'Q':
        return(cQ);
        break;
      case 'R':
        return(cR);
        break;
      case 'S':
        return(cS);
        break;
      case 'T':
        return(cT);
        break;
      case 'U':
        return(cU);
        break;
      case 'V':
        return(cV);
        break;
      case 'W':
        return(cW);
        break;
      case 'X':
        return(cX);
        break;
      case 'Y':
        return(cY);
        break;
      case 'Z':
        return(cZ);
        break;
      //Numeros
      case '0':
        return(c0);
        break;
      case '1':
        return(c1);
        break;
      case '2':
        return(c2);
        break;
      case '3':
        return(c3);
        break;
      case '4':
        return(c4);
        break;
      case '5':
        return(c5);
        break;
      case '6':
        return(c6);
        break;
      case '7':
        return(c7);
        break;
      case '8':
        return(c8);
        break;
      case '9':
        return(c9);
        break;
      //Tres signos
      case '?':
        return(cInterrogacion);
        break;
      case '!':
        return(cAdmiracion);
        break;
      case ' ':
        return(cEspacio);
        break;
      default:
        return(cEspacio);
        break;
  }
}
//------------------------------------------------------------------------------------------------------------
