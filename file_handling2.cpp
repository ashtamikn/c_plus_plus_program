#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char data[100];
    ofstream outfile;
    outfile.open("/home/ashi/ASHI/myprgrms/txt/c1.txt");
    cout<<"writing to file"<<endl;
    cout<<"enter data\n";
    cin.getline(data,100);
    outfile<<data<<endl;

    outfile.close();
    ifstream infile;
    infile.open("/home/ashi/ASHI/myprgrms/txt/a1.txt");
    cout<<"reading file\n";
    infile>>data;
    cout<<data;

}