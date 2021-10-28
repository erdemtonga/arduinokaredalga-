double y, y_eski, x, a = 0.01;
void setup() {
Serial.begin(115200);
}
void loop() {
y_eski = y;
x = analogRead(A0) * (5.0 / 1023.0);
y = a * x + (1 - a) * y_eski;
Serial.println(y);
delay(1); // delay in between reads for stability
}
