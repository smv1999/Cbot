#include<iostream>
#include<string.h>
#include<conio.h>
#include<Windows.h>
#include<stdio.h>
#include<fstream>
#include<ctime>
#include<bits/stdc++.h>
#include<dos.h>
#include<math.h>
char mood[100],author[100];
unsigned int shop;
char outing[70];
using namespace std;
class chatbot{
    char s[50];
    char ans[10];
public:
    void menu1()
    {
        cout<<" 1.Google search \n 2.Watch videos on youtube \n 3.open URL of any website \n 4.Mathematical calculator \n 5.Calender \n 6.Learn \n 7.Exit\n";
    }
    void menu2()
    {
        cout<<" 1.Google search \n 2.Watch videos on youtube \n 3.open URL of any website \n 4.About this project \n 5.Calender \n 6.Looking for Job! \n 7.Matrimonial sites \n 8.Exit\n";
    }
    void menu3()
    {
        cout<<" 1.Google search \n 2.Watch videos on youtube \n 3.Play online Games \n 4.watch cartoons \n 5. Fun Learn \n 6.Exit\n";
    }
    void google(){
         HWND hwnd = GetDesktopWindow();

         ShellExecute(hwnd, "open", "http://www.google.com", NULL, NULL,SW_SHOWNORMAL);
         cout<<"\n";

        }
    void youtube()
    {
        HWND hwnd = GetDesktopWindow();

        ShellExecute(hwnd, "open", "http://www.youtube.com", NULL, NULL,SW_SHOWNORMAL);
        cout<<"\n";

    }
    void urlweb()
    {   cout<<" Enter the website URL:";
        cin>>s;
        HWND hwnd = GetDesktopWindow();

        ShellExecute(hwnd, "open",s, NULL, NULL,SW_SHOWNORMAL);
        cout<<"\n";

    }
    void onlinegames()
    {   HWND hwnd = GetDesktopWindow();

        ShellExecute(hwnd, "open","http://www.friv.com/", NULL, NULL,SW_SHOWNORMAL);
        cout<<"\n";

    }
    void cartoon()
    {   HWND hwnd = GetDesktopWindow();

        ShellExecute(hwnd, "open","http://www.disney.in/", NULL, NULL,SW_SHOWNORMAL);
        cout<<"\n";

    }
    void learn()
    {   HWND hwnd = GetDesktopWindow();

        ShellExecute(hwnd, "open","https://www.funbrain.com/", NULL, NULL,SW_SHOWNORMAL);
        cout<<"\n";
    }
    void learnbig()
    {   HWND hwnd = GetDesktopWindow();

        ShellExecute(hwnd, "open","https://byjus.com/", NULL, NULL,SW_SHOWNORMAL);
        cout<<"\n";

    }
    void job()
    {   HWND hwnd = GetDesktopWindow();

        ShellExecute(hwnd, "open","https://www.naukri.com/", NULL, NULL,SW_SHOWNORMAL);
        cout<<"\n";

    }
    void wed()
    {
        cout<<"\nSo, Are you married?\n";
        cin>>ans;
        if(strcmpi(ans,"no")==0){
            cout<<"\nOkay! Let me take you to a tour!\n";
            HWND hwnd = GetDesktopWindow();

            ShellExecute(hwnd, "open","https://www.bharatmatrimony.com/", NULL, NULL,SW_SHOWNORMAL);
            cout<<"\n";
        }
        else if(strcmpi(ans,"yes")==0){
            cout<<"\nSo, you are looking for some body else\n?";
            cout<<"\nAnyway!\n";
            HWND hwnd = GetDesktopWindow();

            ShellExecute(hwnd, "open","https://www.bharatmatrimony.com/", NULL, NULL,SW_SHOWNORMAL);
            cout<<"\n";
        }

    }

};
class mathcalc:public chatbot
{
    int a,b;
public:
    void menu()
    {
        cout<<"\n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION \n5.FACTORIAL \n6.SQUAREROOT \n7.EXIT \n";
    }
    int add()
    {   cout<<" Enter two numbers:";
        cin>>a>>b;
        return(a+b);
    }
    int sub()
    {   cout<<" Enter two numbers:";
        cin>>a>>b;
        return(a-b);
    }
    int mul()
    {   cout<<" Enter two numbers:";
        cin>>a>>b;
        return(a*b);
    }
    int div()
    {   cout<<" Enter two numbers:";
        cin>>a>>b;
        try{
            if(b!=0){
              return(a/b);}
             else{
                throw(b);
             }
        }
        catch(int i)
        {
            cout<<"\nZeroDivisionError! Exception caught!..."<<i<<endl;
        }

    }

    int fact()
    {
        cout<<"enter the number:";
        cin>>a;
        if(a==0)
            return 1;
        else

        {
            int fact=1;
            for(int i=a;i>=1;i--)
            fact*=i;
            return fact;
        }

    }
    double squareroot()
    {
    cout<<"enter the number:";
    cin>>a;
    return sqrt(a);
    }
};
void bot()
{   char namebot[50]; char s[]=" I am a Chatbot";
    cout<<"\n################################################################################\n\n";
    cout<<"                                                        ";
    time_t tt;
    struct tm * ti;
    time (&tt);
    ti = localtime(&tt);
    cout<< asctime(ti);
    for(int i=0;i<=strlen(s);i++)
    {   Sleep(250);
        cout<<s[i];
    }
    cout<<"\n";
    cout<<"\n Hey! I want you to name me...\n What is my name?\n";cout<<" ";
    gets(namebot);
    char s2[]=" Cool! That is great!";
    cout<<namebot<<"! ";
    for(int i=0;i<=strlen(s2);i++)
    {
        Sleep(250);
        cout<<s2[i];
    }
    cout<<"\n";
}
int dayNumber(int day, int month, int year)
{

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1,
                       4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 +
             year/400 + t[month-1] + day) % 7;
}
string getMonthName(int monthNumber)
{
    string months[] = {"January", "February", "March",
                       "April", "May", "June",
                       "July", "August", "September",
                       "October", "November", "December"
                      };

    return (months[monthNumber]);
}
int numberOfDays (int monthNumber, int year)
{
    // January
    if (monthNumber == 0)
        return (31);

    // February
    if (monthNumber == 1)
    {
        // If the year is leap then February has
        // 29 days
        if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
            return (29);
        else
            return (28);
    }

    // March
    if (monthNumber == 2)
        return (31);

    // April
    if (monthNumber == 3)
        return (30);

    // May
    if (monthNumber == 4)
        return (31);

    // June
    if (monthNumber == 5)
        return (30);

    // July
    if (monthNumber == 6)
        return (31);

    // August
    if (monthNumber == 7)
        return (31);

    // September
    if (monthNumber == 8)
        return (30);

    // October
    if (monthNumber == 9)
        return (31);

    // November
    if (monthNumber == 10)
        return (30);

    // December
    if (monthNumber == 11)
        return (31);
}

// Function to print the calendar of the given year
void printCalendar(int year)
{
    printf ("         Calendar - %d\n\n", year);
    int days;

    // Index of the day from 0 to 6
    int current = dayNumber (1, 1, year);
    for (int i = 0; i < 12; i++)
    {
        days = numberOfDays (i, year);

        // Print the current month name
        printf("\n  ------------%s-------------\n",
               getMonthName (i).c_str());

        // Print the columns
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        // Print appropriate spaces
        int k;
        for (k = 0; k < current; k++)
            printf("     ");

        for (int j = 1; j <= days; j++)
        {
            printf("%5d", j);

            if (++k > 6)
            {
                k = 0;
                printf("\n");
            }
        }

        if (k)
            printf("\n");

        current = k;
    }

    return;
}
void fun()
{
            cout<<"\nAre you sure you want to exit now?\n";
            cout<<"\nAm I not your friend?\n";
            cout<<"\nHmmm...?\n";
            cout<<"\nCome on let us chat for some time and see what each of us are up to!\n";
            cout<<"\nSo, what do you feel like doing now?\n ";
            cin>>mood;
            if(strcmpi(mood,"sleeping")==0)
            {
                cout<<"\nokay! sweet dreams! Bye!\n";
            }
            else if(strcmpi(mood,"reading")==0)
            {
                cout<<"\nokay that is nice!\n";
                cout<<"\nWhich Author do you like the most? ";
                cin>>author;
                cout<<"\nHmmm..great!\n";
                cout<<"\nGo and spend your time reading some good books of "<<author;
                cout<<"\nsee you later!\n";
            }
            else if(strcmpi(mood,"shopping")==0)
            {
                cout<<"\nAh! That sounds splendid!\n";
                cout<<"\nDo you want to shop on-line or off-line? ";
                cout<<"\n(on-line/off-line) : (1/2):";
                cin>>shop;
                if(shop==1)
                {
                    HWND hwnd = GetDesktopWindow();

                    ShellExecute(hwnd, "open", "www.amazon.in", NULL, NULL,SW_SHOWNORMAL);
                }
                else{
                    cout<<"\nokay! Where are you going for shopping? ";
                    cin>>outing;
                    cout<<"\nOh! That is a wonderful place to shop!\n";
                    cout<<"\nSee you later!\n";
                }
            }
            else{
                cout<<"\nokay! See you later!\n";
                cout<<"\nBye!!!";
            }
}
int main()
{
    unsigned int dayNumber(int,int,int);
    string getMonthName(int);
    unsigned int numberofDays(int,int);
    void printCalender(int);
    mathcalc b;
    char ch[20];
    int choice,v,res;
    char cont='y';
    unsigned int age;
    int sml=1,counter=0;
	char car=sml,choicefactor;
	ifstream ifile("abstract.txt");
    bot();
    cout<<"\n what is your age?\n";
    cout<<" I am asking this just to provide appropriate services according to your age...\n";
    cout<<" please enter...";
    cin>>age;
    if(age>=14 and age<=21)
    {
    cout<<" Hello Sir/Madam! How may I be of your assistance?\n\n";
    cout<<"\n Do you want to say something?(just say hello!)\n";
    cin>>ch;
    if(strcmp(ch,"hello")==0){
        while (cont=='y'){
        label1:
        cout<<" okay ! Now what are you waiting for?\nchoose your option:\n\n";
        b.chatbot::menu1();
        cin>>choice;
        if (choice==1)
           {b.google();}
        else if(choice==2){
           b.youtube();}
        else if(choice==3){
           b.urlweb();}
        else if(choice==4){
           b.mathcalc :: menu();
           cout<<" What operation do you want to perform?";
           cin>>v;
           switch(v)
           {
            case 1:
                res=b.add();
                cout<<"your result is:"<<res<<endl;
                break;
            case 2:
                res=b.sub();
                cout<<"your result is:"<<res<<endl;
                break;
            case 3:
                res=b.mul();
                cout<<"your result is:"<<res<<endl;
                break;
            case 4:
                res=b.div();
                cout<<"your result is:"<<res<<endl;
                break;
            case 5:
                res=(double)b.fact();
                cout<<"your result is:"<<res<<endl;
                break;
            case 6:
                res=b.squareroot();
                cout<<"your result is:"<<(double)res<<endl;
                break;
            case 7:
                break;
            default: cout<<" Invalid Choice! Please Enter the correct option!"<<endl;

        }
        }
     else if(choice==5){
            unsigned int year;
            cout<<"CALENDER\n";
            cout<<"Enter the year:";
            cin>>year;
            printCalendar(year);
}
else if(choice==6){
    b.learnbig();
}
     else if(choice==7){
        fun();
        cout<<"\nEXIT!\n";
        break;}

    else {cout<<" Invalid choice!!!\n Please Enter the correct option!";}
    cout<<"\nSir/Madam, Do you want to continue and need help from me?(y/n)";
    cin>>cont;
    cout<<"\n";
    if(cont=='n'){
            cout<<"Are you well updated with the current trending News?\n";
            cout<<car<<car<<car;
            cout<<"\nSo, let us get some News updates now!";
            Sleep(1800);
            HWND hwnd = GetDesktopWindow();

            ShellExecute(hwnd, "open", "https://news.google.co.in/", NULL, NULL,SW_SHOWNORMAL);
            cout<<"\nSo, you gained some General Knowledge.";
    }
    }
}
else{
    cout<<"Eh! Fine Anyways...\n";
    goto label1;
}
}
else if(age<=13){
        cout<<"\n Hey! What is up?";
        cout<<"\n What do you want me to do for you?";
        cout<<"\n Hey Kid! Say something!(just say hello)\n";
        cin>>ch;
        if(strcmp(ch,"hello")==0){
        while (cont=='y'){
        label2:
        cout<<" okay ! Now what are you waiting for?\nchoose your option:\n\n";
        b.chatbot::menu3();
        cin>>choice;
        if (choice==1)
           {b.google();}
        else if(choice==2){
           b.youtube();}
        else if(choice==3){
           b.onlinegames();}
        else if(choice==4){
           b.cartoon();}
        else if(choice==5){
           b.learn();}
        else if(choice==6){
            fun();
            cout<<"\nEXIT!\n";
            break;}

        else {cout<<"Invalid choice!!! Please Enter the correct option!\n";}
        cout<<"\nSir/Madam, Do you want to continue and need help from me?(y/n)";
        cin>>cont;
        }
        if(cont=='n'){
            cout<<"Are u well updated with the current trending News?\n";
            cout<<car<<car<<car;
            cout<<"\nSo, let us get some News updates now!";
            Sleep(1800);
            HWND hwnd = GetDesktopWindow();

            ShellExecute(hwnd, "open", "https://news.google.co.in/", NULL, NULL,SW_SHOWNORMAL);
            cout<<"\n";
            cout<<"\nSo, you gained some General Knowledge.";

        }
}
else{
    cout<<"Eh! Fine Anyways...\n";
    cout<<car<<car<<car<<endl;
    goto label2;
}


}
else if(age>=22 and age<=120){
    unsigned int d;
    cout<<" Hello Sir/Madam! How may I be of your assistance?\n";
    cout<<" Do you want to say something?(just say hello!)\n";
    cin>>ch;
    if(strcmp(ch,"hello")==0){
        while (cont=='y'){
        label3:
        cout<<" okay ! Now what are you waiting for?\nchoose your option:\n\n";
        b.chatbot::menu2();
        cin>>choice;
        if (choice==1)
           {b.google();}
        else if(choice==2){
           b.youtube();}
        else if(choice==3){
           b.urlweb();}
        else if(choice==4){
                cout<<"Do you to display the abstract on the screen or as a document? \n choose (screen/document:1/2):";
                cin>>d;
                char l;
                if(d==1){
                    while(!ifile.eof())
                    {
                        ifile.get(l);
                        cout<<l;
                    }
                }
                else{

                  HWND hwnd = GetDesktopWindow();

                  ShellExecute(hwnd, "open", "https://docs.google.com/document/d/1Z4ZdWRuKZ4DfmMXcN8IjkQHxpUyt7C5c707RbuxX6eQ/edit?usp=sharing", NULL, NULL,SW_SHOWNORMAL);
                  cout<<"\n";
                }
                ifile.close();

        }
        else if(choice==5){
            unsigned int year;
            cout<<"CALENDER\n";
            cout<<"Enter the year:";
            cin>>year;
            printCalendar(year);

        }
        else if(choice==6){
          b.job();
        }
        else if(choice==7){
          b.wed();
        }
        else if(choice==8){
            fun();
            cout<<"\nEXIT!\n";
            break;}

        else {cout<<"Invalid choice!!! Please Enter the correct option!\n";}
        cout<<"\nSir/Madam, Do you want to continue and need help from me?(y/n)";
        cin>>cont;
        }
        if(cont=='n'){
            cout<<"Are u well updated with the current trending News?\n";
            cout<<car<<car<<car;
            cout<<"\nSo, let us get some News updates now!";
            Sleep(1800);
            HWND hwnd = GetDesktopWindow();

            ShellExecute(hwnd, "open", "https://news.google.co.in/", NULL, NULL,SW_SHOWNORMAL);
            cout<<"\n";
            cout<<"\nSo, you gained some General Knowledge.";

        }
}
else{
    cout<<"Eh! Fine Anyways...\n";
    cout<<car<<car<<car<<endl;
    goto label3;
}

}
else{
    cout<<"Invalid!!!\n";
    cout<<"could not help you!\n";
}
    return 0;
}

