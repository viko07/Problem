#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    vector<string> str;
    string text;
    string textT = "";
    int n;
    cin>>n;
    cin.ignore();
    while(n!=0)
    {
        getline(cin,text);
        textT = textT + text + " ";
        n--;
    }

    istringstream T(textT);

    string i{    };
    while(T>>i)
    {
        str.push_back(i);
    }

    for(vector<string>::iterator it=str.begin(); it!=str.end(); it++)
    {
        for(vector<string>::iterator itt=it+1; itt!=str.end(); itt++)
        {
            if(*it==*itt)
            {
                str.erase(it,itt);
            }
        }
    }

    for(vector<string>::iterator it=str.begin(); it!=str.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
