#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
//Decimal to Hexadecimal
    string num;
    int dec,i=0;
    cin>>dec;
    while(dec!=0){
        int elem= dec%16;
        if(elem==10) num+='A';
        else if(elem==11) num+='B';
        else if(elem==12) num+='C';
        else if(elem==13) num+='D';
        else if(elem==14) num+='E';
        else{
            num+=elem +'0';
        }
        dec=dec/16;
        i++;
    }
    for(int j=num.size()-1; j>=0; j--){
        cout<<num[j];

    }
    cout<<endl<<endl;
    
//Hexa to Decimal
    string hex;
    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int decimal = 0, power = 0;

    for (int i = hex.size() - 1; i >= 0; i--) {
        int val = (hex[i] >= '0' && hex[i] <= '9') ? hex[i] - '0' :
                  (hex[i] >= 'A' && hex[i] <= 'F') ? hex[i] - 'A' + 10 :
                  (hex[i] >= 'a' && hex[i] <= 'f') ? hex[i] - 'a' + 10 :
                  -1; // Invalid hex character

        if (val == -1) {
            cout << "Invalid hexadecimal input." << endl;
            return 1;
        }

        decimal += val * pow(16, power);
        power++;
    }

    cout << "Decimal representation: " << decimal << endl;

    return 0;
}
