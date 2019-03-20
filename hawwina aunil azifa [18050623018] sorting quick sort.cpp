// hawwina aunil azifa
// nim 18050623018
// d3 majanemen informatika 2018
// tugas struktur data 20 maret 2019

#include <iostream>

using namespace std;
void quick_sort(int data[], int kiri, int kanan)
{
    int i = kiri, j = kanan;
    int tmp;
    int x = data[(kiri+kanan)/2];
  while (i<j)
    {
        while (data[i] < x)
        i++;
        while (data[j] > x)
        j--;
   if (i<=j)
    {
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
        i++;
        j--;
    }
    }
      if (kiri < j)
            quick_sort(data, kiri, j);
      if (i < kanan)
            quick_sort(data, i, kanan);
}
int main()
{
int i,n,data[100];
    cout<<"~~~~~ sorting quick sort ~~~~~"<<endl<<endl;
    cout<<"banyak data yang ingin diurutkan: ";
    cin>>n;
for(i=0;i<n;i++)
    {
        cout<<"Masukan data ["<<i+1<<"] : ";
        cin>>data[i];
    }
quick_sort(data,0,n-1);//hasil pengurutan
    cout<<endl<<endl;
    cout<<"Hasil pengurutan data:\n";
{
    int i;
    for (i=0;i<n;i++)
        cout<<data[i]<<", ";
        cout<<"\n";
}
return 0;
}
