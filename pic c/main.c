#include <main.h>
int seg1=0, seg2=0;

void main()
{
   while(true)
   {
      output_C(seg1);
      output_B(seg2);
      delay_ms(200);
      seg1=seg1+1;
      if (seg1>=10)
      {
         seg1=0;
         seg2=seg2+1;
      }
      if (seg2>=10)
      {
         seg2=0;
      }
   }
}
