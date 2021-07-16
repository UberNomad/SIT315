// C++ code
//
const int temperaturePin = 0;

float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  float voltage, degreesC;
  
  voltage = getVoltage(temperaturePin);
  
  degreesC = (voltage - 0.5) * 100.0;
  
  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.println(degreesC);
  
  if(degreesC >= 65)
  {
    digitalWrite(13, HIGH);
  	delay(500); // Wait for 1000 millisecond(s)
  	digitalWrite(13, LOW);
  	delay(500); // Wait for 1000 millisecond(s)
  }
  else
  	delay(1000);
  
  
}