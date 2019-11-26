void setup() {
    int pins[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
    for(int a = 0; a < sizeof(pins)/sizeof(int); a++){
      pinMode(pins[a], OUTPUT); 
    }
}

void loop() {
  //set arrays and variables
  int led_1[] = {1,2,3};
  int led_1_shim = 3;
  int standart_delay = 10000;
  //off all leds
  analogWrite(led_1_shim,100);
  digitalWrite(led_1[0],HIGH);
  digitalWrite(led_1[1],HIGH);
  digitalWrite(led_1[2],HIGH);
  
  for (int x = standart_delay; x >= 0; x = x - 50) {
      for (int b = 0; b <= sizeof(led_1)/sizeof(int); b++) {
        digitalWrite(led_1[b],LOW);
        digitalWrite(led_1[b],HIGH);
      }
  }

}
