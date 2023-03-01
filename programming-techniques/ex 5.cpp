#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Date{
    private:
    int day,month,year;
    public:
    //constructors
    Date(){
        day=1;
        month=1;
        year=1;

    }
    Date(int a,int b,int c){
        day=a;
        month=b;
        year=c;
    }
    //setters
    void setDay(int a){
        day=a;
    }
    void setMonth(int a){
        month=a;
    }
    void setYear(int a){
        year=a;
    }
    //getters
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    //compare
    int compare(Date a){
        if(year>a.year){
            return 1;
        }else if(year<a.year){
            return -1;
        }else{
            if(month>a.month){
                return 1;
            }else if(month<a.month){
                return -1;
            }else{
                if(day>a.day){
                    return 1;
                }else if(day<a.day){
                    return -1;
                }else{
                    return 0;
                }
            }
        }
    }
    //overload
    bool operator>(Date a){
        if(year>a.year){
            return true;
        }else if(year<a.year){
            return false;
        }else{
            if(month>a.month){
                return true;
            }else if(month<a.month){
                return false;
            }else{
                if(day>a.day){
                    return true;
                }else{
                    return false;
                }
            }
        }
    }
    bool operator<(Date a){
        if(year>a.year){
            return false;
        }else if(year<a.year){
            return true;
        }else{
            if(month>a.month){
                return false;
            }else if(month<a.month){
                return true;
            }else{
                if(day>a.day){
                    return false;
                }else{
                    return true;
                }
            }
        }
    }
    bool operator ==(Date a){
        if((year==a.year)&&(month==a.month)&&(day==a.day)){
            return true;
        }else{
            return false;
        }
    }
    //leap year
    bool isLeapYear(){
        if(year%400==0){
            return true;
        }else if(year%100==0){
            return false;
        }else if(year%4==0){
            return true;
        }else{
            return false;
        }
    }
    //convert
    long long int convert(){
        return 10000*year+100*month+day;
    }
    //static thingy with string
    static string showDate(int a){
        string output,aux;
        aux=to_string(a);
        output=aux.substr(aux.length()-2,2)+"/"+aux.substr(aux.length()-4,2)+"/"+aux.substr(0,aux.length()-4);
        return output;
    }
    //other static thingy (sort)
    static void sort(vector <int> &v){
        int aux;
        for (int i=0; i<v.size()-1; i++){
            for (int j=0; j<v.size()-i-1; j++){
                if (v[j]>v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
            }
        }
    }
};  

int main(){
    /*int num[3];
    string format[3]={"day","month","year"};
    for(int i=0;i<3;i++){
        cout <<"introduce the " <<format[i] <<": ";
        cin >>num[i];
    }
    Date fecha1(num[0],num[1],num[2]);
    for(int i=0;i<3;i++){
        cout <<"introduce the " <<format[i] <<": ";
        cin >>num[i];
    }
    Date fecha2(num[0],num[1],num[2]);
    */
    Date fecha1(1,2,3);
    Date fecha2(1,2,3);
    vector <int> output,v={20107,20109,20103,20101,20108,20106,20102,20104,20105,10110};
    Date::sort(v);
    for(auto i:v){
        cout <<Date::showDate(i) <<endl;
    }
}