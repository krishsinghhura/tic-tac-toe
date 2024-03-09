#include <iostream>
using namespace std;

void format(){
    cout<<"0,0 "<<" | "<<" 0,1 "<<" | "<<" 0,2 "<<endl;
    cout<<"--------------------"<<endl;
    cout<<"1,0 "<<" | "<<" 1,1 "<<" | "<<" 1,2 "<<endl;
    cout<<"--------------------"<<endl;
    cout<<"2,0 "<<" | "<<" 2,1 "<<" | "<<" 2,2 "<<endl;
    cout<<" "<<endl;
    cout<<"Here is the format of the game Tic-Tac-Toe"<<endl;
    cout<<" "<<endl;
    cout<<"Rules:-"<<endl;
    cout<<"1. Enter row and column as given above to play your chance"<<endl;
    cout<<" "<<endl;
    cout<<"2. If you enter any wrong move then the game will be terminated(Enter between 0-2)"<<endl;
    cout<<" "<<endl;
    cout<<"3. The player will win when he/she connects the same sign Diagonally or Vertically or Horizontaally"<<endl;
}

void play() {
    int arr[3][3]={0,0,0,0,0,0,0,0,0};
    int r1,c1;
    cout<<endl;
    cout<<endl;
    cout<<"Player X sign= 3"<<endl;
    cout<<"Player Y sign= 6"<<endl;
    cout<<endl;
    cout<<"Player X's turn"<<endl;
    cout<<"Enter row=";
    cin>>r1;
    cout<<"Enter column=";
    cin>>c1;
    arr[r1][c1]=3;
    if (r1>2 || r1<0){
        cout<<"Invalid move, read the rules properly!"; exit(0);
    } else if (c1>2 || c1<0) {
        cout<<"Invalid move, read the rules properly!";
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
            cout<<arr[i][j]<<"|";
            }
        cout<<endl;
        }  
    }


    int r2,c2;
    cout<<endl;
    cout<<endl;
    cout<<"Player Y's turn"<<endl;
    cout<<"Enter row=";
    cin>>r2;
    cout<<"Enter column=";
    cin>>c2;
    arr[r2][c2]=6;
    if (r2>2 || r2<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c2>2 || c2<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
         cout<<endl;
        }
    }
    
    
    int r3,c3;
    cout<<endl;
    cout<<endl;
    cout<<"Player X's turn"<<endl;
    cout<<"Enter row=";
    cin>>r3;
    cout<<"Enter column=";
    cin>>c3;
    arr[r3][c3]=3;
    if (r3>2 || r3<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c3>2 || c3<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
            cout<<endl;
        }
    }
    
    
    int r4,c4;
    cout<<endl;
    cout<<endl;
    cout<<"Player Y's turn"<<endl;
    cout<<"Enter row=";
    cin>>r4;
    cout<<"Enter column=";
    cin>>c4;
    arr[r4][c4]=6;
    if (r4>2 || r4<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c4>2 || c4<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
            cout<<endl;
        }
    }
    
    
    int r5,c5;
    cout<<endl;
    cout<<endl;
    cout<<"Player X's turn"<<endl;
    cout<<"Enter row=";
    cin>>r5;
    cout<<"Enter column=";
    cin>>c5;
    arr[r5][c5]=3;
    if (r5>2 || r5<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c5>2 || c5<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
            cout<<endl;
        }
    }

    if (arr[0][0]==3 && arr[0][1]==3 && arr[0][2]==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[1][0]==3 && arr[1][1]==3 && arr[1][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[2][0]==3 && arr[2][1]==3 && arr[2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][0]==3 && arr[2][0] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][1]==3 && arr[1][1]==3 && arr [2][1] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][2]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][1]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][1]==3 && arr[2][0]==3){ 
        cout<<"Player X wins"; 
        exit(0); 
    }
        
    int r6,c6;
    cout<<endl;
    cout<<endl;
    cout<<"Player Y's turn"<<endl;
    cout<<"Enter row=";
    cin>>r6;
    cout<<"Enter column=";
    cin>>c6;
    arr[r6][c6]=6;
    if (r6>2 || r6<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c6>2 || c6<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
            cout<<endl;
        }
    }


    if (arr[0][0]==6 && arr[0][1]==6 && arr[0][2]==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[1][0]==6 && arr[1][1]==6 && arr[1][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[2][0]==6 && arr[2][1]==6 && arr[2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][0]==6 && arr [2][0] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][1]==6 && arr[1][1]==6 && arr [2][1] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][2]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][1]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][1]==6 && arr[2][0]==6){ 
        cout<<"Player Y wins"; 
        exit(0); 
    }



    if (arr[0][0]==3 && arr[0][1]==3 && arr[0][2]==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[1][0]==3 && arr[1][1]==3 && arr[1][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[2][0]==3 && arr[2][1]==3 && arr[2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][0]==3 && arr [2][0] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][1]==3 && arr[1][1]==3 && arr [2][1] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][2]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][1]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][1]==3 && arr[2][0]==3){ 
        cout<<"Player X wins"; 
        exit(0); 
    }
    
    
    int r7,c7;
    cout<<endl;
    cout<<endl;
    cout<<"Player X's turn"<<endl;
    cout<<"Enter row=";
    cin>>r7;
    cout<<"Enter column=";
    cin>>c7;
    arr[r7][c7]=3;
    if (r7>2 || r7<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c7>2 || c7<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
            cout<<endl;
        }
    }
    
        if (arr[0][0]==6 && arr[0][1]==6 && arr[0][2]==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[1][0]==6 && arr[1][1]==6 && arr[1][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[2][0]==6 && arr[2][1]==6 && arr[2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][0]==6 && arr [2][0] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][1]==6 && arr[1][1]==6 && arr [2][1] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][2]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][1]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][1]==6 && arr[2][0]==6){ 
        cout<<"Player Y wins"; 
        exit(0); 
    }



    if (arr[0][0]==3 && arr[0][1]==3 && arr[0][2]==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[1][0]==3 && arr[1][1]==3 && arr[1][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[2][0]==3 && arr[2][1]==3 && arr[2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][0]==3 && arr [2][0] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][1]==3 && arr[1][1]==3 && arr [2][1] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][2]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][1]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][1]==3 && arr[2][0]==3){ 
        cout<<"Player X wins"; 
        exit(0); 
    }
    
    int r8,c8;
    cout<<endl;
    cout<<endl;
    cout<<"Player Y's turn"<<endl;
    cout<<"Enter row=";
    cin>>r8;
    cout<<"Enter column=";
    cin>>c8;
    arr[r8][c8]=6;
    if (r8>2 || r8<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c8>2 || c8<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
            cout<<endl;
        }
    }
    
        if (arr[0][0]==6 && arr[0][1]==6 && arr[0][2]==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[1][0]==6 && arr[1][1]==6 && arr[1][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[2][0]==6 && arr[2][1]==6 && arr[2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][0]==6 && arr [2][0] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][1]==6 && arr[1][1]==6 && arr [2][1] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][2]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][1]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][1]==6 && arr[2][0]==6){ 
        cout<<"Player Y wins"; 
        exit(0); 
    }



    if (arr[0][0]==3 && arr[0][1]==3 && arr[0][2]==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[1][0]==3 && arr[1][1]==3 && arr[1][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[2][0]==3 && arr[2][1]==3 && arr[2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][0]==3 && arr [2][0] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][1]==3 && arr[1][1]==3 && arr [2][1] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][2]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][1]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][1]==3 && arr[2][0]==3){ 
        cout<<"Player X wins"; 
        exit(0); 
    }
    
    int r9,c9;
    cout<<endl;
    cout<<endl;
    cout<<"Player X's turn"<<endl;
    cout<<"Enter row=";
    cin>>r9;
    cout<<"Enter column=";
    cin>>c9;
    arr[r9][c9]=3;
    if (r9>2 || r9<0){
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else if (c9>2 || c9<0) {
        cout<<"Invalid move, read the rules properly!";
        exit(0);
    } else {
        for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<arr[i][j]<<"|";
            }
            cout<<endl;
        }
    }
    
        if (arr[0][0]==6 && arr[0][1]==6 && arr[0][2]==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[1][0]==6 && arr[1][1]==6 && arr[1][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[2][0]==6 && arr[2][1]==6 && arr[2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][0]==6 && arr [2][0] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][1]==6 && arr[1][1]==6 && arr [2][1] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][2]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][0]==6 && arr[1][1]==6 && arr [2][2] ==6) { 
        cout<<"Player Y wins"; 
        exit(0);
    } else if (arr[0][2]==6 && arr[1][1]==6 && arr[2][0]==6){ 
        cout<<"Player Y wins"; 
        exit(0); 
    }



    if (arr[0][0]==3 && arr[0][1]==3 && arr[0][2]==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[1][0]==3 && arr[1][1]==3 && arr[1][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[2][0]==3 && arr[2][1]==3 && arr[2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][0]==3 && arr [2][0] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][1]==3 && arr[1][1]==3 && arr [2][1] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][2]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][0]==3 && arr[1][1]==3 && arr [2][2] ==3) { 
        cout<<"Player X wins"; 
        exit(0);
    } else if (arr[0][2]==3 && arr[1][1]==3 && arr[2][0]==3){ 
        cout<<"Player X wins"; 
        exit(0); 
    }
    
    cout<<"Match Drawn";

}
int main(){
    format();
    play();
}
