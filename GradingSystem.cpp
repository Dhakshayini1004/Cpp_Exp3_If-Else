//PRN : 24070123039  A2
//Name : Dhakshayini Usha R
#include<iostream>
using namespace std;

int main(){
// Calculate student grade    
    float chem,math,phy,c_prog,pyth,percentage;
    cout<<"Enter your Chemistry marks out of 100: ";
    cin>>chem;
    cout<<"Enter your Mathematics marks out of 100: ";
    cin>>math;
    cout<<"Enter your Physics marks out of 100: ";
    cin>>phy;
    cout<<"Enter your C-Programming marks out of 100: ";
    cin>>c_prog;
    cout<<"Enter your Python marks out of 100: ";
    cin>>pyth;
    if (chem<0|math<0|phy<0|c_prog<0|pyth<0|chem>100|math>100|phy>100|c_prog>100|pyth>100){ //Defining boundary conditions
        cout<<"Invalid";
        exit(0);
    }
    percentage = (chem+math+phy+c_prog+pyth)/5;
    if (percentage>=95){
        cout<<"You have O grade :"<<percentage<<"%";
    }
    else if (percentage>=90 && percentage<95){
        cout<<"You have A+ grade :"<<percentage<<"%";
    }
    else if (percentage>80 && percentage<90){
        cout<<"You have A grade :"<<percentage<<"%";
    }
    else if (percentage>=70 && percentage<80){
        cout<<"You have B+ grade :"<<percentage<<"%";
    }
    else if (percentage>=60 && percentage<70){
        cout<<"You have B grade :"<<percentage<<"%";
    }
    else if (percentage>=50 && percentage<60){
        cout<<"You have C grade :"<<percentage<<"%";
    }
    else if (percentage>=40 && percentage<50){
        cout<<"You have D grade :"<<percentage<<"%";
    }
    else{
        cout<<"You have failed";
    }
    return 0;
}
/*Sample Output 
Enter your Chemistry marks out of 100: 100
Enter your Mathematics marks out of 100: 99
Enter your Physics marks out of 100: 98
Enter your C-Programming marks out of 100: 97
Enter your Python marks out of 100: 96
You have O grade :98%
*/






