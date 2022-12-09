//https://wokwi.com/projects/346616527479374419
//Potentiometer
#define LED 2
#define POT A0

void setup() {
  //define the pins
  pinMode(LED, OUTPUT); //pin=#, mode=in or out
  pinMode(POT, INPUT);

  //Turn on the LED
  digitalWrite(LED, HIGH);

  Serial.begin(9600); //set up serial monitor
}

int i=0;
void loop() {
  //Read the pot values
  int potStatus =analogRead(POT);

  //Read and Print the POT reading
  //Serial.print("Pot status: ");
  //Serial.println(potStatus);

  // Delay in milliseconds
  // 500 ms; loop runs ~2 times/sec
  // due to this delay; click quickly
  delay(500);

  digitalWrite(LED, HIGH);
  delay(250);
  digitalWrite(LED, LOW);
  delay(250);

  i++;
  Serial.print("Number of blinks: ");
  Serial.println(i);

}
