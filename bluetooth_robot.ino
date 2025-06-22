#define in1 7
#define in2 6
#define in3 5
#define in4 4

char data;

void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == 'F') { // Forward
      digitalWrite(in1, HIGH); digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH); digitalWrite(in4, LOW);
    }
    else if (data == 'B') { // Backward
      digitalWrite(in1, LOW); digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW); digitalWrite(in4, HIGH);
    }
    else if (data == 'L') { // Left
      digitalWrite(in1, LOW); digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH); digitalWrite(in4, LOW);
    }
    else if (data == 'R') { // Right
      digitalWrite(in1, HIGH); digitalWrite(in2, LOW);
      digitalWrite(in3, LOW); digitalWrite(in4, HIGH);
    }
    else if (data == 'S') { // Stop
      digitalWrite(in1, LOW); digitalWrite(in2, LOW);
      digitalWrite(in3, LOW); digitalWrite(in4, LOW);
    }
  }
}
