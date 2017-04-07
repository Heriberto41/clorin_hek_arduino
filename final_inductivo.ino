
int sensorPin = 10;
int led = 9;

 
void setup()
{
   Serial.begin(9600);
   Serial.println("inicio");
  // digitalWrite(led, HIGH);
  pinMode(led , OUTPUT);
}
 
void loop()
{

   bool state = digitalRead(sensorPin);
 // Serial.println("Escaneando");
   //mandar mensaje a puerto serie en función del valor leido
   if (state == HIGH)
   {
      Serial.println("-si");
      digitalWrite(led, HIGH);
      
      
      //aquí se ejecutarían las acciones
   }
   else{
     Serial.println("-no");
     digitalWrite(led, LOW);
   }
   delay(500);
   
}
