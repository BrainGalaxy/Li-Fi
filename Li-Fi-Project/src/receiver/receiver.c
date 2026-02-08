#define LDR_PIN A0
#define THRESHOLD 500

void setup() {
    Serial.begin(9600);
}

void loop() {
    int value = analogRead(LDR_PIN);

    if (value > THRESHOLD) {
        Serial.println("1");
    } else {
        Serial.println("0");
    }

    delay(100);
}
