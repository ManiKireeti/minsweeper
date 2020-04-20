//
//  main.cpp
//  minsweeper
//
//  Created by Mani Kireeti on 21/03/20.
//  Copyright © 2020 Mani Kireeti. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int A[10][10];
char B[10][10];

void print(int N){
    if(N==7){
        for(int i=1;i<N+1;i++){
            cout<<"-----------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(B[i][j]=='F'){
                    cout<<" F " <<"|";
                }
                else if(A[i][j]<0){
                    if(A[i][j]==-100){
                        cout<<" "<<"0"<<" "<<"|";
                    }
                    else{
                        cout<<" "<<-A[i][j]<<" "<<"|";
                    }
                    
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-----------------------------"<<endl;
    }
    else if(N==6){
        for(int i=1;i<N+1;i++){
            cout<<"-------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(B[i][j]=='F'){
                    cout<<" F " <<"|";
                }
                else if(A[i][j]<0){
                    if(A[i][j]==-100){
                        cout<<" "<<"0"<<" "<<"|";
                    }
                    else{
                        cout<<" "<<-A[i][j]<<" "<<"|";
                    }
                }
                else if(A[i][j]==100){
                    cout<<" "<<"0"<<" "<<"|";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-------------------------"<<endl;
    }
    else if(N==8){
        for(int i=1;i<N+1;i++){
            cout<<"---------------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(B[i][j]=='F'){
                    cout<<" F " <<"|";
                }
                else if(A[i][j]<0){
                    if(A[i][j]==-100){
                        cout<<" "<<"0"<<" "<<"|";
                    }
                    else{
                        cout<<" "<<-A[i][j]<<" "<<"|";
                    }
                }
                else if(A[i][j]==100){
                    cout<<" "<<"0"<<" "<<"|";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"---------------------------------"<<endl;
    }
    else if(N==9){
        for(int i=1;i<N+1;i++){
            cout<<"-------------------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(B[i][j]=='F'){
                    cout<<" F " <<"|";
                }
                else if(A[i][j]<0){
                    if(A[i][j]==-100){
                        cout<<" "<<"0"<<" "<<"|";
                    }
                    else{
                        cout<<" "<<-A[i][j]<<" "<<"|";
                    }
                }
                else if(A[i][j]==100){
                    cout<<" "<<"0"<<" "<<"|";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-------------------------------------"<<endl;
    }
    else {
        for(int i=1;i<N+1;i++){
            cout<<"-----------------------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(B[i][j]=='F'){
                    cout<<" F " <<"|";
                }
                else if(A[i][j]<0){
                    if(A[i][j]==-100){
                        cout<<" "<<"0"<<" "<<"|";
                    }
                    else{
                        cout<<" "<<-A[i][j]<<" "<<"|";
                    }
                }
                else if(A[i][j]==100){
                    cout<<" "<<"0"<<" "<<"|";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-----------------------------------------"<<endl;
    }
}

void printend(int N){

     if(N==7){
        for(int i=1;i<N+1;i++){
            cout<<"-----------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(A[i][j]>=10){
                    cout<<" * |";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-----------------------------"<<endl;
    }
    else if(N==6){
        for(int i=1;i<N+1;i++){
            cout<<"-------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(A[i][j]>=10){
                    cout<<" * |";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-------------------------"<<endl;
    }
    else if(N==8){
        for(int i=1;i<N+1;i++){
            cout<<"---------------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(A[i][j]>=10){
                    cout<<" * |";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"---------------------------------"<<endl;
    }
    else if(N==9){
        for(int i=1;i<N+1;i++){
            cout<<"-------------------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
                if(A[i][j]>=10){
                    cout<<" * |";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-------------------------------------"<<endl;
    }
    else {
        for(int i=1;i<N+1;i++){
            cout<<"-----------------------------------------"<<endl;
            cout<<"|";
            for(int j=1;j<N+1;j++){
               if(A[i][j]>=10){
                    cout<<" * |";
                }
                else{
                    cout<<"   "<<"|";
                }
            }
            cout<<endl;
        }
        cout<<"-----------------------------------------"<<endl;
    }
}

int flag=0;
void fun(int a,int b){
    
    if(flag<3){
    if(A[a][b+1]<10 && A[a][b+1]>0){A[a][b+1]=-A[a][b+1];flag++;fun(a,b+1);}
    if(A[a][b-1]<10 && A[a][b-1]>0){A[a][b-1]=-A[a][b-1];flag++;fun(a,b-1);}
    if(A[a-1][b+1]<10 && A[a-1][b+1]>0){A[a-1][b+1]=-A[a-1][b+1];flag++;fun(a-1,b+1);}
    if(A[a-1][b]<10 && A[a-1][b]>0){A[a-1][b]=-A[a-1][b];flag++;fun(a-1,b);}
    if(A[a-1][b-1]<10 && A[a-1][b-1]>0){A[a-1][b-1]=-A[a-1][b-1];flag++;fun(a-1,b-1);}
    if(A[a+1][b+1]<10 && A[a+1][b+1]>0){A[a+1][b+1]=-A[a+1][b+1];flag++;fun(a+1,b+1);}
    if(A[a+1][b-1]<10 && A[a+1][b-1]>0){A[a+1][b-1]=-A[a+1][b-1];flag++;fun(a+1,b-1);}
    if(A[a+1][b]<10 && A[a+1][b]>0){A[a+1][b]=-A[a+1][b];flag++;fun(a+1,b);}
        
    }
}
 


void game(int N){
    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
            A[i][j]=0;
        }
    }
    srand(static_cast<unsigned int>(time(0)));
    int bomb=N;
    while(bomb>0){
        
        int i=rand()%N+1;
        int j=rand()%N+1;
        A[i][j]=10;
        bomb--;
    }
    
    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
            if(A[i][j]>=10){
                if(i==1 || i==N ||j==1 || j==N){
                    if(i==1 && j==1){
                        A[i+1][j]++;
                        A[i][j+1]++;
                        A[i+1][j+1]++;
                    }
                    if(i==N && j==N){
                        A[i-1][j]++;
                        A[i-1][j-1]++;
                        A[i][j-1]++;
                    }
                    if(i==1 && j!=N && j!=1){
                        A[i+1][j]++;
                        A[i][j+1]++;
                        A[i][j-1]++;
                        A[i+1][j-1]++;
                        A[i+1][j+1]++;
                    }
                    if(i!=N && j==1 && i!=1){
                        A[i-1][j]++;
                        A[i+1][j]++;
                        A[i][j+1]++;
                        A[i-1][j+1]++;
                        A[i+1][j+1]++;
                    }
                    if(i==N && j==1){
                        A[i-1][j]++;
                        A[i][j+1]++;
                        A[i-1][j+1]++;
                    }
                    if(i==N && j!=N && j!=1){
                        A[i][j-1]++;
                        A[i][j+1]++;
                        A[i-1][j]++;
                        A[i-1][j-1]++;
                        A[i-1][j+1]++;
                    }
                    if(i==1 && j==N){
                        A[i][j-1]++;
                        A[i+1][j-1]++;
                        A[i+1][j]++;
                    }
                    if(i!=N && j==N && i!=1){
                        A[i-1][j]++;
                        A[i+1][j]++;
                        A[i][j-1]++;
                        A[i-1][j-1]++;
                        A[i+1][j-1]++;
                    }
                }
                else{
                    A[i-1][j]++;
                    A[i-1][j-1]++;
                    A[i][j-1]++;
                    A[i+1][j]++;
                    A[i+1][j+1]++;
                    A[i][j+1]++;
                    A[i-1][j+1]++;
                    A[i+1][j-1]++;
                }
            }
        }
    }
        
    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
            B[i][j]='P';
        }
    }
    
    int bomb1=0;
    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
            if(A[i][j]>=10){bomb1++;}
        }
    }
    
    print(N);
    int count3=0;

    while (true) {


            int count=0;
            for(int i=1;i<N+1;i++){
                for(int j=1;j<N+1;j++){
                    if(A[i][j]>=10){
                        if(B[i][j]=='F'){
                            count++;
                        }
                    }
                }
            }
            if(count==bomb1){
                cout<<"You have WON the game"<<endl;
                cout<<"Want to play another one???"<<endl;
                cout<<"Yes(Y) or NO(N)"<<endl;
                char a;
                cin>>a;
                if(a=='y' || a=='Y'){
                    system("clear");
                    game(N);
                }
                if(a=='N' ||a=='n'){
                    return;
                }
            }
            
        int count2=0;
        for(int i=1;i<N+1;i++){
            for(int j=1;j<N+1;j++){
                if(B[i][j]=='F'){
                    count2++;
                }
            }
        }
        if(count2>=N){
            cout<<"Warning: The number of flags are more than bombs"<<endl;
        }
        
        
        cout<<"Want to flag(F) or open(O) or remove flag(R) or quit(Q)?"<<endl;
        char x;
        cin>>x;
        if(x=='F'  || x=='f' || x=='R'  || x=='r' ||x=='o' || x=='O' || x=='q'||x=='Q' ){
            if(x=='q' || x=='Q'){
                return;
                
            }
        if(x=='F'  || x=='f'){
            cout<<"Enter the coordinates:"<<endl;
            int a,b;
            cin>> a >> b;
            if(a>N || a<1 ||b<0 ||b>N){
                cout<<"Invalid input"<<endl;
                continue;
            }
            else{
                B[a][b]='F';
                system("clear");
                print(N);
            }
        }
        if(x=='R'  || x=='r'){
            cout<<"Enter the coordinates:"<<endl;
            int a,b;
            cin>> a >> b;
            if(a>N || a<1 ||b<0 ||b>N){
                cout<<"Invalid input"<<endl;
                continue;
            }
            else{
                B[a][b]='P';
                system("clear");
                print(N);
            }
        }
        if(x=='o' || x=='O'){
            cout<<"Enter the coordinates:"<<endl;
            int a,b;
            cin>> a >> b;
            if(a>N || a<1 ||b<0 ||b>N){
                cout<<"Invalid input"<<endl;
                continue;
            }
            else{
                if(A[a][b]>=10){
                    if(count3==0){
                        system("clear");
                        cout<<"Note: Restarting the game since the first selection is a bomb"<<endl;
                        game(N);
                        return;
                    }
                    system("clear");
                    printend(N);
                    cout<<"Sorry You Lost the game"<<endl;
                    cout<<"Want to play another one???"<<endl;
                    cout<<"Yes(Y) or NO(N)"<<endl;
                    char a;
                    cin>>a;
                    if(a=='y' || a=='Y'){
                        system("clear");
                        game(N);
                    }
                    if(a=='N' ||a=='n'){
                        return;
                    }
                }
                else{
                
                        int x=A[a][b];
                        if(x<0) {
                            system("clear");
                            print(N);
                        }
                        else if(x==0){
                            A[a][b]=-100;
                            system("clear");
                            print(N);
                        }
                        else{
                            A[a][b]=-x;
                            flag=0;
                            fun(a,b);
                            system("clear");
                            print(N);
                        }
                    
                 }
            }
     
        }
        }
        count3++;
    }
    
    
    
    
}

int main() {
    system("clear");
    cout<<"Hello Guys"<<endl;
    char c;
    cout<<"Press P to play and Q to quit"<<endl;
    cin >>c;
    if(c=='Q' || c=='q'){
        return 0;
    }
    if(c=='P' ||c=='p'){

        cout<<"Select the size of the board"<<endl;
        cout<<"Press 1 for 6X6 board"<<endl;
        cout<<"Press 2 for 7X7 board"<<endl;
        cout<<"Press 3 for 8X8 board"<<endl;
        cout<<"Press 4 for 9X9 board"<<endl;
        cout<<"Press 5 for 10X10 board"<<endl;
        int i;
        cin>>i;
        system("clear");
        if(i==1) game(6);
        if(i==2) game(7);
        if(i==3) game(8);
        if(i==4) game(9);
        if(i==5) game(10);
   }
    
    return 0;
}
