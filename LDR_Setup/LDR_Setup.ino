int val[12];
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  for (int i = 0; i < 12; i++)
  {
    val[i] = analogRead(i);
    Serial.print(val[i]);
    Serial.print("  ");
  }
  Serial.println();
  delay(10);
}