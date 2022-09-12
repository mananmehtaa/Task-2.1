//Task:2.1P

void setup() 
{
  //Setting BUILTIN_LED as Output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  letterM();
  letterA();
  letterN();
  letterA();
  letterN();
  digitalWrite(LED_BUILTIN, LOW);
}

// The creation of a new morse code function for blinking dots
void dot()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(400);
  digitalWrite(LED_BUILTIN,LOW);
  delay(600);
}

// The creation of a new morse code function for blinking dashes
void dash()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN,LOW);
  delay(600);
}


  //NAME: MANAN
  //MORSE CODE: -- .- -. .- -.



void letterM() 
{
dash();
dash();
delay(1500);
}

void letterA() 
{
dot();
dash();
delay(1500);
}

void letterN() 
{
dash();
dot();
delay(2000);  //long delay 
}
