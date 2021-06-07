#include<iostream>
#include<string>
using namespace std;

void szyfr(string napis, int ile)
{
    string x;
    int a,b,c,d,t;

    for(int i=0; i<napis.length(); i++)
    {
        t=napis[i] + ile;

        if(napis[i]>=65 && napis[i]<=90)
        {
            if(t>90)
            {
                a=t-90;
                x[i]=64+a;
            }
            else if(t<65)
            {
                b=65-t;
                x[i]=91-b;
            }
            else
                x[i]=t;
        }

        else if(napis[i]>=97 && napis[i]<=122)
        {
            if(t>122)
            {
                c=t-122;
                x[i]=96+c;
            }
            else if(t<97)
            {
                d=97-t;
                x[i]=123-d;
            }
            else
                x[i]=t;
        }

        else
            x[i]=t;

        cout<<x[i];
    }
    cout<<endl;
}
odszyfr(string napis)
{
cout<<napis;

cout<<endl;
}

int main()
{
    string napis,x;
    int ile;
    cout<<"Wpisz napis: ";
    cin>>napis;
    cout<<endl;
    cout<<"O ile szyfrowac?: ";
    cin>>ile;
    cout<<endl;

    cout<<"szyfrowanie: ";
    szyfr(napis,ile);

    cout<<"odszyfrowanie: ";
    odszyfr(napis);

    system("pause");
    return 0;
}
