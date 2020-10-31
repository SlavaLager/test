const int sensorLEFT=A0,sensorRIGHT=A1,motorLEFT=13,motorRIGHT=12,
	k = 10;

int val_sensorLEFT,val_sensorRIGHT, dif;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void write(int pin,int value){
	if(value<255)
		if(value>0)
			digitalWrite(pin,value);
		else digitalWrite(pin,0);
	else digitalWrite(pin,255);
}

void loop(){
  val_sensorLEFT = analogRead(sensorLEFT);
  val_sensorRIGHT = analogRead(sensorRIGHT);
  dif=val_sensorLEFT-val_sensorRIGHT;
  write(motorLEFT,64 + dif/k);
  write(motorRIGHT,64 - dif/k);
  delay(1000);
}