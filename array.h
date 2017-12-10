#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

struct DoubleArray
{
    int low;
    int high;
    double *storage;
    DoubleArray(int a=0,int b=0):low(a),high(b)
    {
       storage =new double[high-low+1];
    }
    bool insert (int index,double value);
    bool fatch(int index,double &value);
    ~DoubleArray()
    {
        if(storage)
        {
            delete[] storage;
        }
    }
};


#endif // ARRAY_H_INCLUDED
