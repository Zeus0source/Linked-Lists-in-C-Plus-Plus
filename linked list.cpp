//yashrastogi 24070123135 exp-15
#include<iostream>
using namespace std;

class Link {
    public:
    int d;
    Link *next;

    Link(int num){
        d=num;
        next=NULL;
    }
    /*void disp(){
        cout<<d<<"   "<<next;
    }*/
};

int main(){
    Link*l1=new Link(4);
    cout<<l1->d<<"   "<<l1->next;
}
/*
output:
4   0
*/