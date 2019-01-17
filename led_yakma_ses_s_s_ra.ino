
#define SensorPin 5
#define analog A0
#define leda A2
#define ledb A3
#define ledo A1



#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11
#define led11 12
#define led12 13

float ses1=16.5;
float ses2=17;
float ses3=18;
float ses4=19;
float ses5=20;
float ses6=21;
float ses7=22;
float ses8=23;
float ses9=24,ses10,ses11,ses12;
int sesdeg;
float bekle=2;
int deger;
float deger2,oran;


void setup() {


  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);



  Serial.begin(9600);
}

void leds(){
  if(sesdeg>=ses1){
    digitalWrite(led1,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led1,LOW);
     delay(bekle);
  }

   if(sesdeg>=ses2){
    digitalWrite(led2,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led2,LOW);
     delay(bekle);
  }


   if(sesdeg>=ses3){
    digitalWrite(led3,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led3,LOW);
     delay(bekle);
  }


   if(sesdeg>=ses4){
    digitalWrite(led4,HIGH);
        delay(bekle);
  }else{
    digitalWrite(led4,LOW);
        delay(bekle);
  }


   if(sesdeg>=ses5){
    digitalWrite(led5,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led5,LOW);
     delay(bekle);
  }


   if(sesdeg>=ses6){
    digitalWrite(led6,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led6,LOW);
     delay(bekle);
  }

   if(sesdeg>=ses7){
    digitalWrite(led7,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led7,LOW);
     delay(bekle);
  }


   if(sesdeg>=ses8){
    digitalWrite(led8,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led8,LOW);
     delay(bekle);
  }


   if(sesdeg>=ses9){
    digitalWrite(led9,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led9,LOW);
        delay(bekle);
}
if(sesdeg>=ses10){
    digitalWrite(led10,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led10,LOW);
        delay(bekle);
}
if(sesdeg>=ses11){
    digitalWrite(led11,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led11,LOW);
        delay(bekle);
}
if(sesdeg>=ses12){
    digitalWrite(led12,HIGH);
     delay(bekle);
  }else{
    digitalWrite(led12,LOW);
        delay(bekle);
}
}


void loop() {

  sesdeg=analogRead(analog);
  deger=analogRead(leda);
  deger2=analogRead(ledb);
  oran=analogRead(ledo);

  Serial.println(oran);


  deger=map(deger,0,1023,18,80);
  deger2=deger2/(1023/5);
  oran=oran/(1023/5);
  bekle=deger2;
  if(deger<=16){
    deger=16.1;
     ses1=deger;
  }else if(oran!=0){
  ses1=deger;
  ses2=deger+oran;
  ses3=deger+2*oran;
  ses4=deger+3*oran;
  ses5=deger+4*oran;
  ses6=deger+5*oran;
  ses7=deger+6*oran;
  ses8=deger+7*oran;
  ses9=deger+8*oran;
  ses10=deger+9*oran;
  ses11=deger+10*oran;
  ses12=deger+11*oran;
  
  }else{
  oran=0.1;
  ses1=deger;
  ses2=deger+oran;
  ses3=deger+2*oran;
  ses4=deger+3*oran;
  ses5=deger+4*oran;
  ses6=deger+5*oran;
  ses7=deger+6*oran;
  ses8=deger+7*oran;
  ses9=deger+8*oran;
  ses10=deger+9*oran;
  ses11=deger+10*oran;
  ses12=deger+11*oran;
  }
 
  leds();
 }
