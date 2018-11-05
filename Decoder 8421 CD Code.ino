char A;
char B;
char C;
char D;
int Pino10A=10;
int Pino11A=11;
int Pino12A=12;
int Pino13A=13;
int d=1;
int c=3;
int e=4;
int g=5;
int f=6;
int a=8;
int b=9;

void setup()
{
  
  pinMode(Pino10A, INPUT);
  pinMode(Pino11A, INPUT);
  pinMode(Pino12A, INPUT);
  pinMode(Pino13A, INPUT);
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void clear()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

bool portaAnd2(char pin1, char pin2)
{
  if(pin1==HIGH && pin2==HIGH)
   {
    return true;
     }
  
  else return false;
   
}

bool portaAnd3(char pin1, char pin2, char pin3)
{
  if(pin1==HIGH && pin2==HIGH && pin3==HIGH)
   {
    return true;
     }
   
  else return false;
   
}

bool portaAnd4(char pin1, char pin2, char pin3, char pin4)
{
  if(pin1==HIGH && pin2==HIGH && pin3==HIGH && pin4==HIGH)
   {
    return true;
     }
  
  else return false;
   
}

bool portaOr5(bool pin1, bool pin2, bool pin3, bool pin4, bool pin5)
{
  if(pin1==true || pin2==true || pin3==true || pin4==true || pin5==true)
   {
    return true;
     }
  
  else return false;
   
}

bool portaOr6(bool pin1, bool pin2, bool pin3, bool pin4, bool pin5, bool pin6)
{
  if(pin1==true || pin2==true || pin3==true || pin4==true || pin5==true || pin6==true)
   {
    return true;
     }
  
  else return false;
   
}

bool portaOr7(bool pin1, bool pin2, bool pin3, bool pin4, bool pin5, bool pin6, bool pin7)
{
  if(pin1==true || pin2==true || pin3==true || pin4==true || pin5==true || pin6==true || pin7==true)
   {
    return true;
     }
  
  else return false;
   
}

void LIMPO()
{
  digitalWrite(a,HIGH);
  delay(10);
  digitalWrite(b,HIGH);
  delay(10);
  digitalWrite(c,HIGH);
  delay(10);
  digitalWrite(d,HIGH);
  delay(10);
  digitalWrite(e,HIGH);
  delay(10);
  digitalWrite(f,HIGH);
  delay(10);
  digitalWrite(g,LOW);
  delay(10);
}

void loop()
{
 A = digitalRead(Pino10A);
 B = digitalRead(Pino11A);
 C = digitalRead(Pino12A);
 D = digitalRead(Pino13A);
  
 if(portaOr7(portaAnd3(A,!B,!C),portaAnd3(A,!C,!D),portaAnd2(C,!D),portaAnd3(!A,!B,!D),portaAnd3(!A,B,D),portaAnd2(!A,C),portaAnd2(B,C)))
 {
  digitalWrite(a,HIGH);
 }
  
 if(portaOr6(portaAnd2(!A,!B), portaAnd3(!A,!C,!D),portaAnd3(!A,C,D),portaAnd3(A,!B,!C),portaAnd3(A,!B,!D),portaAnd3(A,!C,D)))
 {
  digitalWrite(b,HIGH);
 }
  
 if(portaOr5(portaAnd2(A,!B),portaAnd2(!A,B),portaAnd2(!C,D),portaAnd2(!A,!C),portaAnd2(!A,D)))
 {
  digitalWrite(c,HIGH);
 }
  
 if(portaOr6(portaAnd2(A,!C),portaAnd3(!A,!B,C),portaAnd3(!A,!B,!D),portaAnd3(B,!C,D),portaAnd3(A,!B,D),portaAnd3(B,C,!D)))
 {
  digitalWrite(d,HIGH);
 }
  
 if(portaOr5(portaAnd2(C,!D),portaAnd2(A,B),portaAnd3(A,!C,!D),portaAnd3(A,C,D),portaAnd3(!A,!B,!D)))
 {
  digitalWrite(e,HIGH);
 }
  
 if(portaOr5(portaAnd2(!C,!D),portaAnd2(A,!B),portaAnd3(!A,B,!C),portaAnd2(A,C),portaAnd3(B,C,!D)))
 {
  digitalWrite(f,HIGH);
 }
 
 if(portaOr5(portaAnd2(C,!D),portaAnd2(A,!B),portaAnd3(!A,!B,C),portaAnd3(!A,B,!C),portaAnd2(A,D)))
 {
  digitalWrite(g,HIGH);
 }
   clear();
}