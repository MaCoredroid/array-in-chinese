#include <iostream>
#include"array.h"

using namespace std;

int main()
{

    double value=0;
    int low,high,i=0;
    cout<<"请输入数组的下标范围:";
    cin>>low>>high;
    DoubleArray array;
    for(i=low;i<=high;i++)
    {
        cout<<"请输入第"<<i<<"个元素";
        cin>>value;
        array.insert(i,value);
    }
    while(1)
    {
        cout<<"请输入要访问的元素序号(0表示结束):";
        cin>>i;
        if(i==0)
            break;
        if(array.fatch(i,value))
        {
            cout<<value<<endl;

        }
        else cout<<"这太过份了啊\n";
    }
    array.cleanup();
    return 0;
}
