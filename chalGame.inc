#include "colors.inc" 
 
#declare chalGame= union{ 

#declare Brick = box{ 
                  <0,0,0>
                  <1,2,2>
                  scale <1.2,1,1>
                  translate<0,1.3,0>
                           texture{ pigment{color rgb<10,0,0>}}
                                              // end of texture #1
                           texture{  pigment{color Green}} 
                  scale 0.4  
                  scale <0,0,2>
                  translate<0,-0.6,0.15>
                  normal  { wrinkles 0.60 scale 0.15}
                  finish  { diffuse 0.92 phong 0.32 
                  ambient 0.1 
                           }   
                }
                              
 #declare Checker = box{
                    <0,0,0>
                    <2,0.2,2>
                           pigment{
                           checker
                           color Red
                           color White
                    scale 0.3
                            }
                  }              
 
 object{Brick}
 
 object{Checker} 
 
 object {Brick
         translate <1.5,0,0>
         }
 }
 
 object{chalGame
 }            