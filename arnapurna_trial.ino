const int en1=2;
const int in1= 3;
const int in2=4;
const int in3=5;
const int in4=6;
const int en2=7;

const int left=21;
const int mid_left=20;
const int top_mid_right=14;
const int top_mid_left=15;
const int right=18;
const int mid_right=19;
const int top_left=17;
const int top_right=16;
const int top_l=8;
const int top_r=9;

char Speed=45;
void setup()
{
  // put your setup code here, to run once:
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(en1,OUTPUT);
pinMode(en2,OUTPUT);

pinMode(top_l,INPUT);
pinMode(top_r,INPUT);
pinMode(left,INPUT);
pinMode(right,INPUT);
pinMode(mid_left,INPUT);
pinMode(mid_right,INPUT);
pinMode(mid_left,INPUT);
pinMode(top_mid_right,INPUT);
pinMode(top_mid_left,INPUT);
pinMode(mid_right,INPUT);
pinMode(top_left,INPUT);
pinMode(top_right,INPUT);

}

void loop()
{
  // put your main code here, to run repeatedly:

int left_status=digitalRead(left);
int mid_left_status=digitalRead(mid_left);
int mid_right_status=digitalRead(mid_right);
int right_status=digitalRead(right);
int top_left_status=digitalRead(top_left);
int top_mid_right_status=digitalRead(top_mid_right);
int top_mid_left_status=digitalRead(top_mid_left);
int top_right_status=digitalRead(top_right);

if ((top_left_status==1)&&(top_mid_left_status==1)&&(left_status==1)&&( mid_left_status==0)&&(mid_right_status==0)&&(right_status==1)&&(top_mid_right_status==1)&&(top_right_status==1))
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(en1,Speed);
  analogWrite(en2,Speed);
  
}

else if ((top_left_status==1)&&(top_mid_left_status==1)&&(left_status==1)&&( mid_left_status==1)&&(mid_right_status==0)&&(right_status==1)&&(top_mid_right_status==1)&&(top_right_status==1))
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(en1,Speed+40);
  analogWrite(en2,Speed-20);
  
}
else if ((top_left_status==1)&&(top_mid_left_status==1)&&(left_status==1)&&( mid_left_status==0)&&(mid_right_status==1)&&(right_status==1)&&(top_mid_right_status==1)&&(top_right_status==1))
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(en1,Speed-20);
  analogWrite(en2,Speed+40);
  
}
else if ((top_left_status==0)&&(top_mid_left_status==0)&&(left_status==0)&&( mid_left_status==0)&&(mid_right_status==0)&&(right_status==0)&&(top_mid_right_status==0)&&(top_right_status==0))
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  analogWrite(en1,0);
  analogWrite(en2,0);
  
}
else if ((top_left_status==1)&&(top_mid_left_status==1)&&(left_status==1)&&( mid_left_status==1)&&(mid_right_status==1)&&(right_status==1)&&(top_mid_right_status==1)&&(top_right_status==1))
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  analogWrite(en1,0);
  analogWrite(en2,0);
  
}
else if ((top_l==0)&&(top_left_status==1)&&(top_mid_left_status==1)&&(left_status==1)&&(right_status==1)&&(top_mid_right_status==1)&&(top_right_status==1)&&(top_r==1))
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(en1,Speed+60);
  analogWrite(en2,Speed-30);
}
else if ((top_l==1)&&(top_left_status==1)&&(top_mid_left_status==1)&&(left_status==1)&&(right_status==1)&&(top_mid_right_status==1)&&(top_right_status==1)&&(top_r==0))
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(en1,Speed-30);
  analogWrite(en2,Speed+60);


}
}
