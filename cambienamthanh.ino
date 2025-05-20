
const int analogPin = A0;  
const int digitalPin = 7; 
const int ledPin = 13;     

void setup() {
  pinMode(digitalPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(analogPin);   
  int digitalValue = digitalRead(digitalPin); 

 
  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(" | Digital: ");
  Serial.println(digitalValue);

  
  if (digitalValue == HIGH || analogValue > 600) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(200); 
}
