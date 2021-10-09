#include <iostream>
using namespace std;

bool ispalindrome(string s,int start,int end){
    if(start>=end)
    return true;

    return ((s[start]==s[end])&&ispalindrome(s,start+1,end-1));

}
int main(){
   //check weather a given string is palindrome or not
   // Using recursion
    string s;
    cout<<"Enter string ";
    cin>>s;
    if(ispalindrome(s,0,s.size()-1))
      cout<<"True";
      else
      cout<<"False";


}