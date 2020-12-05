//def i nes pins numbers 
const int trigPin = 9;
const int echoPin = 10;

// def i nes variables 
long duration; // long is a data-type int distance;

void setup() {
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output 
    pinMode(13, OUTPUT);
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input 
    
    Serial.begin(9600); // Starts the serial communication 
    }

void loop() { // Clears the trigPin 
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
 // Sets the trigPin on HIGH state for 10 micro seconds 
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
 // Reads the echoPin, returns the sound wave travel time in microseconds 
    
    duration = pulseIn(echoPin, HIGH);
 // Calculating the distance 
    
    float distance = duration*0.034/2;
 // Prints the distance on the Serial Monitor 
    if (distance < 150){
        digitalWrite(13, HIGH);
    }
    else {
        digitalWrite(13, LOW);
    }
    Serial.print('Distance: ');
    Serial.println(distance);
}