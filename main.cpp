#include <iostream>
#include"array.h"

using namespace std;

int main()
{

    double value=0;
    int low,high,i=0;
    cout<<"������������±귶Χ:";
    cin>>low>>high;
    DoubleArray array;
    for(i=low;i<=high;i++)
    {
        cout<<"�������"<<i<<"��Ԫ��";
        cin>>value;
        array.insert(i,value);
    }
    while(1)
    {
        cout<<"������Ҫ���ʵ�Ԫ�����(0��ʾ����):";
        cin>>i;
        if(i==0)
            break;
        if(array.fatch(i,value))
        {
            cout<<value<<endl;

        }
        else cout<<"��̫�����˰�\n";
    }
    array.cleanup();
    return 0;
}
