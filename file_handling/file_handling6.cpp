#include<iostream>
#include<fstream>
using namespace std;
int main(){//ios::binary ->to open in binary mode
    char data[100];
    ofstream outfile;
    ofstream appfile;
    outfile.open("/home/ashi/ASHI/myprgrms/txt/fileone.txt",ios::out);//overwrites content which is already present
    cout<<"writing to file"<<endl;
    cout<<"enter data\n";
    cin.getline(data,100);
    outfile<<data<<endl;

    outfile.close();
    appfile.open("/home/ashi/ASHI/myprgrms/txt/fileone.txt",ios::app);//appends
    cout<<"apppending to file"<<endl;
    cout<<"enter data\n";
    cin.getline(data,100);
    appfile<<data<<endl;

    appfile.close();
    ifstream infile;

    infile.open("/home/ashi/ASHI/myprgrms/txt/fileone.txt",ios::in);
    if(!infile){
        cout << "No such file";
    }
    else{
        char word[30];
    cout<<"reading file\n";
    while(1){
        infile>>word;
        if(infile.eof()){
            break;
        }
        cout<<(word)<<" ";
    }
    }
infile.close();
return 0;
}