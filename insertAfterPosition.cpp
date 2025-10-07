#include <iostream>
#include <forward_list>
using namespace std;


bool insertAfterPosition(forward_list<int> &flist, int position, int value) {
    auto it = flist.before_begin();
    for (int i = 1; i < position; ++i){
        if(!(*it)) {
            return false;
        }
        it++;
    }
    flist.insert_after(it, value);
    return true;
 }
 
void print (forward_list<int> & flist){
    for(int x : flist) {
        cout << x << ' ';
    }
}

int main(){
    
    forward_list<int> flist = {1,2,3,4,5,6,7};
    insertAfterPosition(flist,  0, 4);
    print(flist);
    
    return 0;
}