//number guesser
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<< "Enter the range to guess the number :"<<endl;
    int lb,ub;
    while(true)
    {
    cout<<"Lower Bound-> ";
    cin>>lb;
    cout<<"Upper Bound-> ";                  
    cin>>ub;
    if(ub>lb){
        break;
    }else cout<<"***Invalid inputs***"<<"\n"<<"Upper bound must be greater than Lower bound."<<"\n";
    }                               
    int num;                                       
    srand(time(0));                              
    num = (rand()%(ub-lb+1))+lb;                   
    int guess;                                    
    cout<<"Guess the number- "<<endl;              
    cin>>guess;
    int count = 1;
    while(guess!=num)
    {
     ((guess>num)?(cout<<"This is too high."):(cout<<"This is too low."))<<endl;
     cout<<"Try Again- ";
     cin>>guess; 
     count++;
    }
    cout<<"***CONGRATULATIONS***"<<"\n"<<"You guessed the correct number in "<<count<<" attempts.";
    return 0;
}