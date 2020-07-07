#define DDRB0 0
#define PORTB0 0

void setup(){
  DDRB = 1 << DDRB0;
}

void loop(){

  PORTB = 1 << PORTB0; //APRINDE LED
  delay(1000);
  PORTB = 0 << PORTB0; //STINGE LED
  delay(1000);
}
