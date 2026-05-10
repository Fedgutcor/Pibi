// programa realizado para procesar textos digitales y codificarlos en braille para proyecto Pibi
// hecho por: FGC
// Ultima actualización: 9/9/2018 por: FGC

#define BAUD_RATE 115200

char string_tp;
String aux_string;
String stringToproccess;

#define SOLE_0  2
#define SOLE_1  3
#define SOLE_2  4
#define SOLE_3  5
#define SOLE_4  6
#define SOLE_5  7

//String braille_sequences[] = {"a000001",
//                              "b000011",
//                              "c001001",
//                              "d110001",
//                              "e010001"};

void setup() {

Serial.begin(BAUD_RATE);

  pinMode(SOLE_0, OUTPUT);
  pinMode(SOLE_1, OUTPUT);
  pinMode(SOLE_2, OUTPUT);
  pinMode(SOLE_3, OUTPUT);
  pinMode(SOLE_4, OUTPUT);
  pinMode(SOLE_5, OUTPUT);

}

void loop() {
if (Serial.available() > 0){

//Show received string
aux_string=Serial.readString();
Serial.println("String received:" + aux_string);

//Show received string in lowerCase
aux_string.toLowerCase();
Serial.println("String received in lc:" + aux_string);

//Read each char into the string
int n = aux_string.length(); 
for (int i = 0; i < n; i++) {
Serial.println("Char Number[" + String(i) + "]:" + aux_string[i]); //stringToProccess[i] <=> stringToProccess.charAt(i)  

if(aux_string[i]=='a'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='b'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='c'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='d'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='e'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='f'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='g'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='h'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='i'){
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='j'){
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='k'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='l'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='m'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='n'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='o'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='p'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='q'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='r'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='s'){
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='t'){
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(400);}
else if(aux_string[i]=='u'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(400);}
else if(aux_string[i]=='v'){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(400);}
else if(aux_string[i]=='w'){
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
delay(400);}
else if(aux_string[i]=='x'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(400);}
else if(aux_string[i]=='y'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
delay(400);}
else if(aux_string[i]=='z'){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
delay(400);}
else if(aux_string[i]==' '){
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(400);}


  }
 }
}
