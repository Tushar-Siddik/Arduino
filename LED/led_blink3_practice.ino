int aa=13;
void setup () {
    pinMode (aa, OUTPUT);
}

void loop () {
    digitalWrite (aa, HIGH);
    delay (500);
    
    digitalWrite (aa, LOW);
    delay (500);
}