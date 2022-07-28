#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

// string appendAndDelete(string s, string t, int k) {
//    int c,i;
//    for(i=0;i<s.length();i++){
//        if(s[i]!=t[i]){
//            break;
//        }
//     int a=s.size();
//     int b=t.size();
//     c=a-i+b-i;
//     if(k==c || k>=a+b)   
//     {
//         return "Yes";
        
//     }
//     else if(c%2==k%2 && k>c){
//         return "Yes";
        
//     }
//     else{
//         return "No";
//     }
//    }

// }
string appendAndDelete(string s, string t, int k) {
    int count,i;
    for(i=0;i<s.length();i++)
        if(s[i]!=t[i])        
        break;
    int n1=s.size(),n2=t.size();
    count=n1-i+n2-i;

    if(k==count||k>=n1+n2)       // Case 1
    return "Yes";
    else if(count%2==k%2 && count<=k) // Case 2
    return "Yes";
    else               // Case 3
    return "No";
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

// # case 1: If k=count then k appends or If k>=n1+n1 then any no. of deletions can be done.

// # Case 2: If count & k are both even/odd and count<=k then delete and append until steps=k.

// # Case 3: Or else it can't be converted into k steps.