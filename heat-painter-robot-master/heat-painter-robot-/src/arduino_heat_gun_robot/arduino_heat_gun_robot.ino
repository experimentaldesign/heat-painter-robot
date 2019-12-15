int robotPin = 4; //Switch Connected to PIN 5
int relayPin = 8; //RELAY Connected to PIN 10
int switchState = 0; // Variable for reading Switch status

void setup()
{
  // put your setup code here, to run once:
  pinMode(relayPin, OUTPUT); //Relay PIN as Output
  pinMode(robotPin, INPUT);//Robot PIN as input
}
void loop()
{
  // put your main code here, to run repeatedly:
  switchState = digitalRead(robotPin); //Reads the status of the switch.
  if (switchState == HIGH) //If the switch is pressed
  {
    digitalWrite(relayPin, HIGH); //LED ON
  } else {
    digitalWrite(relayPin, LOW); //LED OFF
  }
}
