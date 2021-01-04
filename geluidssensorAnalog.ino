//Deze code werkt bij een analoge geluidssensor
int sensor_value = 0;
int threshold = 810; //Enter Your threshold value here
int abs_value = 0;
int led = 12; // Bargraph pins

void setup(){
  Serial.begin(9600); // setup serial
  pinMode(led, OUTPUT);
}

void loop(){
sensor_value = analogRead(A0);
  if (threshold > sensor_value){
    digitalWrite(led, HIGH);
  }
// turn off all pins higher than the ledLevel:
  else {
    digitalWrite(led, LOW);
  }
  Serial.println(sensor_value);
}
