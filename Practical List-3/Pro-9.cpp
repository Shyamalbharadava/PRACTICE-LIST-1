#include<iostream>
using namespace std;
class maximum
{
     	int num_1,num_2;
     	int largest()
     	{
     		if(num_1>num_2)
     		{
     			return num_1;
			}
			else
			{
				return num_2;
			}
		 }

		public:
	
      	void getdata()
		{
			cout<<"Enter The Number Num_1 :: ";
      		cin>>num_1;
      		cout<<"Enter The Number Num_2 :: ";
      		cin>>num_2;
      	}
      
		void putdata()
		{
      		int maximum=largest();        //nesting of member function
      		cout<<"Maximum number is :: "<<maximum<<endl;
    	}
};
int main()
{
	cout<<"Shyamal Bharadava"<<endl;
	cout<<"220130318069"<<endl;
	cout<<"-------------"<<endl;
      maximum m;
      m.getdata();
      m.putdata();
      return 0;

}
