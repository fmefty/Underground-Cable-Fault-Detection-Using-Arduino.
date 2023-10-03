#include<LiquidCrystal.h>
#include<Wire.h>
#include<LiquidCrystal_12C.h>
LiquidCrystal_12C Icd(0x27, 16, 2)

#define sensor AO
#define relayl 8
#define relay2 9
#define relay3 10
#define buzzer 12

int read_ADC;
int distance;

byte symbol [8] = {
    B00000
    B00100,
    B00100,
    B00100,
    B11111,
    B01110,
    B00100,
    B00000} ;

void setup() (
    lcd.init() ;

    lcd.backlight() ;
    pinMode (sensor, INPUT);
    pinMode (relayl, OUTPUT);
    pinMode (relay2, OUTPUT);
    pinMode (relay3, OüTPtJT);
    pinMode (buzzer, OUTPUT);

    lcd.createChar(1, symbol) ;
    lcd.begin(16, 2);
    lcd. clear() ;
    Icd.setCursor(0, 0); // set the cursor to column 0,line 2
    lcd.print ("Welcome to Cable") ;
    lcd.setCursor(0, 1); // set the cursor to column 0,line 2
    lcd.print ("Fault Detection") ;
    delay (2000) ;
    lcd.clear();
    }

void loop() {
    lcd. setCursor (1, 0) ;
    Icd.print ("R");
    lcd.write (1);

    lcd. setCursor (7, 0) ;
    lcd.print ("Y");
    Icd.write (1);

    lcd. setCursor (13, 0) ;
    lcd.print ("B") ;
    lcd.write (1) ;

    digitalWrite (relayl, HIGH) ;
    digitalWrite (relay2, LOW) ;
    digitalWrite (relay3, LOW) ;
    delay (500) ;

    data ( ) ;
    lcd. setCursor (0, 1) ;
    if (distance>0) {lcd.print (distance); lcd.print ("KM ");}
    else{lcd.print(" NF ");}

    digitalWrite (relayl , LOW) ;
    digitalWrite (relay2, HIGH) ;
    digitalWrite (relay3, LOW) ;
    delay (500) ;

    data() ;

    lcd.setCursor (6, 1) ;
    if (distance>0) {lcd.print (distance); lcd.print("KM ");}
    else{lcd.print(" NF ");}
    digitalWrite (relayl, LOW) ;
    digitalWrite (relay2 , LOW) ;
    digitalWrite (relay3, HIGH) ;
    delay (500) ;
    data();

    lcd. setCursor (12, 1) ;
    if (distance>0) {lcd. print (distance);lcd.print("KM ");}
    else{lcd.print(" NF ");}
 }
    void data() {
    read_ADC = analogRead(sensor);
    distance = read_ADC/1OO;
    if (distance>9) distance = 0;
    if (distance>O) {
    digitalWrite (buzzer,HIGH) ;
    delay (200) ;
    digitalWrite (buzzer, LOW) ;
    delay (200) ;
    }
  }