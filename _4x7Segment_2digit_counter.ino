// variables

int LED_G= 6;
int LED_F= 7;
int LED_E= 8;
int LED_D = 9;
int LED_C = 10;
int LED_B = 11;
int LED_A = 12;
int PIN_dijitSatuan = 13;
int PIN_dijitPuluhan = 2;
int DELAY_LED = 1;

// Setting Sebagai Output
void setup()
{
  
  pinMode(LED_G, OUTPUT);
  pinMode(LED_F, OUTPUT);
  pinMode(LED_E, OUTPUT);
  pinMode(LED_D, OUTPUT);
  pinMode(LED_C, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_A, OUTPUT);
  pinMode(PIN_dijitSatuan, OUTPUT);
  pinMode(PIN_dijitPuluhan, OUTPUT);
}

void loop()
{  
  Tampilkan_2Angka(7,8);
}
  
void Tampilkan_2Angka(int puluhan, int satuan) {
  for(int d=0; d<=9; d++) {
      for (int i=0; i<=9; i++) {
        for (int t=1; t<=100; t++) {
      digitalWrite(PIN_dijitPuluhan, HIGH);
      Tampilkan_Angka(d);
      digitalWrite(PIN_dijitPuluhan, LOW);
        digitalWrite(PIN_dijitSatuan, HIGH);  
        Tampilkan_Angka(i);
        digitalWrite(PIN_dijitSatuan, LOW);  
        }
      }
    //delay(1000);
  }
}

void Tampilkan_Angka(int numberToDisplay) {
Reset_Lampu(1);
switch(numberToDisplay) {
  case 1:
  // Angka 1
//Reset_Lampu(1);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  delay(DELAY_LED);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  delay(DELAY_LED);
  break;
  
  case 2:    
  // Angka 2
 // Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_E,HIGH);
  digitalWrite(LED_G,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_E,LOW);
  digitalWrite(LED_G,LOW);
  delay(DELAY_LED);
  break;

  case 3:
  // Angka 3
 // Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_G,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_G,LOW);
  delay(DELAY_LED);
  break;

  case 4:
  // Angka 4
  //Reset_Lampu(1);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_F,HIGH);
  digitalWrite(LED_G,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_F,LOW);
  digitalWrite(LED_G,LOW);
  delay(DELAY_LED);
  break;

  case 5:
  // Angka 5
  //Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_F,HIGH);
  digitalWrite(LED_G,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_F,LOW);
  digitalWrite(LED_G,LOW);
  delay(DELAY_LED);
  break;

  case 6:
  // Angka 6
  //Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_E,HIGH);
  digitalWrite(LED_F,HIGH);
  digitalWrite(LED_G,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_E,LOW);
  digitalWrite(LED_F,LOW);
  digitalWrite(LED_G,LOW);
  delay(DELAY_LED);
  break;

  case 7:
  // Angka 7
  //Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  delay(DELAY_LED);
  break;
  
  case 8:
  // Angka 8
  //Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_E,HIGH);
  digitalWrite(LED_F,HIGH);
  digitalWrite(LED_G,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_E,LOW);
  digitalWrite(LED_F,LOW);
  digitalWrite(LED_G,LOW);
  delay(DELAY_LED);
  break;
  
  case 9:
  // Angka 9
  //Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_F,HIGH);
  digitalWrite(LED_G,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_F,LOW);
  digitalWrite(LED_G,LOW);
  delay(DELAY_LED);
  break;
  
  case 10:
  // Angka 10
  //Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_E,HIGH);
  digitalWrite(LED_F,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_E,LOW);
  digitalWrite(LED_F,LOW);
  delay(DELAY_LED);
  break;

  case 0:
  // Angka 0
  //Reset_Lampu(1);
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_E,HIGH);
  digitalWrite(LED_F,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED_A,LOW);
  digitalWrite(LED_B,LOW);
  digitalWrite(LED_C,LOW);
  digitalWrite(LED_D,LOW);
  digitalWrite(LED_E,LOW);
  digitalWrite(LED_F,LOW);
  delay(DELAY_LED);
  break;

}}

void Reset_Lampu (int)
{
     // Reset - Matikan semua LED dulu
  digitalWrite(LED_A,HIGH);
  digitalWrite(LED_B,HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_D,HIGH);
  digitalWrite(LED_E,HIGH);
  digitalWrite(LED_F,HIGH);
  digitalWrite(LED_G,HIGH);
}
  

