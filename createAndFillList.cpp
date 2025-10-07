#include <iostream>
#include <forward_list>
using namespace std;


void createAndFillList(int N) {
 forward_list<int> flist;
 for(int i = 1; i<=N ; i++){
     flist.push_front(i);
 }
 
 for(int x : flist){
     cout << x << endl;
 }  
}


int main(){
    createAndFillList(10);

    return 0;
}