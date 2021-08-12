#include<bits/stdc++.h>
using namespace std;
constexpr int max_constraint=(int)1e6;
int dP[max_constraint+2],dP1[max_constraint+2];
int next_zero[max_constraint],next_one[max_constraint];

int main(void){
    int t;
    cin>>t;
    skip:
    while(t--){
        string str;
		cin>>str;

        // store indices of subsequent occurences of zero
        int prev_posn=-1;
		for(int i=0;i<str.length();i++){
			if(str[i] == '0'){
				for(int j=prev_posn+1; j<i+1; j++)
                    //store indices of subsequent zeros
					next_zero[j]= i;
                    //search from last found zero to find next
					prev_posn= i;
			}
		}

        //all positions after last found 0 will be 1 obviously
		for(int i=prev_posn+1; i<=str.length()-1; i++)
			next_zero[i]=str.length();

		if(next_zero[0] == str.length()){
		   cout<<"0"<< endl;
           //skip tc -> since no zeros in string
		    goto skip;
		}

        // store indices of subequent occurences of one
		prev_posn=-1;
		for(int i=0; i<=str.length()-1; i++){
			if(str[i] == '1'){
				for(int j =prev_posn+1;j<=i;j++)
					next_one[j]=i;
					prev_posn =i;
			}
		}

        //all positions after last found 1 will be 0 obviously
		for(int i=prev_posn+1;i<=str.length()-1;i++)
			next_one[i]= str.length();

		dP[str.length()]=dP[str.length()+1]=0;
		dP1[str.length()]=dP1[str.length()+1]=0; //first change
		for(int i=str.length()-1; i>=0; --i){
			dP[i]=dP[i+1];
			if(str[i] == '0' && next_one[i] < str.length())
				dP[i]=max(dP[i], dP[next_one[i]+1]+1);
			if(str[i] == '1' && next_zero[i] <str.length())
		        dP[i]=max(dP[i],dP[next_zero[i]+1]+1);
			dP1[i]=dP1[i+1];
			if(next_one[i] < str.length())
			dP1[i]=max(dP1[i],dP[next_one[i]+1]+1); // second change
		}
		int len=dP1[0]+1;
		int current_index=next_one[0]+1;
		string res="1";
		for(int i=1;i<=len-1;++i)
		{
			if(current_index >= str.length()){
				res.push_back('0');
				continue;
			}

			if(next_zero[current_index] >= str.length()){
			    res.push_back('0');
			    current_index= next_zero[current_index]+1;
			    continue;
			}

			if(dP[next_zero[current_index]+1] <len-i-1){
				res.push_back('0');
				current_index=next_zero[current_index]+1;
			}
			
			else{
				res.push_back('1'); //third change
				current_index=next_one[current_index]+1;
			}
		}
		cout<<res<< endl;
    }
} 
