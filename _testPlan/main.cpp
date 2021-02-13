int main(){
    string pan,gnd,fn,n,an,bs;
    string l;
    double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount, cs;
    cout<<"Enter your Gender(All Small/All Capital)"<<endl;
    cin>>gnd;
    if(gnd=="male"||gnd=="MALE")
    {
       cout<<"Welcome Sir"<<endl;
    }
    if(gnd=="female"||gnd=="FEMALE")
    {
        cout<<"Welcome Ma'am"<<endl;
    else
    {
        cout<<"INVALID";
        exit(0);
    }
    cout<<"Full name"<<endl;
    cin>>fn;
    cout<<"Enter 10 digit mobile number"<<endl;
    cin>>n;
    phno(n);
    cout<<"Enter pan"<<endl;
    cin>>pan;
    bool res=isValidPanCardNo(pan);
    if(res==true)
    {
        cout<<"The entered Pan Number is :"<<pan
           
    }
    else
    {
    cout<<"Please enter valid pan"<<endl;
    cin>>pan;
    isValidPanCardNo(pan);
    }
    cout<<"Enter Aadhaar Number"<<endl;
    cin>>an;
    aadhaar(an);
    cout<<"Eligibility:"<<endl;
    cout<<"Are you Eligibile with all paramenters of form 16"<<endl;
    cout<<"YES OR NO"<<endl;
    cin>>l;
    
    if(l=="yes" || l=="YES")
    {
        cout<<"proceed"<<endl;
        
    }
    else
    {
        cout<<"reject";
     exit(0);   
    }
    
    cout<<"Do you have pervious 2 months bank slip"<<endl;
    cout<<"YES OR NO"<<endl;
    cin>>bs;
    
    if(bs=="yes" || bs=="YES" )
    {
        cout<<"Configuration you may proceed" <<endl;
    }
    else
    {
        cout<<"reject";
     exit(0);   
    }

    cout<<"enter your cibil score"<<endl;
   cin>>cs;
    cout<<endl;
    if((cs>=300) && (cs<=900))
    {
        cout<<"loan approved"<<endl;
    }
    else
    {
        cout<<"loan rejected"<<endl;
       
        exit(0);
    }
    cout<<"Enter the loan amount: ";
    cin>>loan_amount;
    cout<<endl;
    cout<<"Enter the interest rate: ";
    cin>>interest_rate;
    if(interest_rate>0)
    {
        cout<<interest_rate;
    }
    else
    {
        cout<<"error";
    }
    cout<<endl;
    cout<<"The number of years: ";
    cin>>number_of_years;
    cout<<endl;
   
    total_amount=(number_of_years*loan_amount)+(number_of_years*loan_amount*(interest_rate/100.00));
    monthly_amount=total_amount/(number_of_years*12);

    cout<<"Total amount to be paid: "<<total_amount<<endl;
    cout<<"Total interest: "<<total_amount-(number_of_years*loan_amount)<<endl;
    cout<<"Monthly amount to be paid: "<<monthly_amount<<endl;
    return 0;
}
