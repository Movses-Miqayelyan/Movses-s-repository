#include <iostream>
#include <forward_list>
using namespace std;


bool removeAllOccurrences(forward_list<int> &flist, int value) {
    auto it = flist.before_begin();
    int deleted = 0;
    for (;it != flist.end(); it++){
        if(it->next == value) {
            flist.erase_after(it);
            deleted++;
        } 
    }
    if(deleted == 0) {
        return false;
    }
    return true;
 }
 
void print (forward_list<int> & flist){
    for(int x : flist) {
        cout << x << ' ';
    }
}

int main(){
    
    forward_list<int> flist = {1,2,3,4,5,4,4,6,7};
    removeAllOccurrences(flist, 4);
    print(flist);
    
    return 0;
}