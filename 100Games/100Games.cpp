#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to the 100 Games created by Mark,Diana and Joel."<<endl;
    cout<<"Rules of the game are as follows:"<<endl;
    cout<<"You can only pick a positive integer between 1 and 10. So will the AI. "<<endl;
    cout<<"This will continue adding up to a running total and first one to reach 100, wins."<<endl;
    cout<<"Good luck!"<<endl;

    int myArray[]={1,12,23,34,45,56,67,78,89,100};
    int m;
    int n;
    int sum=1;

    cout<<"AI will go first."<<endl;
    cout<<"The AI input is 1"<<endl;

    if(sum<=12){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[1]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(12<sum<=23){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[2]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(23<sum<=34){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[3]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(34<sum<=45){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[4]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(45<sum<=56){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[5]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(56<sum<=67){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[6]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(67<sum<=78){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[7]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(78<sum<=89){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[8]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
    }
    if(89<sum<=100){
        cout<<"Kindly input your positive integer between 1 and 10: "<<endl;
        cin>>n;
        sum+=n;
        if(n<1){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        if(n>10){
            cout<<"Invalid input."<<endl;
            return 0;
        }
        m=myArray[9]-sum;
        sum+=m;
        cout<<"The AI input is "<<m<<endl;
        cout<<"Sum is now "<<sum<<endl;
        cout<<"AI is the winner!"<<endl;
    }


}
