void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}
float pot1=0;
float volt=0;
int x=0;
void loop() {
  // put your main code here, to run repeatedly:
  delay(1500);
pot1=analogRead(A0);
volt=pot1*5/1024;
x=map(pot1,0,1023,0,84);
Serial.print("\n");
Serial.print("..........LA TEMPERATURA ES:");
Serial.print(x );
Serial.println(" C");

Serial.print(".....DIGITAL: ");
Serial.println(pot1);
Serial.print("VOLTAJE: "); 
Serial.println(volt);
Serial.println();
//Serial.print("Digital: ");

}
