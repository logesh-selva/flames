#include<stdio.h> 
#include<string.h> 
#define ll long long 
//void print(int value);
int flames(int value);
int main() 
{    
    //flames program
    char str1[50];
    char str2[50];
    printf("Enter a boy name  : ");
    scanf("%s",str1);
    printf("Enter a girl name : ");
    scanf("%s",str2);
    //scanf("%s%s",str1,str2);
    ll n1=strlen(str1),n2=strlen(str2),count=0,value;
    ll temp=1;
    for(ll i=0;i<n1;i++){
        for(ll j=0;j<n2;j++){
            if(str1[i]==str2[j] && str1[i]!='0' && str2[j]!='0'){
                //printf("%c",str1[i]);
                str1[i]='0';
                str2[j]='0';
                temp=0;
                count++;
                break;
            }
        }
    }
    value=(n1-count)+(n2-count);
    //printf("%lld %lld",count,value);
    ll temp1=flames(value);
    char* strs[0][6];
    strs[0][0] = "frinds";
    strs[0][1] = "love";
    strs[0][2] = "affection";
    strs[0][3] = "marriage";
    strs[0][4] =  "enemy";
    strs[0][5] =  "sister";
    printf("flames  status    : %s",strs[0][temp1]);
    return 0; 
}
int flames(int value){
    char love[6]="flames";
    ll temp=0;
    
    int k=0;
    //printf("%c",love[0]);
        for(int i=0;i<5;i++){
        for(int j=0;j<value;j++){
                //printf("%c",love[k]);
                if(love[k]=='0'){
                    j-=1;
                    //k++;
                }
                if(j!=value-1)
                k++;
                if(k==6){
                    k=0;
                }
        }
        //printf("%d",k);
        //printf("%c ",love[k]);
        love[k]='0';
    }
    for(int i=0;i<6;i++){
        if(love[i]!='0'){
        temp=i;
        break;
        }
    }
    //cout<<temp;
   return temp;
}