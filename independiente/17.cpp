/*If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
The use of "and" when writing out numbers is in compliance with British usage.*/
#include <iostream>
#include <cmath>
using namespace std;
int letters,lettersTotal,limit=1000,thousands,hundreds,tens,ones;

int main(){
    lettersTotal=0;
    for(int i=1;i<=limit;i++){
        letters=0;
        thousands=floor(i/1000);
        hundreds=floor(i/100)-floor(i/1000)*10;
        tens=floor(i/10)-floor(i/100)*10;
        ones=i-floor(i/10)*10;
        if(thousands!=0){
            letters+=8;
            switch(thousands){
            case 1:
                letters+=3;
                break;
            case 2:
                letters+=3;
                break;
            case 3:
                letters+=5;
                break;
            case 4:
                letters+=4;
                break;
            case 5:
                letters+=4;
                break;
            case 6:
                letters+=3;
                break;
            case 7:
                letters+=5;
                break;
            case 8:
                letters+=5;
                break;
            case 9:
                letters+=4;
                break;
            }
        }
        if(hundreds!=0){
            letters+=7;
            switch(hundreds){
            case 1:
                letters+=3;
                break;
            case 2:
                letters+=3;
                break;
            case 3:
                letters+=5;
                break;
            case 4:
                letters+=4;
                break;
            case 5:
                letters+=4;
                break;
            case 6:
                letters+=3;
                break;
            case 7:
                letters+=5;
                break;
            case 8:
                letters+=5;
                break;
            case 9:
                letters+=4;
                break;
            }
        }
        if(tens==1){
            switch(ones){
            case 0:
                letters+=3;
                break;
            case 1:
                letters+=6;
                break;
            case 2:
                letters+=6;
                break;
            case 3:
                letters+=8;
                break;
            case 4:
                letters+=8;
                break;
            case 5:
                letters+=7;
                break;
            case 6:
                letters+=7;
                break;
            case 7:
                letters+=9;
                break;
            case 8:
                letters+=8;
                break;
            case 9:
                letters+=8;
                break;
            }
        }else{
            if(tens!=0){
                switch(tens){
                case 2:
                    letters+=6;
                    break;
                case 3:
                    letters+=6;
                    break;
                case 4:
                    letters+=5;
                    break;
                case 5:
                    letters+=5;
                    break;
                case 6:
                    letters+=5;
                    break;
                case 7:
                    letters+=7;
                    break;
                case 8:
                    letters+=6;
                    break;
                case 9:
                    letters+=6;
                    break;
                }
            }
            if(ones!=0){
            switch(ones){
            case 1:
                letters+=3;
                break;
            case 2:
                letters+=3;
                break;
            case 3:
                letters+=5;
                break;
            case 4:
                letters+=4;
                break;
            case 5:
                letters+=4;
                break;
            case 6:
                letters+=3;
                break;
            case 7:
                letters+=5;
                break;
            case 8:
                letters+=5;
                break;
            case 9:
                letters+=4;
                break;
            }
            }
        }
        if(((tens!=0)||(ones!=0))&&((thousands!=0)||(hundreds!=0))){        //and
            letters+=3;
        }
        lettersTotal+=letters;
    }
    cout <<"Total=" <<lettersTotal;
}