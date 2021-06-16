#include<iostream>
#include<fstream>
using namespace std;
int main(){//ios::binary ->to open in binary mode
    char data[100];
    fstream outfile;
    //ofstream appfile;
    outfile.open("/home/ashi/ASHI/myprgrms/txt/fileone.txt",ios::out);//overwrites content which is already present
    cout<<"writing to file"<<endl;
    cout<<"enter data\n";
    cin.getline(data,100);
    outfile<<data<<endl;

  //  outfile.close();
    // appfile.open("/home/ashi/ASHI/myprgrms/txt/fileone.txt",ios::app);//appends
    // cout<<"apppending to file"<<endl;
    // cout<<"enter data\n";
    // cin.getline(data,100);
    // appfile<<data<<endl;

    // appfile.close();
    fstream file2;

    // ifstream infile;

    outfile.open("/home/ashi/ASHI/myprgrms/txt/fileone.txt",ios::in);
        file2.open("/home/ashi/ASHI/myprgrms/txt/filetwo.txt",ios::out);

    if(!outfile){
        cout << "No such file";
    }
    else{
        char word[30];
    cout<<"reading file\n";
    while(outfile){
        outfile>>word;
        if(outfile.eof()){
            break;
        }
        cout<<(word)<<" ";
        cin.getline(word,100);
        file2<<word<<endl;
    }
    }
//infile.close();
// char ch[30];
    // file2.open("/home/ashi/ASHI/myprgrms/txt/filetwo.txt",ios::out);

            
    // cout<<"reading file\n";
    // while(1){
    //     infile>>ch;
    //     if(infile.eof()){
    //         break;
    //     }
    //     cout<<(ch)<<" ";
    //     cin>>ch;;
    //      file2<<ch<<endl;

ifstream a;

    a.open("/home/ashi/ASHI/myprgrms/txt/filetwo.txt",ios::in);
    if(!a){
        cout << "No such file";
    }
    else{
        char b[30];
    cout<<"reading file\n";
    while(1){
        a>>b;
        if(a.eof()){
            break;
        }
        cout<<(b)<<" ";
    }
    }
    


return 0;
}