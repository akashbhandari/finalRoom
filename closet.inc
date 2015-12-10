#declare Closet = 
	union{
		#declare Box = 
				box{
					<0,0,0>
					<2,3,2>
					texture{
                           pigment{
					image_map {"Wood.jpg"}
					}
					}
				}

object{ 
	Box} //original upper box

object { 
	Box  //left side box
		translate <2.1,0,0>}

object{ 
	Box              // first drawers
		translate <0,-3.1,0>
		scale <2.07,0.2,0>
			texture{
			pigment{
		  	image_map {"woodtexture.jpg"}
			}
			}
	}	

object{ 
	Box        //second drawers
		translate <0,-6.4,0>
		scale <2.07,0.2,0>
			texture{
			pigment{
			image_map {"woodtexture.jpg"}
				}
				}
	}
}

