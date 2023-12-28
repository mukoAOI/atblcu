//
// Created by 23785 on 2023/12/13.
//
#include <iostream>
#ifndef TUTU_TABLE_H
#define TUTU_TABLE_H
using namespace std;
typedef struct node
{
    int hed;
    node *next;
}node,* nd;
typedef struct head
{
    int num;
    node * hu;
    char fu;
}head ;
class table {
    table ()
    {
        cout <<"请输入顶点数和弧数："<<endl;
        cin>>V>>E;
        he=new head [V];
    }
    int getnum(char c)
    {
        int i;
        for (i=0;i<V;i++)
        {
            if (he[i].fu==c)
                return i;
        }
        return -1;
    }
    int insertnode(int num,char c)
    {
        int a= getnum(c);
        node * as=he[num].hu->next;
        he[num].hu->next=new node;
        he[num].hu->next->hed=a;
        he[num].hu->next->next=as;
    }
    void InitTable()
    {
        int i;
        cout <<"请输入节点名称："<<endl;
        for (i=0;i<V;i++)
        {
            cin>>he[i].fu;
            he[i].num=0;
            he[i].hu=new node;
            he[i].hu->next=NULL;
        }
        int num=1;
        char a,b;
        int c,d;
        for (i=0;i<E;i++)
        {
            cout <<"第"<<num<<"个边为："<<endl;
            cin>> a>>b;
            c= getnum(a);
            insertnode(c,b);
            he[c].num+=1;
        }
    }
    void countdu()
        for (i=0;i<V;i++)
        {

            cout << he[i].fu <<"的度为："<<he[i].num<<endl;
        }
    }
    int FirstAdjVex(int i)
    {
        if (he[i].num==0)
            return -1;
        else
            return he[i].hu->next->hed;
    }
    int NextAdjVex(int i,char c)
    {
        if (he[i].num==0)
            return -1;
        else
        {
            int j;
            int s= getnum(c);
            node * as=he[i].hu->next;
            for (j=1;j<i;j++)
            {
                if (s==as->hed)
                    break;
                as=as->next;
            }
            if (j==he[i].num-1)
                return -1;
            else
                return 
        }
        return -1;
    }
private:
    head * he;
    int V,E;
};


#endif //TUTU_TABLE_H
