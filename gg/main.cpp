#include <iostream>
#include <vector>
using namespace std;


template < class T> class Stack ;
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}



template < class T>
Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result;
    bool t;
    for ( unsigned i = 0; i < s1.items.size (); ++i) {
        //cout<<s1.items[i];
        t=false;
        for ( unsigned j = 0; j < s2.items.size (); ++j){

            if(s1.items[i]==s2.items[j]){
                t=true;
            }
        }
    T v = s1.items[i];
    //s1.items.pop_back();

    if(t==false)
        result.items.push_back(v);
    ////
    }
    return result;
}

template < class T>
ostream& operator << (ostream &o , const Stack <T>&s)
{
    for(int i=0;i<s.items.size();i++)
    {
        o<<s.items[i]<<" ";
    }
    return o;
}


template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T>&
    s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T>&
    s2);
    friend  ostream& operator <<<>( ostream &o , const Stack <T>&
    s2);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    void print(){

        for ( unsigned j = 0; j < items.size (); ++j){
            cout<<items[j];
            cout<<"f"<<endl;
        }
    }
    T pop () {
        T last = items . back ();
        items . pop_back ();
        return last ;
    }
};


//<<  ostream



int main()
{
    Stack <int > a, b ;
    a. push (1) ;

    a. push (2) ;
    b. push (3) ;
    b. push (4) ;
    //cout<<a.p()<<endl;
    //cout<<b.pop()<<endl;
//    cout<< a << endl;
//    cout<< b << endl;
//
//    Stack <int > c = a + b;
//    cout<< c <<endl;
    //cout<<"jkfhbsjkfhdf";
    cout<< a << endl;
    cout<< b << endl;

    Stack <int > d = a - b;
    //a.print();
    //cout<<d;

    cout<< d << endl;
    //cout<<d.pop()<<endl;
}
