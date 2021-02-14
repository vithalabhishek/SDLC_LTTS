

void phno(string num)
{
    int count=0;
   for(int i=0;i<num.length();i++)
   {
       
     if(isdigit(num[i]))
     {
         count+=1;
     }
   }
   if(count==10)
   {
        if(num[0]==6|| num[0]==7||num[0]==8||num[0]==9)
        {
            cout<<num;
        }
   }
   else
   {
   cout<< "INVALID NUMBER. PLEASE TRY AGAIN";
   cin>>num;
   phno(num);
   }
}
