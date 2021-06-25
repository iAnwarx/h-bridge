int l1= 3 ;
int r1= 5 ;
int l2= 10 ;
int r2= 11 ;
void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(r2, OUTPUT);
}
void forward ()
{
  digitalWrite(l1,1);
  digitalWrite(r1,0);
  digitalWrite(l2,0);
  digitalWrite(r2,1);
}
void backward ()
{
  digitalWrite(l1,0);
  digitalWrite(r1,1);
  digitalWrite(l2,1);
  digitalWrite(r2,0);
} 
void left()
{
  digitalWrite(l1,1);
  digitalWrite(r1,0);
  digitalWrite(l2,1);
  digitalWrite(r2,0);
}
void right()
{
  
  digitalWrite(l1,0);
  digitalWrite(r1,1);
  digitalWrite(l2,0);
  digitalWrite(r2,1);
}
void stop1()
{
  digitalWrite(l1,0);
  digitalWrite(r1,0);
  digitalWrite(l2,0);
  digitalWrite(r2,0);
}
void loop()
{
 forward() ;
 delay(200);
 stop1();
 delay(200);
 left();
 delay(200);
 forward() ;
 delay(200);
 right() ;
 delay(200); 
}

  

