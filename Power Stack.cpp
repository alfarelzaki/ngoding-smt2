#include <bits/stdc++.h>
using namespace std;

int stackAngka[100], top=-1;

void show(){
    cout << "[ ";
    for (int i=0; i<=top; i++){
        cout << stackAngka[i] << ' ';
    }
    cout << ']' << "\n";
}

bool isEmpty(){
    if (top==-1){
        return true;
    } else return false;
}

void push(int x){
    top++;
    stackAngka[top]=x;
    show();
}

void pop(){
    if (isEmpty()){
        cout << "ERROR: STACK KOSONG\n";
    } else {
        top--;
        show();
    }
}

void powpush(int y, int x){
    for (int i=0; i<y; i++){
        top++;
        stackAngka[top]=x;
    }
    show();
}

void powpop(int y){
    for (int i=0; i<y; i++){
        if (top==-1){
            cout << "ERROR: STACK KOSONG\n";
            break;
        } else top--;
    }

    if (!isEmpty()){
        show();
    }
}

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, t;
    string command;

    cin >> t;
    while(t--){
        cin >> command;

        if(command=="PUSH"){
            cin >> x;
            push(x);
        } else if (command=="POP"){
            pop();
        } else if (command=="POWPUSH"){
            cin >> y >> x;
            powpush(y,x);
        } else if (command=="POWPOP"){
            cin >> y;
            powpop(y);
        }
    }
    //system("pause");
}