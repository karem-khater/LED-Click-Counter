int counter =0;
void setup() {
  for(int i=5;i<=7;i++){pinMode(i,OUTPUT);}
  pinMode(4,INPUT);
}


void loop() {
int reading=digitalRead(4);
  if(reading==1){
    delay(300);
    if(counter==0){digitalWrite(5,1);}
    else if(counter==1){digitalWrite(6,1);}
    else if(counter==2){digitalWrite(7,1);}
    else if(counter==3){digitalWrite(7,0);
    digitalWrite(6,0);digitalWrite(5,0);}
    counter++;
  }
  if(counter==4){counter=0;}
}
/*int counter = 0;

void setup() {
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
                          (better version by GPT :) )
void loop() {
  if (digitalRead(4) == HIGH) {
    delay(300);
    digitalWrite(counter + 5, HIGH);
    counter = (counter + 1) % 4;
    if (counter == 0) {
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
}*/