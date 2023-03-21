#include <iostream>

using namespace std;

int isP(int n){
    if(n < 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void par(int n){
    int p1, p2;

    for(p1 = 2; p1 < n; p1++){
        if(isP(p1)){
            for(p2 = 2; p2 < n; p2++){
                if(isP(p2)){
                    if(p1 + p2 == n){
                        cout << p1 << " + " << p2 << " = " << n;
                        return;
                    }
                }
            }
        }
    }
}

void impar(int n){
    cout << n << " % " << "4" << " = " << n%4;
}

int main()
{
    srand(time(NULL));

    int n, ret;
    cout << "Digite um valor natural: ";
    cin >> n;

    if(n%2==0){
        par(n);
    }else{
        impar(n);
    }

}

