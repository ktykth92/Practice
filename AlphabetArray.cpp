#include <iostream>
#include <string>

using namespace std;

int main(){

    //test case
    int testcase;
    cin>> testcase;
    for(int j=0;j<testcase;j++){
        string input="";
        cin>> input;
        //counting right order
        int count=0;
        //numbers to iterate
        for(int i=0;i<input.size();i++){
            if(input[i]==97+i){
                count++;
            }
            else{
                break;
            }
        }
        cout<<"#"<<j+1<<" "<<count<<endl;
    }
    return 0;
}