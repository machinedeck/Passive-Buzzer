int buzzpin = 7;
int on_switch = 4;
int mult = 200;
// int freq[14] = {659, 587, 370, 415, 554, 494, 294, 330, 494, 554, 587, 659, 587, 494};
// int time[14] = {1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 4};
int freq[13] = {1319, 1175, 740, 831, 1109, 988, 587, 659, 988, 880, 554, 659, 880};
int time[13] = {1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 4};
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin, OUTPUT);
  pinMode(on_switch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // tone(buzzpin, 250);
  
  // For fun
  int val = digitalRead(on_switch);
  if (val == 1) {
    // // Option 1
    // tone(buzzpin, 250, 1000);

    // Option 2
    for (int i = 0; i < 13; i++) {
      tone(buzzpin, freq[i], time[i]*mult);
      delay(time[i]*mult);
    }
  }
  // delay(5000);
}
