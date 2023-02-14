int g = 10;
int r = 11;
int b = 12;
int button = 13;

int count = 0;
void setup()
{
  pinMode(g, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = digitalRead(button);
  Serial.print(val);
  Serial.print("   ");
  if (val == 0) {
    count = count + 1;
    delay(250);
  }
  switch (count) {
    case 1:
      digitalWrite(r, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(b, LOW);
      break;

    case 2:
      digitalWrite(g, HIGH);
      digitalWrite(r, LOW);
      digitalWrite(b, LOW);
      break;
    case 3:
      digitalWrite(b, HIGH);
      digitalWrite(r, LOW);
      digitalWrite(g, LOW);
      break;
    case 4:
      digitalWrite(g, HIGH);
      digitalWrite(r, HIGH);
      digitalWrite(b, LOW);
      break;
    case 5:
      digitalWrite(b, HIGH);
      digitalWrite(r, HIGH);
      digitalWrite(g, LOW);
      break;
    case 6:
      digitalWrite(b, HIGH);
      digitalWrite(r, LOW);
      digitalWrite(g, HIGH);
      break;
    case 7:
      digitalWrite(r, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(b, HIGH);
      break;
    case 8:
      digitalWrite(r, LOW);
      digitalWrite(g, LOW);
      digitalWrite(b, LOW);
      count = 0;
      break;
  }
  Serial.print(count);
  Serial.println();
}
