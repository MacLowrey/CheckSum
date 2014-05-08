//
//  main.cpp
//  Bank Codes
//
//  Created by Jon Lowrey on 1/28/14.
//  Copyright (c) 2014 Jon Lowrey. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[])
{   unsigned long st;
    int mult[9]={7,3,9,7,3,9,7,3,1};
    int bankCode[9];
    int modded[9];
    int checkSum,sum = 0;
    
    cout<<"Enter The Bank Number:  ";
    cin>>st;
    
    for (int i = 8; i >= 0; i--) {
        bankCode[i] = st % 10;
        st /= 10;
    }
    checkSum = bankCode[8];
    
    
cout<<endl;
    for (int i=0;i<=7;i++){
        modded[i] = mult[i]*bankCode[i];
    }
    for (int i=0;i<8;i++){
        sum+=modded[i];
    }
    if (checkSum == (sum%10)) {
    cout << "The Check Code is valid. \n";
    }
    else cout<<"The Check Code is invalid \n ";
  
}

