#include <iostream>

using namespace std;

int input;
int players;
int individual;

int team1[4];
int team2[4];
int sum1=0;
int sum2=0;

int digits_entered;

int main(){
    // Getting Players
    cout<<"Enter a 8 digit binary number.";
    cin>>input;
    players=input;
    
    // Input Validator
    while (input > 0){
        individual = input % 10;
        input = input / 10;
        digits_entered+=1;
        
        if (individual > 1){
            cout<<"Please only enter 1 or 0.";
            break;
        }
        
        if (digits_entered>8){
            cout<<"Please enter only 8 digits";
            break;
        }
    }
    // Assigns Teams
    int i=0;
    while (players > 0){
        individual = players %10;
        players = players / 10;
        
        if (i<4){
            team1[i] = individual;
            cout<<team1[i]<<" Has joined team 1"<<endl;
            }
        if(i>=4){
            team2[i-4] = individual;
            cout<<team2[i-4]<<" Has joined team 2"<<endl;
            }
        i++;
    }
    // Tug of war
    for(i=0;i<4;i++){
        sum1= sum1 + team1[i];
        cout<<team1[i]<<" Added for team 1 "<<endl;
        sum2 = sum2 + team2[i];
        cout<<team2[i]<<" Added for team 2"<<endl;
    }
    
    cout<<"The scores are in...."<<endl;
    cout<<"Team 1 got "<< sum1<<endl;
    cout<<"Team 2 got "<< sum2<<endl;
    if (sum1>sum2){
        cout<<"The winner is Team 1!!!!";
    }
    else{
        cout<<"The winner is Team 2!!!!";
    }
    return 0;
}