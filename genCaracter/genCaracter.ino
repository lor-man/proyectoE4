
void setup() {
Serial.begin(9600);
while(!Serial){}
}

void loop() {
String cadena; 
  while(Serial.available()){
   cadena=Serial.readString();
   Serial.print(cadena);
  }

}
