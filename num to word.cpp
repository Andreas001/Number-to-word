#include <iostream>
#include <string>
using namespace std;
//int (char);
int main()
{
    string input;
    string num [10]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string nOnePul [10]= {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string nPul [8]= {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int len;
    cin>>input;
    len=input.length();
    for(int y=0;y<5;y++)
    {
    for (int i=0; i<len; i++)
    {
        if (i==len-4)
        {
            cout<<num[int(input[i])-48]<<" thousand ";
        }
        else if (i==len-3)
        {
             if (int(input[i])-48==0)
             {/*no output*/}
             else cout<<num[int(input[i])-48]<<" hundred ";
        }
        else if (i==len-2)
        {
            if (int(input[i])-48==1)
            {
                cout<<nOnePul[int(input[i+1])-48];
                break;
            }
            else if (int(input[i]-48==0))
            {/*no output*/}
            else
            {
                cout<<nPul[int(input[i])-50]<<" ";
            }
        }
        else if (i==len-1)
        {
            cout<<num[int(input[i])-48];
        }
    }
    }
    return 0;
}
