#define sensorPin D1
#define relayPin D8
void setup(){
    Serial.begin(9600);
    pinMode(sensorPin, INPUT);
    pinMode(relayPin, OUTPUT);
    
   // delay(1000);
    Serial.println("AutoMatic Plant Watering System");
}
void loop(){
   // delay(1000);
    
    int val = digitalRead(sensorPin);
    Serial.println(val);

    val ? digitalWrite(relayPin, LOW) :  digitalWrite(relayPin, HIGH);  
}
