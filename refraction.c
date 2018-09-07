/* Trent McMorrow
 * Assignment 1 part 1
 * this program promps the user and calculates angle of refraction
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

printf("Enter the angle of incidence in degrees.\n");
  double enteringAngle;
  scanf("%lf",&enteringAngle);

if(enteringAngle==90){
  printf("the angel is perpendicular so there is no refraction.\n");
}
else if (enteringAngle>0 && enteringAngle<180){
  double refractiveIndex;
  printf("enter the refractive index of the material the light is entering\n");
  scanf("%lf",&refractiveIndex);
    if(refractiveIndex<1){
      printf("Error: the refractive index must be equal to or greater then 1\n");
    }
    else{
      double enterAngleRad;
      double pi;
      pi=3.1451926535;
      enterAngleRad=((pi/180)*enteringAngle);
      double refractionAngleRad;
      refractionAngleRad=(asin(sin(enterAngleRad)/refractiveIndex));
      double refractionAngle;
      refractionAngle=((180/pi)*refractionAngleRad);
      printf("Angel of incidence: %0.2lf degrees\n",enteringAngle);
      printf("Index of refraction: %.3lf\n",refractiveIndex);
      printf("Angle of refraction: %.2lf degrees\n",refractionAngle);}
}
else{printf("Error: Invalid angle\n");}
}


// runs
