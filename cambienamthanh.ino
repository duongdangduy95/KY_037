#define SOUND_SENSOR A0 // Chân AO của KY-037

void setup() {
    Serial.begin(9600);
}

void loop() {
    int soundLevel = analogRead(SOUND_SENSOR);
    Serial.print("Mức âm thanh: ");
    Serial.println(soundLevel);
    delay(1000);
}
