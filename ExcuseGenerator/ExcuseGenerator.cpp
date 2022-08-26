#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
int i;
string Intro[10] = {"Sorry I can't come ","Please forgive my absence ","This is going to sound crazy but ","Get this ","I can't go because ","I know you're going to hate me but ","I was minding my own business and boom ","I feel terrible but ","I regrettfully cannot attend ","This is going to sound like an excuse but "};
string Scapegoat[10] = {"my nephew ","the ghost of Hitler ","the Pope ","my ex ","a high school marching band ","Dan Ruther ","a sad clown ","the kid from Air Bud ","a Professional cricket team ","my Tinder date "};
string Delay[10] = {"just shit the bed","died in front of me","won't stop telling me knock knock jokes"," is having a nervous breakdown","gave me syphilis"," poured lemonade in my gas tank","stabbed me","found my box of teeth","stole my bicycle","posted my nudes on instagram"};


string randomIntro()
{
    srand(i);
    return Intro[i];
}

string randomScapegoat()
{
    srand(i);
    return Scapegoat[i];
}

string randomDelay()
{
    srand(i);
    return Delay[i];
}

int main()
{
    cout<<randomIntro()<<randomScapegoat()<<randomDelay()<<endl;
    return 0;
}
