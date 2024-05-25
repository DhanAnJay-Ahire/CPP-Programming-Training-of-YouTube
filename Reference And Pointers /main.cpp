//
//  main.cpp
//  ReferencePointers
//
//  Created by DhanAnJay Ahire on 22/05/24.
//
#include <iostream>
using namespace std;

int& func(int& argu)
{
    ++argu;
    cout<<argu<<endl;
    return argu;
}

int reference_explanation()
{
    int a =10;
    int &res = func(a);
    cout<<++res <<"  "<< a<<endl;
    
    /*int a=10;
    int& ref= a;
    
    ref=30;
    cout<<&ref <<"  "<<&a<<endl;
    
    int y=20;
    ref=y;
    cout<<ref <<"  "<<a<<endl;
    
    //int& ref=y;
    //int& ref2=20;
     */
    return 1;
}

int func_ptr(int* arg)
{
    ++*arg;
    cout<<*arg<<endl;
    return *arg;
}

int swap(int& a, int& b)
{
    cout<<"Reference swap method"<<endl;
    int temp =a;
    a=b;
    b=temp;
    return 1;
}

int swap(int* a, int* b)
{
    cout<<"Pointers swap method"<<endl;
    int temp =*a;
    *a=*b;
    *b=temp;
    return 1;
}

int main(int argc, const char * argv[]) {

    //Pointers
    int x=10;
    int y=20;
    swap(x,y);
    cout<<x<<" "<< y<<endl;
    
    
    /*int x=10;
    int* ptr = &x;
    ++*ptr;
    cout<<&ptr<< "   "<< ptr<< "  " <<x <<" "<< *ptr<< endl;
    
    // heap
    int * heap_ptr =new int(10);
    *heap_ptr =20;
    
    delete heap_ptr;
    
    int * heap_ptr2 =new int[10];
    *heap_ptr2 =20;
    delete [] heap_ptr2;*/

    return 0;
}