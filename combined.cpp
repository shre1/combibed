#include<iostream>
using namespace std;
int main()
{
     {

       int i,t,s,a[10],sum=0;
         float avg;
    cout<<"Here you are requested to enter the temperature\n";

    cin>>t;
   if(t<0)
             cout<<"freez or very-very cold\n";
   else if(t<10)
            cout<<"very cold\n";
            else if(t<20)
                        cout<<"cold\n";
                    else if(t<30)
                               cout<<"normal temp\n";
                            else if(t<40)
                                         cout<<"HOT, care to be taken\n";
                                    else
                                           cout<<"very hot\n";
}{
         int i,t,s,a[10],sum=0;
         float avg;
         cout<<"enter the inches of rain for the past 5 days to predict the conditions";
         for (i=0;i<5;i++)
         {
            cin>>a[i];
            sum=sum+a[i];
         }
        cout<<sum<<endl;
        avg=sum/5;
        cout<<avg<<endl;
        if(avg<1)
             cout<<"high chances of drought measures need to be taken";
   else if(avg<5)
            cout<<"normal weather, no measures need to be taken though back up should be always ready";
            else if(avg<10)
                        cout<<"high chances of cyclones, hence imediate meaures need to be taken\n";
        return 0;
}
}
