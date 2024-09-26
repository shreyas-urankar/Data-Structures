int main()
{   
    int num, i, j;
    cout<<"Enter the numbers of lines you want to print:";
    cin>>num;
    for(i=0; i<num; i++)
    {
        for(j=i+1; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}