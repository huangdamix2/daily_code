#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;
const int N = 100010;
int main()
{
    char a1[60],a2[60],b1[60],b2[60];
    scanf("%s",a1);
    scanf("%s",a2);
    scanf("%s",b1);
    scanf("%s",b2);
    int flag = 0;
    int i = 0;
    int lena = 0,lenb = 0;
    lena = (strlen(a1)>strlen(a2)?strlen(a2):strlen(a1));
    lenb = (strlen(b1)>strlen(b2)?strlen(b2):strlen(b1));


    for(i=0;i<lena;i++)
    {
        if(a1[i]>='A' && a1[i]<='G')
        {
            if(a2[i]==a1[i])
            {
                switch(a1[i])
                {
                    case 'A' :printf("MON ");     break;
                    case 'B' :printf("TUE ");     break;
                    case 'C' :printf("WED ");     break;
                    case 'D' :printf("THU ");     break;
                    case 'E' :printf("FRI ");     break;
                    case 'F' :printf("SAT ");     break;
                    case 'G' :printf("SUN ");     break;
                    default :   break;
                }
                flag = 1;
            }
        }
        if(flag == 1)
            break;
    }
    
    flag = 0;
    
    for(i+=1;i<lena;i++)
    {
        if((a1[i]>='A'&&a1[i]<='N') || (a1[i]>='0'&&a1[i]<='9'))
        {
            if(a2[i] == a1[i])
            {
                switch(a1[i])
                {
                    case '0' :printf("00:"); break;
                    case '1' :printf("01:"); break;
                    case '2' :printf("02:"); break;
                    case '3' :printf("03:"); break;
                    case '4' :printf("04:"); break;
                    case '5' :printf("05:"); break;
                    case '6' :printf("06:"); break;
                    case '7' :printf("07:"); break;
                    case '8' :printf("08:"); break;
                    case '9' :printf("09:"); break;
                    case 'A' :printf("10:"); break;
                    case 'a' :printf("10:"); break;
                    case 'B' :printf("11:"); break;
                    case 'b' :printf("11:"); break;
                    case 'C' :printf("12:"); break;
                    case 'c' :printf("12:"); break;
                    case 'D' :printf("13:"); break;
                    case 'd' :printf("13:"); break;
                    case 'E' :printf("14:"); break;
                    case 'e' :printf("14:"); break;
                    case 'F' :printf("15:"); break;
                    case 'f' :printf("15:"); break;
                    case 'G' :printf("16:"); break;
                    case 'g' :printf("16:"); break;
                    case 'H' :printf("17:"); break;
                    case 'h' :printf("17:"); break;
                    case 'I' :printf("18:"); break;
                    case 'i' :printf("18:"); break;
                    case 'J' :printf("19:"); break;
                    case 'j' :printf("19:"); break;
                    case 'K' :printf("20:"); break;
                    case 'k' :printf("20:"); break;
                    case 'L' :printf("21:"); break;
                    case 'l' :printf("21:"); break;
                    case 'M' :printf("22:"); break;
                    case 'm' :printf("22:"); break;
                    case 'N' :printf("23:"); break;
                    case 'n' :printf("23:"); break;
                }
                flag = 1;
            }
            if(flag == 1)
                break;
        }
    }
    for(i=0;i<lenb;i++)
    {
        if((b1[i]>='A'&&b1[i]<='Z') || (b1[i]>='a'&&b1[i]<='z'))
        {
            if(b1[i] == b2[i])
            {
                if(i>=0&&i<10)
                {
                    printf("0%d",i);
                }
                else
                    printf("%d",i);
            }
        }
    }


    return 0;
}
