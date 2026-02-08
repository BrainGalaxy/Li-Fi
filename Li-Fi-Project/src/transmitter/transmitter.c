#define LED_PIN 9

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    char data;

    if (Serial.available()) {
        data = Serial.read();

        if (data == '1') {
            digitalWrite(LED_PIN, HIGH);
        } else if (data == '0') {
            digitalWrite(LED_PIN, LOW);
        }
    }
}
