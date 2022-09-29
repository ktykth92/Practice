#include <iostream>
#include <string>
using namespace std;

int main(){
   // Maximum days of eash months 
   int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   // get inputs of number of trials
   int T;
   cin>>T;


   for(int i=1;i<T+1;i++){
      string input;
      cin>>input;
      string month=input.substr(4,2);
      string day= input.substr(6,2);
      if(stoi(day)<0||stoi(day)>days[stoi(month)]||stoi(month)<0||stoi(month)>12){
         cout<<"#"<<i<<" "<<-1<<endl;
         continue;
      }
      cout<<"#"<<i<<" "<<input.substr(0,4)+"/"+month+"/"+day<<endl;
   }
   return 0;
} 