/*
  final project.c
  http://learn.parallax.com/propeller-c-tutorials 
  
  This project takes the activity bot through a driving course as follows. 
 
  1- drive forward 250 mm turn left 90 degrees -
  2- drive forward 153 mm, turn left 90 degrees - 
  3- drive forward 200 mm, turn right 90 degrees - 
  4- drive forward 175 mm, turn right 90 degrees, -
  5- drive forward 164 mm turn left 90 degrees - 
  6- drive forward 127 mm, turn left 45 degrees -
  7- drive forward 75 mm, turn left 45 degrees, - 
  8- drive forward 138 mm , stop, -
  9- go backwards 138 mm, turn back 45 degrees, -
  10- drive backwards 75mm turn back 45 degrees -
  11- drive back 127 mm turn back 90 degrees, -
  12 - drive forward 153 mm, turn left 90 degrees -
  13- , drive forward 238 mm, stop -
  14 - go backwards semi circle with 330 mm diameter. -
  15 - drive forward 313 mm, turn 45 degrees right, -
  16 - drive forward 173 mm, turn right 45 degrees -
  17- , drive 158 mm forward,  stop - 
  18 -  spin around(360 degrees) 2 times, stop -
  19- ,  go forward 163 mm to finish off the board. 
    
  Olga Sirotinsky
  eet137 week 9 final prject
*/
#include "simpletools.h"                      // Include simple tools
#include "abdrive.h"

int main()                                    // Main function
{
  pause(10000);//wait 10s to start 
  
  //1-From START, drive forward 250 mm , turn left 90degrees.   
    //  250 mm >> ticks = ((250mm)/ 3.25mm/tick) = 76.9 ticks   = 77
        // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.6s
    pause(1600);
    drive_speed(0,0);//stop    
    //Turn 90-degrees left, >> 51 ticks
    drive_speed(-25 ,26);//turn 26(Rwheel)&-25(Lwheel) tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
    
  
  //2- drive forward 153 mm, turn left 90 degrees
    //153 mm >> ticks = (153 mm / 3.25/tick) = 47.076 = 47 ticks
          // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.05s
    pause(1050);
    drive_speed(0,0);//stop     
    //Turn 90-degrees left, 
    drive_speed(-25 ,26);//turn (26(Rwheel)&-25(Lwheel)) tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
     
     
 //3- drive forward 200 mm, turn right 90 degrees 
    //200 mm >> ticks = (200 mm / 3.25/tick) = 61.538 = 62 ticks
          // (left, right)
    drive_speed(32,32); //forward 32tps for 1.45s
    pause(1450);
    drive_speed(0,0);//stop     
    //Turn 90-degrees right, 
    drive_speed(26 ,-25);//turn 26(Rwheel)&-25(Lwheel)tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
    
  
 //4- drive forward 175 mm, turn right 90 degrees, 
       // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.2s
    pause(1200);
    drive_speed(0,0);//stop     
    //Turn 90-degrees right, 
    drive_speed(26 ,-25);//turn 26(Rwheel)&-25(Lwheel)tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
     
    
 //5- drive forward 164 mm turn left 90 degrees 
       // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.1s
    pause(1100);
    drive_speed(0,0);//stop     
    //Turn 90-degrees left, 
    drive_speed(-25 ,26);//turn 26(Rwheel)&-25(Lwheel) tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
     

 //6- drive forward 127 mm, turn left 45 degrees
        // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.2s
    pause(1200);
    drive_speed(0,0);//stop     
    //Turn 45-degrees left,  >>> ticks = (83.1 mm / 3.25 mm/tick) = 25.57 = 26
    drive_speed(-25 ,26);//turn 26(Rwheel)&-25(Lwheel) tps for .5s
    pause(500);
    drive_speed(0,0);//stop
    
    
 //7- drive forward 75 mm, turn left 45 degrees,
        // (left, right)
    drive_speed(32,32); //forward 32 tps for .65s
    pause(650);
    drive_speed(0,0);//stop     
    //Turn 45-degrees left, 
    drive_speed(-25 ,26);//turn 26(Rwheel)&-25(Lwheel) tps for .5s
    pause(500);
    drive_speed(0,0);//stop
     
    
 //8- drive forward 138 mm , then stop,
        // (left, right)
    drive_speed(32,32); //forward 32 tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
    pause(1000);
    
 //9- go backwards 138 mm, turn back 45 degrees,
        // (left, right)
    drive_speed(-32,-32); //backwards 32 tps for .95s
    pause(950);
    drive_speed(0,0);//stop    
    //Turn 45-degrees right, 
    drive_speed(26 ,-25);//turn 26(Rwheel)&-25(Lwheel) tps for .5s
    pause(500);
    drive_speed(0,0);//stop
     
     
    
 //10- drive backwards 75mm turn back 45 degrees
     // (left, right)
    drive_speed(-32,-32); //bsckwards 32 tps for .65s
    pause(650);
    drive_speed(0,0);//stop    
    //Turn 45-degrees right, 
    drive_speed(26 ,-25);//turn 26(Rwheel)&-25(Lwheel) tps for .5s
    pause(500);
    drive_speed(0,0);//stop
     pause(200);
     
    
 //11 - drive back 127 mm turn back 90 degrees,
        // (left, right)
    drive_speed(-32,-32); //backward 32 tps for 1.2s
    pause(1200);
    drive_speed(0,0);//stop     
    //Turn 90-degrees right, 
    drive_speed(26 ,-25);//turn 26(Rwheel)&-25(Lwheel) tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
    
 
 //12 - drive forward 153 mm, turn left 90 degrees
        // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.4s
    pause(1400);
    drive_speed(0,0);//stop     
    //Turn 90-degrees left, 
    drive_speed(-25 ,26);//turn 26(Rwheel)&-25(Lwheel) tps for 1s
    pause(1000);
    drive_speed(0,0);//stop
     
    
 //13 -  drive forward 238 mm, stop
        // (left, right)
    drive_speed(32,32); //forward 32tps for 1.8s
    pause(1800);
    drive_speed(0,0);//stop
    pause(1000);
    
 //14 - go backwards semi circle with 330 mm diameter. 
    drive_ramp(-33, -14);//drive in a semi circle(r=165) for 5.3 seconds
    pause(5300);
    drive_ramp(0,0);//stop     
    
 //15- drive forward 313 mm, turn 45 degrees right, 
    drive_speed(32,32); //forward 32tps for 2.5s
    pause(2500);
    drive_speed(0,0);//stop
    //turn 45-degrees right
    drive_speed(26 ,-25);//turn 26(Rwheel)&-25(Lwheel) tps for .5s
    pause(500);
    drive_speed(0,0);//stop
    
 //16 - drive forward 173 mm, turn right 45 degrees
      // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.5s
    pause(1500);
    drive_speed(0,0);//stop
    //turn right 45 degrees
    drive_speed(26 ,-25);//turn 26(Rwheel)&-25(Lwheel) tps for .53s
    pause(530);
    drive_speed(0,0);//stop
    
 // 17- , drive 158 mm forward,  stop
      // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.2s
    pause(1200);
    drive_speed(0,0);//stop
    pause(1000); 
    
 // 18 -  spin around(360 degrees) 2 times ,then stop
    //Turn 360-degrees left twice plus add 90degree turn, 
          // (left, right)
    drive_speed(-25 ,26);//turn 26(Rwheel)&-25(Lwheel) tps for 9s
    pause(9000);
    drive_speed(0,0);//stop
    pause(1000);
    
 //19- ,  go forward 163 mm to finish off the board. 
        // (left, right)
    drive_speed(32,32); //forward 32 tps for 1.4s
    pause(1400);
    drive_speed(0,0);//stop
   
        
 
}//end program
