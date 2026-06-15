#include <reg51.h>

sbit change_btn = P3 ^ 0;

void delay(unsigned int time)
{
  unsigned int i, j;
  for (i = 0; i < time; i++)
  {
    for (j = 0; j < 120; j++)
    {
    }
  }
}

unsigned char crol(unsigned char c)
{
  return (c << 1) | (c >> 7);
}

unsigned char cror(unsigned char c)
{
  return (c << 7) | (c >> 1);
}

void main()
{
  unsigned char led;
  unsigned char i;

  while (1)
  {

    led = 0xFE;
    bit change_flog = 0;

    change_btn = 1;

    while (1)
    {
      P1 = led;
      delay(100);

      if (change_btn == 0)
      {
        delay(20);
        if (change_btn == 0)
        {
          change_flog = !change_flog;
          while (change_btn == 0)
          {
          }
        } 
      }

      if (change_flog == 0)
      {
        led = crol(led);
      }
      else
      {
        led = cror(led);
      }
    }
  }
