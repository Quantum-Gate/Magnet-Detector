const int Sensor = 2;
int Value;

void setup(){
  pinMode(Sensor, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  Value = digitalRead(Sensor);
  if(Value == HIGH){
    Serial.println("Magnet Detected");
  }else{
    Serial.println("Magnet Not Detected");
  }
}
