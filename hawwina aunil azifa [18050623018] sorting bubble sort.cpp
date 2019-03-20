// hawwina aunil azifa
// nim 18050623018
// d3 majanemen informatika 2018
// tugas struktur data 20 maret 2019

#include <iostream>

using namespace std;
int main()
{
    bool adatukar;
    int x[100],i=0,j,temp,n;

    cout<<"~~~~~ sorting bubble sort ~~~~~"<<endl<<endl;
    cout<<"banyak data yang ingin diurutkan: ";
    cin>>n;
    while (i<n)
        {
            cout<<"masukkan data ke ["<<i+1<<"]: ";
            cin>>x[i];
            i++;
        }


    adatukar=true;
    i=1;
    while (i<n && adatukar)
    {
        j=1;
        adatukar=false;
        while (j<=(n-1))
        {
            if (x[j-1] > x[j])
            {
                adatukar=true;
                temp=x[j-1];
                x[j-1]=x[j];
                x[j]=temp;
            }
            j++;
        }
        i++;
    }
    i=0;
    cout<<endl<<endl;
    cout<<"hasil pengurutan data :\n ";
    while (i<n)
    {
       cout<<x[i]<<", " ;
       i++;
    }
    cout<<endl<<endl;

    return 0;
}
