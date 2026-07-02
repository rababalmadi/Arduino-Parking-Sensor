int LedPins[6]={2,3,4,5,6,7};
int NumberOfLeds=6;
int TrigPin=12;
int EchoPin=11;
int Traveltime;
float Distance;
void setup()
{
  for(int i=0;i<NumberOfLeds;i++){
    pinMode(LedPins[i], OUTPUT);}
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
 sendSoundWave();
  Traveltime=pulseIn(EchoPin,HIGH);
  Distance=Traveltime*0.034/2;
  Serial.println(Distance);
   
  if(Distance<=20){
    
    int n=map(Distance,0,20,NumberOfLeds,0);
    for(int i=0;i<n;i++){
      digitalWrite(LedPins[i],HIGH);
    }
    for(int i=n;i<NumberOfLeds;i++){
    digitalWrite(LedPins[i],LOW);
    }
    }
    
    else{
    for(int i=0;i<NumberOfLeds;i++)
       digitalWrite(LedPins[i],LOW);
    
    }
  delay(200);
  }
    


void sendSoundWave(){
digitalWrite(TrigPin,LOW);
delayMicroseconds(2);
 digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10); 
  digitalWrite(TrigPin, LOW);
}