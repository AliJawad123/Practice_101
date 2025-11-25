#include<iostream>
using namespace std;



class team{

    int teams;
    string team_name;

    public:
    
    int* create_team(int size){

        int* teams = new int[size];

        for(int i=0;i<size;i++){

            cout<<"Enter team number "<<i+1<<" : ";
            cin>>teams[i];
        }

        return  teams;

    }

};

int main(){

    team o1;
    int array[5];
    int *team;
/*  cout<<"Hi"<<endl;*/
    team=o1.create_team(5);

    cout<<team[1]<<endl;



   
    
}