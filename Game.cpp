#include<bits/stdc++.h>
using namespace std;


class hell{
    public:
    int i,j,x,y,z;
    char n,m,k;
    void structure(){
        for(i=1;i<=6;i++){
            for(j=1;j<=6;j++){
                if(i==1 && j==j || i==i && j==1 || i==6 && j==j){
                    cout<<"*";
                }
                else if(j==6){
                    cout<<"*";
                }
                else if((j==3 && (i==3 || i==4 || i==5)) || (j==4 && (i==3 || i==4 || i==5))){
                    cout<<"*";
                }
                else if(i==5 && j==2){
                    cout<<"@";
                }
                else if(i==5 && j==5){
                    cout<<"%";
                }
                else 
                cout<<" ";
            }   
            cout<<endl;
        }
    }

    void move(){
        for(x=4;x>=2;x--){
            cout<<endl;
            cin>>n;
        if(n == 'w' || n == 'W'){
            system("cls");
            for(i=1;i<=6;i++){
            for(j=1;j<=6;j++){
                if(i==1 && j==j || i==i && j==1 || i==6 && j==j){
                    cout<<"*";
                }
                else if(j==6){
                    cout<<"*";
                }
                else if((j==3 && (i==3 || i==4 || i==5)) || (j==4 && (i==3 || i==4 || i==5))){
                    cout<<"*";
                }
                else if(i==x && j==2){
                    cout<<"@";
                }
                else if(i==5 && j==5){
                    cout<<"%";
                }
                else 
                cout<<" ";
            }   
            cout<<endl;
        }
        }
        else 
        cout<<"Invalid move"<<endl;
        }
    }

    void move2(){
        for(y=3;y<=5;y++){
            cin>>m;
            if(m == 'd' || m == 'D'){
                system("cls");
                for(i=1;i<=6;i++){
                for(j=1;j<=6;j++){
                if(i==1 && j==j || i==i && j==1 || i==6 && j==j){
                    cout<<"*";
                }
                else if(j==6){
                    cout<<"*";
                }
                else if((j==3 && (i==3 || i==4 || i==5)) || (j==4 && (i==3 || i==4 || i==5))){
                    cout<<"*";
                }
                else if(i==2 && j==y){
                    cout<<"@";
                }
                else if(i==5 && j==5){
                    cout<<"%";
                }
                else 
                cout<<" ";
            }   
            cout<<endl;
            }
            }
            else 
            cout<<"Invalid move"<<endl;
        }
    }

    void move3(){
        for(z=3;z<=5;z++){
            cin>>k;
            if(k == 's' || k == 'S'){
                system("cls");
                for(i=1;i<=6;i++){
                for(j=1;j<=6;j++){
                if(i==1 && j==j || i==i && j==1 || i==6 && j==j){
                    cout<<"*";
                }
                else if(j==6){
                    cout<<"*";
                }
                else if((j==3 && (i==3 || i==4 || i==5)) || (j==4 && (i==3 || i==4 || i==5))){
                    cout<<"*";
                }
                else if(i==z && j==5){
                    cout<<"@";
                }
                else if(i==5 && j==5){
                    cout<<"%";
                }
                else 
                cout<<" ";
            }   
            cout<<endl;
            }
        }
        else
        cout<<"Invalid move"<<endl;
    }
    }
};

int main(){
    cout<<"                                                                                           S T A R T   G A M E"<<endl;
    cout<<"                                                                                                   Enter"<<endl;
    cout<<"                                                                                                   QUIT"<<endl;
    if (cin.get() == '\n')
    {
        system("cls");
        cout<<"Move @ to % to win the game"<<endl;
        cout<<endl<<endl<<"W = up"<<endl<<"A = left"<<endl<<"D = right"<<endl<<"S = down"<<endl<<endl;
        hell object;
        object.structure();
        object.move();
        object.move2();
        object.move3();
        system("cls");
        cout<<"                                                                                         THANK YOU FOR PLAYING";
    }
    return 0;
}
