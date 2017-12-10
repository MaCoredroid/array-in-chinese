#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

struct DoubleArray
{
    int low;
    int high;
    double *storage;
    DoubleArray(int l=0,int h=0):low(l),high(h)
    {
       storage =new double[high-low+1];
    }
    bool insert (int index,double value);
    bool fatch(int index,double &value);
    void cleanup();
};


#endif // ARRAY_H_INCLUDED
