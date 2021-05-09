// Declare variables

int photoresistor = A0;
int power = A1;
int lightvalue; 

// Next we go into the setup function.

void setup() {

    // Declare pins
    pinMode(photoresistor,INPUT);
    pinMode(power,OUTPUT); 

    digitalWrite(power,HIGH);

    // Variable to monitor
    Particle.variable("lightvalue", &lightvalue, INT);

}


// Loop function

void loop() {

    // check to see what the value of the photoresistor is and store it in the int variable analogvalue
    lightvalue = analogRead(photoresistor);
    
    delay(3000);
}

