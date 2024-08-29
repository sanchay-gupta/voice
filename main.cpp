#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;
char ch[100];//to store input command in array
char found[100];//to search

int calci(){
    int a,b;
    char d;
    char c[50];
    string phrase="Okay.so Enter two numbers A and B";
               string command="espeak \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
cout<<"Enter 2 numbers A and B :- ";
cin>>a>>b;
string phrase1="now,type the operation you want to perform";
               string command1="espeak \""+phrase1+"\"";
               const char *charCommand1=command1.c_str();
               system(charCommand1);
cout<<"Type the operation you want to perform:- ";
cin>>c;
if(strcmp(c,"addition")==0 || strcmp(c,"add")==0){
    cout<<"hmm,on adding A and B I got "<<a+b<<endl;
    d=(a+b);
    string phrase="hmm,on adding A and B I got ";
               string command="espeak \""+phrase+d+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
}
else if(strcmp(c,"substraction")==0 || strcmp(c,"substract")==0){
    cout<<"hmm,on substracting B from A I got "<<a-b<<endl;
    d=(a-b);
    string phrase="hmm,on substracting B from A I got ";
               string command="espeak \""+phrase+d+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
}
else if(strcmp(c,"multiplication")==0 || strcmp(c,"multiply")==0){
    cout<<"hmm,on multiplying A and B I got "<<a*b<<endl;
    d=(a*b);
    string phrase="hmm,on multiplying A and B I got ";
               string command="espeak \""+phrase+d+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
}
else {
    cout<<"hmm,on dividing A by B I got "<<a/b<<endl;
    d=(a/b);
    string phrase="hmm,on dividing A by B I got ";
               string command="espeak \""+phrase+d+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
}


}
//greeting function
void wishme(){
//will get current date and time
    time_t now=time(0);
    tm*time=localtime(&now);//time now

    if (time-> tm_hour<12){
    cout<<"Good Morning bhai\n"<<endl;
    string phrase="Good Morning bhai ";
               string command="espeak -vEN+whisper \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
    }
    else if (time-> tm_hour>=12 && time->tm_hour<=16){
    cout<<"Good Afternoon bhai\n"<<endl;
    string phrase="Good Afternoon bhai";
               string command="espeak -vEN+whisper \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
    }
    else if (time-> tm_hour>16 && time->tm_hour<24){
    cout<<"Good Evening bhai\n"<<endl;
    string phrase="Good Evening bhai";
               string command="espeak -vEN+whisper \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
    }
    else{
    cout<<"Good Night And Sweet Dreams Sanchay\n"<<endl;
    string phrase="Good Night And Sweet Sanchay";
               string command="espeak -vEN+whisper \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
    }
    cout<<"This is your virtual brother Sanyam:"<<endl;
     string phrase="This is your virtual brother Sanyam , I am appointing other assistant to do your work ,named zira";
               string command="espeak -vEN+whisper \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            string phrase1="I am appointing other assistant to do your work ,named zira";
               string command1="espeak -vEN+whisper \""+phrase1+"\"";
               const char *charCommand1=command1.c_str();
               system(charCommand1);
    cout<<"\n";
}
//date time function
void datetime(){
    time_t now=time(0);
    char*dt=ctime(&now);
    cout<<"The date and time is:- "<<dt<<endl;
    string phrase="hmm,The date and time is ";
               string command="espeak -vEN+F2 \""+phrase+dt+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);

}

int main()
{
     system("cls");
     char ques[100];
     char say[100];

     cout<<"WELCOME!!!  ";
     string phrase="welcome";
               string command="espeak -vEN \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);


   do
   {
       STARTUPINFO startInfo={0};
       PROCESS_INFORMATION processInfo={0};
       //calling function wishme
       wishme();
       do{
        cout<<"HOW CAN I HELP YOU SIR \n";
        string phrase="HOW CAN I HELP YOU SIR ";
       string command="espeak -vEN+F2 \"" + phrase + "\"";
       const char*charCommand=command.c_str();
       system(charCommand);

        cout<<"\n";
       cout<<"Write a task for me :- ";
       string phrase1="kindly,Write a task for me";
       string command1="espeak -vEN+F2 \"" + phrase1 + "\"";
       const char*charCommand1=command1.c_str();
       system(charCommand1);
        gets(ch);

        if(strcmp(ch,"hi")==0 || strcmp(ch,"hello")==0 || strcmp(ch,"hey")==0 ){
            cout<<"\n";
            cout<<"HELLO BHAI...  ^_^\n\n";
            string phrase="HELLO BHAI";
       string command="espeak -vEN \"" + phrase + "\"";
       const char*charCommand=command.c_str();
       system(charCommand);
        }

        else if(strcmp(ch,"calculate")==0 || strcmp(ch,"calculator")==0){
            calci();
        }

        else if(strcmp(ch,"bye")==0 || strcmp(ch,"stop")==0 || strcmp(ch,"exit")==0 ){
            cout<<"okay then goodbye bhai!!  X_X\n\n";
                string phrase="okay then goodbye bhai";
               string command="espeak -vEN \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            exit(0);
        }

        else if(strcmp(ch,"open powertool")==0){
            cout<<"opening Powertool"<<endl;
            string phrase="opening Powertool";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            system("start C:\Program Files\PowerToys\PowerToys.exe");
        }

        else if(strcmp(ch,"open notepad")==0){
            cout<<"opening Notepad"<<endl;
            string phrase="opening Notepad";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            system("start C:\Windows\notepad.exe");
        }

        else if(strcmp(ch,"open explorer")==0){
            cout<<"opening Explorer"<<endl;
            string phrase="opening Explorer";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            system("start C:\Windows\explorer.exe");
        }

        else if(strcmp(ch,"open google")==0){
            cout<<"opening google..\n";
               string phrase="opening google";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            system("start https://www.google.com/search?q=");
        }

         else if(strcmp(ch,"open youtube")==0){
            cout<<"opening youtube..\n";
               string phrase="opening youtube";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            system("start https://www.youtube.com");
        }


        else if(strcmp(ch,"open my linkedin")==0){
            cout<<"opening LinkedIn..\n";
            string phrase="opening your LinkedIn profile..";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            system("start https://www.linkedin.com/feed/?trk=sem-ga_campid.14650114788_asid.127961666300_crid.651859540488_kw.linkedin%20login_d.c_tid.kwd-12704335873_n.g_mt.e_geo.9151145");
        }

        else if(strcmp(ch,"who are you")==0 || strcmp(ch,"tell me about you")==0 || strcmp(ch,"who are you")==0 ){
            cout<<"I am your sweet virtual brother. My name is sanyam!  O.O\n\n";
            string phrase="I am your sweet virtual brother.My name is sanyam";
               string command="espeak -vEN+whisper \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
        }

         else if(strcmp(ch,"date")==0 || strcmp(ch,"time")==0 || strcmp(ch,"tell me date and time")==0 ){
           // making function datetime for date and time
            datetime();
        }


         else if(strcmp(ch,"convert my text to speech")==0 || strcmp(ch,"text to speech")==0){
            cout<<"Okay , type what you want\n";
             string phrase="Okay , type what you want";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
            do{
            cout<<"SAY:- ";
            if(strcmp(ch,"stop")!=0){
                gets(say);
               string phrase1=say;
               string command1="espeak -vEN \""+phrase1+"\"";
               const char *charCommand1=command1.c_str();
               system(charCommand1);
               }
            else{
            break;
               }
            }
            while(1);

       }

       else{
            cout<<"I am Sorry sir!! I couldn't understand your query kindly try again!!!\n";
            string phrase="I am sorry sir, I couldn't understand your query kindly try again";
               string command="espeak -vEN+F2 \""+phrase+"\"";
               const char *charCommand=command.c_str();
               system(charCommand);
        }

       }
       while(1);


   }
while(1);
    return 0;
}
