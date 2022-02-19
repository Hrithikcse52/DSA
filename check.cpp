#include <bits/stdc++.h>
using namespace std;



long long fib(int n,long long &cnt,vector<int> &dp){
	cnt++;
	if(n < 2) return n;
	int fir = dp[n-1];
	if(fir == -1) fir = fib(n-1,cnt,dp);
	dp[n-1] = fir;
	int sec = dp[n-2];
	if(sec == -1) sec = fib(n-2,cnt,dp);
	dp[n-2] = sec;
	return fir +sec;
}
long long  fibNormal(int n, long long &cnt){
	cnt++;
	if(n < 2) return n;
	return fibNormal(n-1,cnt) + fibNormal(n-2,cnt);
}
void reverse_arr(vector<int>& ds,int n,int ind){
    if(ind >= n/2) return;
    int temp = ds[ind];
    ds[ind] = ds[n-ind-1];
    ds[n-ind-1] = temp;
    reverse_arr(ds,n,ind+1);
}
int bin_ser(vector<int>& arr,int low ,int high,int target){
	if(high > low ){
		int mid = (high + low) / 2;
		if(arr[mid] == target) return mid;
		else if(arr[mid] < target) return bin_ser(arr,mid+1,high,target);
		else return bin_ser(arr,low,mid-1,target);
	}
	return -1;
}

bool check_plai(string str,int ind ,int n){
    if(ind >= n) return true;
    if(str[ind]!= str[n-ind-1]) return false;
    check_plai(str,ind+1,n);
    return true;
}

 // string ans ="";
        // string num = "";
        // string finalans = "";
        // int numtemp=0;
        // int len = s.length();
        // for(int i = 0;i < len; i++){
        //     if(isdigit(s[i])) numtemp =  (numtemp * 10) +(s[i] - '0') ;
        //     else if (s[i] == '['){
        //         i++;
        //         while(s[i] != ']') ans += s[i++];
        //         for(int j =1 ;j <numtemp ; j++) ans += ans;
        //         numtemp = 0;
        //         finalans += ans;
        //         ans ="";
        //     }
        //     else finalans += s[i];
        // }
        // return finalans;

int main() {
	vector<int> dp(100000,-1);
	long long cnt=0;
	int n;
	long long count = 0;
	cin >>n;
	count = 0; cnt=0;
	cout<<n<<": "<<fib(n,count,dp)<<"->";
	cout<<count<<endl;
	cout<<n<<": "<<fibNormal(n,cnt)<<"=>";
	cout<<cnt<<endl;
	cout<<endl;
	vector<int> ds = {1,2,3,4,5,6};
    int len = ds.size();
	cout<<"ind: "<<bin_ser(ds,0,len-1,8);
	cout<<endl;
	cout<<endl;
    cout<<len<<endl;
    for(auto it: ds) cout<<it<<" ";
    cout<<endl;
    reverse_arr(ds,len,0);
    for(auto it: ds) cout<<it<<" ";
    cout<<endl;
	cout<<endl;
	string str = "aabbss";
    string str1 = "aabbaa";
    cout<<(check_plai(str,0,str.length())? ("palindrome") : ("not palindorme"))<<endl;
    cout<<(check_plai(str1,0,str1.length())? ("palindrome") : ("not palindorme"))<<endl;


	return 0;
}