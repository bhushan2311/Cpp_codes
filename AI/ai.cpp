#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>

using namespace std;

int main()
{
    char ch[100];
    /*int ch;
    while(1)
    {
    gets(ch);

    cout<<"\n1.Hi\n2.Name\n3.How are you?\n4.Bye";
    cout<<"\n\nJust Ask by entering option no.";
    cin>>ch;

    switch(ch)
    {
    case 1:
        PlaySound(TEXT("Hi.wav"),NULL,SND_SYNC);
        break;
    case 2:
        PlaySound(TEXT("Name.wav"),NULL,SND_SYNC);
        break;
    case 3:
        PlaySound(TEXT("How.wav"),NULL,SND_SYNC);
        break;
    case 4:
        PlaySound(TEXT("Bye.wav"),NULL,SND_SYNC);
        exit(0);
        break;

    }*/

while(1)
{
    gets(ch);
if(strcmp(ch,"hi")==0)
    {
        PlaySound(TEXT("Hi.wav"),NULL,SND_SYNC);
    }
    else if(strcmp(ch,"how are you")==0)
    {
        PlaySound(TEXT("How.wav"),NULL,SND_SYNC);
    }
    else if(strcmp(ch,"what is your name")==0)
    {
        PlaySound(TEXT("Name.wav"),NULL,SND_SYNC);
    }
    else if(strcmp(ch,"bye")==0)
    {
        PlaySound(TEXT("Bye.wav"),NULL,SND_SYNC);
        exit(0);
    }

}
}

