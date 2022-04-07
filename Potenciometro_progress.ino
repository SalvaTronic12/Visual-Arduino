int valorPotenciometro;


void setup() {
  Serial.begin(9600);
}

void loop() {

  valorPotenciometro = digitalRead(8);

  Serial.println(valorPotenciometro);
  delay(100);
  

}
