#include <dht.h>  // using the DHT Library
 
dht DHT;

#define DHT11_PIN 7  // value from DHT sensor goes to pin 7 of Arduino

int real_feel = 0;  // defining a variable for real feel temperature

void setup(){
  Serial.begin(9600);  // setting up the serial monitor
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);

  if (DHT.temperature > 30) {
    real_feel = DHT.temperature + (0.1*DHT.humidity);  
  } else {
    real_feel = DHT.temperature + (0.05*DHT.humidity);
  }
  
  Serial.print("Real Feel Temperature = ");
  Serial.println(real_feel);
                               
  Serial.print('\n');
  delay(2000);
}
