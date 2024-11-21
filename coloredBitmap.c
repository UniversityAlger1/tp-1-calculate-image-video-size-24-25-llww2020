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
float sizeimage = w * h * 24 ; 
   
   // Convert based on the unit
   if (strcmp(unit, "bt") == 0) {
       return (sizeimage ) ; // Size in bits
   } else if (strcmp(unit, "ko") == 0) {
      sizeimage = sizeimage /1024.0 ;
         return (sizeimage ); // Size in kilobits
   } else if (strcmp(unit, "mo") == 0) {
      sizeimage  = sizeimage / (1024.0 * 1024.0);
       return(sizeimage); // Size in megabits
   } else if (strcmp(unit, "go") == 0) {
      sizeimage = sizeimage / (1024.0 * 1024.0 * 1024.0);
       return (sizeimage); // Size in gigabits
   } else {
       // Invalid unit, return 0
       return 0;
       }
   // YOUR CODE HERE - END
   return 0;
}
