void aadhaar(string num)
{
    int count=0;
   for(int i=0;i<num.length();i++)
   {
     if(isdigit(num[i]))
     {
         count+=1;
     }
   }
   if(count==12)
   {
       
   }
   else
   {
   cout<< "Enter Valid Aadhar no";
   cin>>num;
   aadhaar(num);
   }
}
