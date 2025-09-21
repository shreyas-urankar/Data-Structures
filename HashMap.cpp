#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> umap;
    umap["shreyas"]=22;
    umap["gfg"]=56;
    umap["helloworld"]=90;
    // for(auto x: umap)
    // {
    //     cout<<x.first<<" "<<x.second<<" "<<endl;
    // }

    

    string key="shreyas";
    if(umap.find(key)!=umap.end())
    {
        cout<<"Key found"<<endl;

    }
    else{
        cout<<"Key not found"<<endl;
    }

    if(umap.find(key)!=umap.end())
    {
        auto temp = umap.find(key);
        cout<<"Key is:"<<temp->first<<endl;
        cout<<"Value is:"<<temp->second<<endl;
    }
    cout<<endl;
    if(umap.find(key)!=umap.end())
    {
        auto temp=umap.find(key);
        cout<<"Key is:"<<temp->first<<endl;
        cout<<"Value is:"<<temp->second<<endl;
    }

    umap.insert(make_pair("mobile", 17000));
    key= "helloworld";
    umap.erase(key);
    for(auto itr= umap.begin(); itr!=umap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<umap.size()<<endl;

    int arr[]={7,1,0,3,5,0,1,3,2,5,7,3,8,9,9};
    unordered_map<int, int> umaped;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        int key=arr[i];
        umaped[key]++;
    }
    for(auto x:umaped)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
} 