void langsam(void)
{
  if(power<80)
  {
  power++;
  delay(verzh);
  }
}


void mittel(void)
{
  if(power<95)
  {
  power++;
  delay(verzh);
  }
}


void schnell(void)
{
  if(power<130)// 100 ist Vollgas, nicht höher stellen!
  {
  power++;
  delay(verzh);
  }
}

void herunterfahren(void)
{
  if(power>30)// 30 ist Stillstand, nicht niedriger stellen
  {
  power--;
  delay(verzr);
  }
}
