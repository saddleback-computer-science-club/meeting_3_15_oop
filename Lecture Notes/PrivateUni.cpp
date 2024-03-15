#include "PrivateUni.hpp"

PrivateUni::PrivateUni():University(){
        donation =0.0;   
}

PrivateUni::PrivateUni(string name, int num_s, int number_f, float tuition,float donation )
            : University(name,num_s,number_f,tuition){
                this->donation = donation;
            }
PrivateUni::~PrivateUni(){}

float PrivateUni::getDonation(){
    return donation;
}

void PrivateUni::setDonation(float d){
    donation = d;
}
