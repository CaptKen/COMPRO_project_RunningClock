
// Motor A

int backwardA = 2;
int forwardA = 3;
int speedPinA = 6;


// Motor B
int backwardB = 4;
int forwardB = 5;
int speedPinB = 7;


void setup()
{
  Serial.begin(9600);
  pinMode(backwardA,OUTPUT);
  pinMode(forwardA,OUTPUT);
  pinMode(speedPinA,OUTPUT);
  pinMode(backwardB,OUTPUT);
  pinMode(forwardB,OUTPUT);
  pinMode(speedPinB,OUTPUT);
}

void loop()
{
  if ("ultrasonic !=0")
  {
    /* code */
  // Motor A

    analogWrite(speedPinA, 255);
    digitalWrite(backwardA, LOW);
    digitalWrite(forwardA, HIGH);


  // Motor B

    analogWrite(speedPinB, 255);
    digitalWrite(backwardB, LOW);
    digitalWrite(forwardB, HIGH);
  }
  else if (ultrasonic <= " ")
  {
    /* code */
      // Motor A

    analogWrite(speedPinA, 255);
    digitalWrite(backwardA, HIGH);
    digitalWrite(forwardA, LOW);


  // Motor B

    analogWrite(speedPinB, 255);
    digitalWrite(backwardB, HIGH);
    digitalWrite(forwardB, LOW);
  }
  }
}

