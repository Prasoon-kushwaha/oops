#include<bits/stdc++.h>
using namespace std;
int count(string s)
{
    int ctr=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]==' ')
        {
            ctr++;
        }
    }
    return ctr;
}
int main()
{
    fstream fp;
    char buffer[100];
    // fp.open("FILE_NAME",ios::out);
    // fp<<"Hello";
    // int pos=fp.tellp();
    // cout<<"POS "<<pos<<endl;
    // fp.seekp(10,ios::cur);
    // fp.seekg(7,ios::beg);
    // fp<<"World";
    // fp.close();

    fp.open("FILE_NAME",ios::in);
    fp>>buffer;
    string line;
    int cnt_word=0;
    int tr=0;
    while (getline(fp,line))
    {
        tr++;
        cout <<line<<endl;
        cnt_word+=count(line);
       
    }
    cout <<endl;
    cout <<"Line "<< tr <<" Words "<<tr+cnt_word<<endl;
    
    // for (int i=0;i<100;i++)
    // {
    //     cout<<buffer[i];
    // }
    // cout <<endl;
    // cout <<"Output: " <<buffer<<endl;



}