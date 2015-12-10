#declare bookCollection = union {

#declare Object = mesh {
    triangle {
    <0,0,0>,
    <-2,2,0>,
    <0,2,0>   
    }      
    
    triangle {  
    <0,0,0>,
    <0,2,0>,
    <2,2,0>
    }
    
    triangle{
    <-2,2,0>,
    <-2,4,0>,
    <0,4,0>
    }    
    triangle{
    <-2,2,0>,
    <0,4,0>,
    <0,2,0>    
    }
    triangle{
    <0,2,0>,
    <0,4,0>,
    <2,2,0>    
    } 
   
    triangle{
    <2,2,0>,
    <0,4,0>,
    <2,4,0>
    }
    triangle{ 
    <-2,4,0>,
    <-2,5,0>,
    <0,5,0>
    }
    triangle{
    <-2,4,0>,
    <0,5,0>,
    <0,4,0>
    }
    triangle{ 
    <0,4,0>,
    <0,5,0>,
    <2,5,0>
    }
    triangle{ 
    <0,4,0>,
    <2,5,0>,
    <2,4,0>
    }  
    }
    
   object{ 
         Object
                  pigment{color rgb <1,0.19,0.19>} 
    }
   
   union{
         #declare Index=0;
                  #while (Index<600)        
                           object{
                             Object
                                    rotate<0,Index,0>
  }
         #declare Index=Index+50;
         #end
                  texture{
                            pigment{
                                     rgb<.38,.72,1>
                                }
                    }
  }
  }  