const int Photo_Trans = A0;



void setup() {
  pinMode(Photo_Trans, INPUT);
  Serial.begin(9600);
  Serial.println("Encoder Software Version 1 30th October");
}

void loop() {

  float Period[3] = {0.0,0.0,0.0};

  for (int i = 0; i < 3; i++){
  Period[i] = pulseIn(Photo_Trans, HIGH); // Returns the amount of time taken to go from 
  // Insert code with circumference specifics
  }
  float Period_Avg = ((Period[1] + Period[2] + Period[3])/2);   // Determine the average speed over three samples

  Serial.print("Average Period: ");
  Serial.println(Period_Avg);
  
}
