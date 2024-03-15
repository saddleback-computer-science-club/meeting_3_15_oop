//#include "University.hpp"
#include "PublicUni.hpp"

PublicUni::PublicUni():University(){
    //Initialize government funding to 0.0 in the default constructor
    government_funding =0.0;
}

PublicUni:: ~PublicUni(){}

// overloaded constructor
PublicUni:: PublicUni(string name, int num_s, int number_f, float tuition,float funding )
            :University(name,num_s,number_f,tuition){
                this->government_funding = funding;
            }
    

 float PublicUni :: getGovernmentFunding(){
    return government_funding;
 }

 void PublicUni:: setGovernmentFunding(float funding){
    government_funding= funding;
 }
 