#include<iostream>
#include"Ex03dma.h"
using namespace std;

const int dma_size=4;

int main()
{
    DMA *p_dma[dma_size];
    char templ[40],tempc[40],temps[40];
    int tempr;
    char kind;

    for (int i=0;i<dma_size;i++)
    {
        cout<<"Enter DMA's label: ";
        cin.get(templ,40);

        cout<<"Enter DMA's rating: ";
        cin>>tempr;
        while (cin.get()!='\n')
            continue;

        cout<<"Enter 1 for baseDMA, "
            <<"2 for lacksDMA or "
            <<"3 for hasDMA: ";
        while (cin>>kind&&(kind!='1'&&kind!='2'&&kind!='3'))
        {
            cout<<"Enter 1, 2 or 3: ";
        }
        while (cin.get()!='\n')
            continue;

        if (kind=='1')
        {
            p_dma[i]=new baseDMA(templ,tempr);
            continue;
        }
        else if (kind=='2')
        {
            cout<<"Enter lacksDMA's color: ";
            cin.get(tempc,40);

            p_dma[i]=new lacksDMA(tempc,templ,tempr);
        }
        else
        {
            cout<<"Enter hasDMA's style: ";
            cin.get(temps,40);

            p_dma[i]=new hasDMA(temps,templ,tempr);
        }
        while (cin.get()!='\n')
            continue;
    }
    cout<<endl;

    for (int i=0;i<dma_size;i++)
    {
        p_dma[i]->view();
        cout<<endl;
    }

    for (int i=0;i<dma_size;i++)
    {
        delete p_dma[i];
    }

    cout<<"Done.\n";
    return 0;
}