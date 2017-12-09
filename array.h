#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
struct DoubleArray
{
    int low;
    int high;
    double *storage;
    bool initialize(int l,int h);
    bool insert (int index,double value);
    bool fatch(int index,double &value);
    void cleanup();
};


#endif // ARRAY_H_INCLUDED
