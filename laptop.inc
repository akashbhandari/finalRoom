#include "colors.inc" 
    
#declare Laptop = union{ 

#declare upperPart = box{
                           <0,1,0>
                           <2,1.06,2>
                                    pigment{ color Black}
                  } 

object{upperPart                 //Lower KeyboardPart
			 translate <0,0,-1>
                 	pigment {
                     		image_map {"keyboard.png"}
                 rotate<90,0,0>
                 scale 1.85
                 translate <1.97,0,84>
                		 }
		}

object{upperPart            	// backside of laptop
                 rotate <90,0,0>
                 translate <0,3,-0.2>
                 scale <0,0,1.2>   
                 	pigment{ //color rgb<0.51,0.43,1>
                      	image_map{"appleLogo.png"}
			 rotate <90,0,180>
			 scale 3
			 translate <-0.5,0.88,0>
	     				}
          }

object{upperPart               //laptopScreen
                 rotate <90,0,0>
                 translate <0,3,-0.82>
                 scale <0,0,4>   
                 	pigment{                       
                     		image_map{jpeg "pokhara.jpg"}  
                 rotate <90,0,90>
                 scale 1.46  
                 scale <0.42,1.15,0>   
                 translate <9.11,-7.19,0>
                 		}
                 scale<0,0,0.2>
                 translate <0,0,0.81> 
          }

}

