int mic = 0; //Sensor pin number

void setup() {  
  Serial.begin(9600);
  pinMode(A0, INPUT);     
  pinMode(11, OUTPUT); //Led pin no 11 declared as an output
  digitalWrite(11, LOW); // initially set LOW
} 
void loop() {  
mic = analogRead(A0); 
if (mic > 200){
  digitalWrite(11, HIGH);
} 
if (mic < 200){
  digitalWrite(11, LOW);
}
delay(1000)
}
