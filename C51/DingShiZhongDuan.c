#include <reg51.h>
#define BUF_SIZE 20

unsigned char buf[BUF_SIZE];
unsigned char buf_index = 0;
unsigned char complete = 0;

void init()
{
  TMOD &= 0x0F;
  TMOD |= 0x20;

  TH1 = 0xFD;
  TL1 = 0xFD;

  TR1 = 1;

  SCON = 0x50;

  ES = 1;
  EA = 1;
}

void up_byte(unsigned char dat)
{
  SBUF = dat;
  while (TI == 0)
    ;
  TI = 0;
}

void isr() interrupt 4
{
  unsigned char temp;
  if (RI == 1)
  {
    RI = 0;
    temp = SBUF;
    if (complete == 0 && buf_index < BUF_SIZE)
    {
      if (temp == '\r')
      {
        complete = 1;
        buf[buf_index] = '\0';
      }
      else
      {
        buf[buf_index] = temp;
        buf_index++;
      }
    }
    if (TI == 1)
    {
      TI = 0;
    }
  }
}

void main()
{
  unsigned char i;
  init();

  while (1)
  {
    if (complete == 1)
    {
      for (i = 0; i < buf_index; i++)
      {
        up_byte(buf[i]);
      }
      up_byte('\r');
      up_byte('\n');

      buf_index = 0;
      complete = 0;
    }
  }
}
