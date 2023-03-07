void setup() {
  pinMode(D1, OUTPUT);
  pinMode(A0, INPUT);

  Serial.begin(9600);

  Serial.println("Trabajando don la fotorresistencia");
}
 
void loop() {
  int valor_fotocelda = analogRead(A0);
  Serial.println(valor_fotocelda);
  if(valor_fotocelda <= 400){
    digitalWrite(D1, HIGH);
  }else{
    digitalWrite(D1, LOW);
  }
  delay(500);
}