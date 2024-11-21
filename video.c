#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
 // Taille par image pour chaque type (en bits)
    float sizeColoredFrame = w * h * 24 ;  // Couleur (24 bits par pixel)
    float sizegreyFrame = w * h * 8 ;        // Noir et blanc (8 bits par pixel)

    // Nombre total d'images pour chaque section
    int totalColoredFrames = fps * durationMovie; 
    int totalgreyFrames = fps * durationCredits;

    // Taille totale de chaque section (en bits)
    float totalColoredSize = sizeColoredFrame * totalColoredFrames;
    float totalgreySize = sizegreyFrame * totalgreyFrames;

    // Taille totale de la vidéo (en bits)
    float SizeVideo = totalColoredSize + totalgreySize;

    // Conversion selon l'unité spécifiée
    if (strcmp(unit, "bt") == 0) {
        return SizeVideo; // Taille en bits
    } else if (strcmp(unit, "ko") == 0) {
        return SizeVideo / 1024.0; // Taille en kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return SizeVideo / (1024.0 * 1024.0); // Taille en mégabits
    } else if (strcmp(unit, "go") == 0) {
        return SizeVideo / (1024.0 * 1024.0 * 1024.0); // Taille en gigabits
    } else {
        // Unité invalide
        return 0;
    }

   // YOUR CODE HERE - END
   return 0;
}
