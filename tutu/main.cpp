#include <iostream>
using namespace std;
#include <string.h>
#define maxint INT_MAX
class tumatrix
{
public:
    tumatrix()
    {
        cout <<"请输入顶点数和弧数："<<endl;
        cin>>V>>E;
        weight=new int *[V];
        int i ;
        for (i=0;i<V;i++)
            weight[i]=new int [V];
        table=new char[V];
        memset(weight,maxint,sizeof(weight));
        memset(du,0,sizeof(du));
    }
    int getnum(char c)
    {
        int i;
        for (i=0;i<V;i++)
        {
            if (table[i]==c)
                return i;
        }
        return -1;
    }
    void InitTable()
    {
        int i;
        cout<<"请输入顶点："<<endl;
        for (i=0;i<V;i++)
        {
            cin>>table[i];
        }
    }
    void InitTu()
    {
       InitTable();
       int i,j;
       int num=1;
       int a,b;
       char c,d;
       for (i=0;i<E;i++)
       {
           for (j=0;j<E;j++)
           {
               weight[i][j]=maxint;
           }
       }
       for (i=0;i<E;i++)
       {
           cout <<"请输入第"<<num<<"条边"<<endl;
           cin>>c;
           a= getnum(c);
           cin>>d;
           b= getnum(d);
           weight[a][b]=1;
           weight[b][a]=1;
           du[a][0]=du[a][0]+1;
           du[a][du[a][0]]=b;
           du[b][0]=du[b][0]+1;
           du[b][du[b][0]]=a;
           num++;
       }
    }
    void countdu()
    {
        int i,j,num;
        for (i=0;i<V;i++)
        {
            num=0;
            for (j=0;j<E;j++)
            {
                if (weight[i][j]!=maxint)
                    num++;
            }
            cout << table[i] <<"的度为："<<num<<endl;
        }

    }
    int FirstAdjVex(int i)
    {

        int j;
        for (j=0;j<E;j++)
        {
            if (weight[i][j]!=maxint)
                return j;
        }
        return -1;
    }
    int NextAdjVex(int i,int j)
    {
        int s,t=0;
        for (s=0;s<E;s++)
        {
            if (weight[i][s]!=maxint)
                t++;
            if ()
        }
    }
private:
    char * table;
    int **weight;
    int V,E;
    int du[27][27];
};
int main ()
{
    tumatrix ss;
    ss.InitTu();
    ss.countdu();
    return 0;
}