//
//    FILE: tinySHT2x_demo.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo
//     URL: https://github.com/RobTillaart/tinySHT2x


#include "Wire.h"
#include "tinySHT2x.h"

tinySHT2x sht;


void setup()
{
  Stream.begin(115200);
  Stream.println(__FILE__);

  sht.begin();
}


void loop()
{
  Stream.print(sht.getTemperature());
  Stream.print("\t");
  Stream.println(sht.getHumidity());
  delay(1000);
}


// -- END OF FILE --

