#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
float sizeimage = w * h * 8 ; 
   
   // Convert based on the unit
   if (unit == "bt") {
       return (sizeimage ) ; // Size in bits
   } else if (unit == "ko") {
      sizeimage = sizeimage /1024.0 ;
         return (sizeimage ); // Size in kilobits
   } else if (unit == "mo") {
      sizeimage  = sizeimage / (1024.0 * 1024.0);
       return(sizeimage); // Size in megabits
   } else if (unit == "go") {
      sizeimage = sizeimage / (1024.0 * 1024.0 * 1024.0);
       return (sizeimage); // Size in gigabits
   } else {
       // Invalid unit, return 0
       return 0;
       }
   // YOUR CODE HERE - END
   return 0;
}
