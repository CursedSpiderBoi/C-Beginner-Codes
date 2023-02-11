#include<iostream>

using namespace std;

void prime(int n){
	bool check=0;
	int j=0,temp=0;
	for(int i=n/2;i>1;i--){
		check=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				check=0;
				break;		
			}
		}
		if(check==1){
			temp=n-i;
			for(j=2;j<i;j++){
				if(temp%j==0){
					check=0;
					break;		
				}
			}
			if(temp%2==0){
				continue;
			}
			if(check==1){
				cout<<i<<" + "<<temp<<" = "<<n<<endl;
			}
		}
	}
}

int main()
{
int n=0;
cin>>n;
prime(n);
system("pause");
return 0;
}

