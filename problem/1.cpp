#include <bits/stdc++.h>
using namespace std;


//d/D-52/20
//m/M-61/29
//y/Y-73/41

void date_finder(vector<int> &arr,vector<int> &dob)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if(arr[i]==52 || arr[i]==20)
		{
			if(arr[i+1]<10 && arr[i+2]<10)
	  		 {
		    dob.push_back(arr[i+1]);
			dob.push_back(arr[i+2]);
			return ;
	   		}	
		}
	}

	return;	
}

void year_finder(vector<int> &arr,vector<int> &dob)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if(arr[i]==73 || arr[i]==41)
		{
			if(arr[i+1]<10 && arr[i+2]<10)
	  		 {
		    dob.push_back(arr[i+1]);
			dob.push_back(arr[i+2]);
			 dob.push_back(arr[i+3]);
			dob.push_back(arr[i+4]);
			return ;
	   		}	
		}
	}

	return;	
}

void month_finder(vector<int> &arr,vector<int> &dob)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if(arr[i]==61 || arr[i]==29)
		{
			if(arr[i+1]<10 && arr[i+2]<10)
	  		 {
		    dob.push_back(arr[i+1]);
			dob.push_back(arr[i+2]);
			return ;
	   		}	
		}
	}

	return;	
}




bool leap(int year){
    if (year % 4 == 0) {
      if (year % 100 == 0) {
         if (year % 400 == 0)
         return true;
         else
         return false;
      } else
      return true;
   } else
   return false;
}

// solve hear
bool dateCheck(int d,int m,int y)
{ 
    bool ans;
    if(d>31){return false;}
    if(m>12){return false;}
    //leap year ki date check karega
    if(leap(y) && m==2){
        if(d>28){return false;}
        
    }
    if(!leap(y) && m==2){
        if(d>27){return false;}
        
    }
    //if 31 ha to month sahi ha chek karega
    if(d==31 && !(m==1 || m==3 || m==5 ||m==7 || m==8 || m==10 || m==12)){
        return false;
    }
    return true;
}


string dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
   
    int day= ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
    switch(day) {
case 0:
return("Sunday\n");
break;
case 1:
            return("Monday\n");
break;
case 2:
            return("Tuesday\n");
break;
case 3:
            return("Wednesday\n");
break;
case 4:
            return("Thursday\n");
break;
case 5:
            return("Friday\n");
break;
case 6:
            return("Saturday\n");
break;


    }
    return "cannot be computed";
}


void solution(int d,int m ,string yyyy){
    int y=stoi(yyyy);
    string yy="";
    yy+=yyyy[yyyy.length()-2];
    yy+=yyyy[yyyy.length()-1];
    
    
    bool c=dateCheck(d,m,y);
    string p="";
    string q="";
    string day=dayofweek(d,m,y);;
    if(m<10){
        p+='0';
        p+=to_string(m);
    }else{
        p=to_string(m);
    }
    if(d<10){
        q+='0';
        q+=to_string(d);
    }else{
        q=to_string(d);
    }
    if(c){
        cout<<"MM-DD-YYYY ";
        cout<<p<<"-"<<q<<"-"<<yyyy<<" ";
        cout<<"valid ";
        cout<<day;
        cout<<"MM-DD-YY ";
        cout<<p<<"-"<<q<<"-"<<yy<<" ";
        cout<<"valid ";
        cout<<day;
        cout<<"DD-MM-YYYY ";
        cout<<q<<"-"<<p<<"-"<<yyyy<<" ";
        cout<<"valid ";
        cout<<day;
        cout<<"DD-MM-YY ";
        cout<<q<<"-"<<p<<"-"<<yy<<" ";
        cout<<"valid ";
        cout<<day;
        
    }else{
        string day2="cannot be computed";
        cout<<"MM-DD-YYYY ";
        cout<<p<<"-"<<q<<"-"<<yyyy<<" ";
        cout<<"invalid ";
        cout<<day2<<"\n";
        cout<<"MM-DD-YY ";
        cout<<p<<"-"<<q<<"-"<<yy<<" ";
        cout<<"invalid ";
        cout<<day2<<"\n";
        cout<<"DD-MM-YYYY ";
        cout<<q<<"-"<<p<<"-"<<yyyy<<" ";
        cout<<"invalid ";
        cout<<day2<<"\n";
        cout<<"DD-MM-YY ";
        cout<<q<<"-"<<p<<"-"<<yy<<" ";
        cout<<"invalid ";
        cout<<day2<<"\n";

    }
}




int main()
{
	
	int p;
	cin>>p;
	vector<int>dob;
	while(p--)
	{
		
		string s;
		cin.ignore();
		getline (cin, s);
		//cout<<s<<endl;
		vector<int>ar;
		int date,month;
		string year;
		for (int i = 0; i < s.size(); ++i)
		{
			ar.push_back(s[i]-'0');
		}	
		
		date_finder(ar,dob);
		month_finder(ar,dob);
		year_finder(ar,dob);		
		date =dob[0]*10+dob[1];
		month=dob[2]*10+dob[3];
		year= to_string(dob[4]*1000+dob[5]*100+dob[6]*10+dob[7]);
		//cout<<date<<"-"<<month<<"-"<<year;
		solution(date,month,year);
		
		

	}
	
}
