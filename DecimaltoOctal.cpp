#include<iostream>
using namespace std;
int decimal_octal(int);
void Dec_To_Hex(int);
int main()
{
    int decimalNumber;
    cout<<"Enter decimal number: ";
    cin>>decimalNumber;
    cout<<decimalNumber<<" decimal = "<<decimal_octal(decimalNumber)<<" octal = ";
    Dec_To_Hex(decimalNumber);
    return 0;
}

int decimal_octal(int n) /* Function to convert decimal to octal */
{
    int rem, i=1, octal=0;
    while (n!=0)
    {
        rem=n%8;
        n/=8;
        octal+=rem*i;
        i*=10;
    }
    return octal;
}

void Dec_To_Hex(int dec) /*Function To convert decimal to Hexadecimal*/
{
    int c=10,c2=0,c3=0;
    const char letter[6]={65,66,67,68,69,70};
    const char number[10]={48,49,50,51,52,53,54,55,56,57};
    char hex[8];
    while (dec>=1)
    {
        c=10;c2=0;
        if ((dec%16)<10)
        {
            while (c2!=dec%16)
            {
                c2++;
            }
            hex[c3]=number[c2];
        }

        c2=0;
        if ((dec%16)>=10)
        {
            while (dec%16!=c)
            {
                c2++;
                c++;
            }
            hex[c3]=letter[c2];
        }
        dec/=16;
        c3++;  // going on to next position in the array for the output of hex conversion
    }
    while (c3>=0)
    {
    // Array needs to be displayed backwards
        if (c3<=0)
            break;
        c3--;
        cout<<hex[c3];
    }
    cout<<" hexadecimal";
}
