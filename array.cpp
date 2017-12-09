#include <iostream>
#include"array.h"

using namespace std;

bool DoubleArray::initialize(int l,int h)
{
    low=l;
    high=h;
    if(high<=low)
    {
        cout<<"¶ºÎÒÍæÄØ";
        return 1;
    }
    storage=new double [high-low+1];
    if(storage==NULL)
        return false;
    else
        return true;

}
bool DoubleArray::insert(int index,double value)
{
   if(index<low||index>high)
        return false;
    storage[index-low]=value;
    return true;


}
bool DoubleArray::fatch(int index,double &value)
{
    if(index<low||index>high)
        return false;
    value=storage[index-low];
    return true;
}
void DoubleArray::cleanup()
{
    if(storage)
        delete[]storage;
}
