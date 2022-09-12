int out = LED_BUILTIN ; 

void setup() {
pinMode(out, OUTPUT); 
}

void single ()
{
  digitalWrite(out , HIGH);
  delay(1000);
  digitalWrite(out , LOW);
  delay(500);
}

void constant()
{
  digitalWrite(out , HIGH);
  delay(3000); 
  digitalWrite(out, LOW);
  delay(500);  
}
void Main() 
{
  // for "M" :- 
  constant(); 
  constant(); 
  delay(2000);

  // CONSIDERING "A" :-
  single(); 
  constant(); 
  delay(2000);

  // CONSIDERING "N" :- 
  constant(); 
  single();
  delay(2000);

  // CONSIDERING "A" :-
  single(); 
  constant(); 
  delay(2000);

  // CONSIDERING "N" :- 
  constant(); 
  single();
  delay(2000);
  
}
