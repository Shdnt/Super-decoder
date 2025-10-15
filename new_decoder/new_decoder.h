#include <iostream>
#include <ctime>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

using namespace std;
int total_attempt=7;
int max_attempt=7;
int different_digits=7;
int code_length=4;
int user_choice;

int extra_mode=0;
bool yes_hint = TRUE;

bool debug_mode = FALSE; //If true will show secret code

char retry;
char hard_mode;
char multi_check;

bool win_con=FALSE;
string buffer;

void tutorials();
void gaming();
void options();
void main_menu();
void extra_menu();
void ascii_art (int a);

void main_menu() {
    Main_menu:
    extra_mode =0;
    cout<<endl;
    cout<<"Main menu:"<<endl;
    cout<<"1. How to play."<<endl;
    cout<<"2. Single player mode."<<endl;
    cout<<"3. Multi player mode."<<endl;
    cout<<"4. Options."<<endl;
    cout<<"5. Exit game."<<endl;
    
    Input_label:
    cout<<"Enter a number from keyboard to select ";
    cin>>user_choice;
    
    //input check
    if (    (cin.fail())  ||    ((user_choice>5)&&(user_choice!=1999)&&(user_choice!=2509)&&(user_choice!=1998))  || ((user_choice<1))  ) {
        cin.clear();
        cout<<endl;
        cout<<"Error. Please enter a valid option."<<endl<<endl;
        cin.ignore(1000,'\n');
        goto Input_label;
    }
    
    //Ignore the remaing inputs
    cin.ignore(1000,'\n');
        
    switch (user_choice) {
        case 1: {
            tutorials();
            system("cls");
            goto Main_menu;
        }
        case 3: {
            multi_check = TRUE;
            gaming();
            system("cls");
            goto Main_menu;
        }
        case 2: {
            multi_check = FALSE;
            gaming();
            system("cls");
            goto Main_menu;
        }
        case 4: {
            options();
            system("cls");
            goto Main_menu;
        }
        case 1999: {
            if (extra_mode == 3) {
                extra_menu();
                goto Main_menu;
            } else {
                cout<<endl;
                cout<<"Error. Please enter a valid option."<<endl<<endl;
                extra_mode ++;
                goto Input_label;
            }
        }
        case 1998: {
            if (extra_mode == 0) {
                extra_menu();
                goto Main_menu;
            } else {
                cout<<endl;
                cout<<"Error. Please enter a valid option."<<endl<<endl;
                extra_mode ++;
                goto Input_label;
            }
        }
        case 2509: {
            string buffer;
            system("cls");
            cout<<endl;
            cout<<"ASCII art #1"<<endl<<endl;
            cout<<"      |\\      _,,,---,,_"<<endl;
            cout<<"ZZZzz /,`.-'`'    -.  ;-;;,_"<<endl;
            cout<<"     |,4-  ) )-,_. ,\\ (  `'-'"<<endl;
            cout<<"    '---''(_/--'  `-'\\_)  Felix Lee"<<endl;
            cout<<endl<<"Goodnight world~~~"<<endl<<endl;
            cout<<"E an Enter de quay lai Main menu nha"<<endl;
            getline(cin,buffer);
            system("cls");
            goto Main_menu;
        }
        case 5: {
            system("cls");
            cout<<endl<<"Good bye. Hope you have fun."<<endl;
            cout<<"Press enter to close the game."<<endl;
            cin.get();
            return;
        }
    }
}

void options () {
    system("cls");
    
    Option_label_02:
    cout<<endl;
    cout<<"Current game settings:"<<endl<<endl;
    if (    (hard_mode == 'Y')  ||  (hard_mode == 'y')  ) {
            cout<<"***Indirect hints enabled***"<<endl;
        } else {
            cout<<"***Indirect hints disabled***"<<endl;
    }
    cout<<"Number of attempts for each game: "<<max_attempt<<endl;
    cout<<"Length of the secret code: "<<code_length<<endl;
    cout<<"The secret code containing integers from 1 to "<<different_digits<<endl<<endl;
    cout<<"Options:"<<endl;
    cout<<"1. Indirect hints"<<endl;
    cout<<"2. Number of attempts"<<endl;
    cout<<"3. Length of secret code"<<endl;
    cout<<"4. Number of different secret code's digits"<<endl;
    cout<<"5. Main menu"<<endl;
    
    Option_label:
    cout<<"Enter a number from keyboard to select ";
    cin>>user_choice;
    
    //input check
    if (    (cin.fail())  ||    (user_choice>5)  || (user_choice<1)  ) {
        cin.clear();
        cout<<endl;
        cout<<"Error. Please enter a valid option."<<endl<<endl;
        cin.ignore(1000,'\n');
        goto Option_label;
    }
    
    //Ignore the remaing inputs
    cin.ignore(1000,'\n');
    
    switch (user_choice) {
        case 1: {
            cout<<"Enable Indirect hints Y/N ? ";
            cin>>hard_mode;            
            //Ignore the remaing inputs
            cin.ignore(1000,'\n');
            system("cls");
            goto Option_label_02;
        }
        case 2: {
            Total_attempt_label:
            cout<<"Enter the total number of attempts for each game ";
            cin>>total_attempt;
            
            //input check
            if (cin.fail() || (total_attempt<1)) {
                cin.clear();
                cout<<endl;
                cout<<"Error. Total number of attempts must be an integer and larger than 1."<<endl;
                cout<<"Please re-enter a valid number"<<endl<<endl;
                cin.ignore(1000,'\n');
                goto Total_attempt_label;
            }
            max_attempt=total_attempt;
            
            //Ignore the remaing inputs
            cin.ignore(1000,'\n');
            
            system("cls");
            goto Option_label_02;
        }
        case 3: {
            Length_label:
            cout<<"Enter the length of the secret code for each game ";
            cin>>code_length;
            
            //input check
            if (cin.fail() || (code_length<1)) {
                cin.clear();
                cout<<endl;
                cout<<"Error. Length of the secret code must be an integer and larger than 0."<<endl;
                cout<<"Please re-enter a valid number"<<endl;
                cin.ignore(1000,'\n');
                goto Length_label;
            }

            //Ignore the remaing inputs
            cin.ignore(1000,'\n');
            
            system("cls");
            goto Option_label_02;
        }
        case 4: {
            Different_label:
            cout<<"Enter the number of different digits for the code ";
            cin>>different_digits;
            
            //input check
            if (    (cin.fail()) || (different_digits<code_length) ) {
                cin.clear();
                cout<<endl;
                cout<<"Error. The number of different digits must be and integer larger than the length of the secret code."<<endl<<endl;
                cin.ignore(1000,'\n');
                goto Different_label;
            }

            //Ignore the remaing inputs
            cin.ignore(1000,'\n');
            
            system("cls");
            goto Option_label_02;
        }
        case 5: {
            exit;
        }
    }
}

void tutorials ()   {
    system("cls");
    string buffer;
    cout<<endl;
    cout<<"How to play:"<<endl;
    cout<<"You have to find the secret code."<<endl;
    cout<<"By default, the code consists of 4 different integers, no duplicates, ranging from 1 to 7."<<endl;
    cout<<"Also, by default, you will have 7 attempts."<<endl;
    cout<<"The number of attempts, length of the code and range of the digits in the code can be customize in Options."<<endl;
    cout<<"After each attempt you will recieve a hint."<<endl<<endl;  
    cout<<"Direct hints and Indirect hints: "<<endl; 
    cout<<"Direct hints will check each digits and give hints on each digits individually."<<endl;
    cout<<"Indirect hints will check each attempts as an entire code."<<endl<<endl;
    cout<<"Example: The code is 1 2 3 4. You guessed 5 3 6 4."<<endl<<endl;
    cout<<"*Direct hints will return {_ X X O}. Indicating that the 1st and 3rd number is incorrect, the 2nd number is correct but not in the correct position and the 4th number is correct and in the correct position."<<endl;
    cout<<"*Indirect hints will return {O X _ _}. Indicating that one number is correct and in the correct position, one number is correct but not in the correct position and two incorrect numbers."<<endl;
    cout<<endl<<"In single player mode, you will play against the computer."<<endl;
    cout<<"In multi player mode, player 1 will set the code, player 2 will have to find the code."<<endl<<endl;
    cout<<"Press Enter to goto main menu.";
    getline(cin,buffer);
}

void gaming()   {
    Setup_label:
    //console_clear_screen();
    system("cls");
    //system("clear");
    
    if (yes_hint == TRUE) {
        if (hard_mode=='y' || hard_mode=='Y') {
    	    cout<<endl<<"***Indirect hints enabled***"<<endl<<endl;	
        } else {
            cout<<endl<<"***Direct hints enabled***"<<endl<<endl;
        }
    } else if (yes_hint == FALSE) {
        cout<<endl<<"***No hints available for this game***"<<endl<<endl;
    }
    
    int user_num[code_length];
    int result_check[code_length];
    int digits[different_digits];
    total_attempt = max_attempt;
    
    //Populate the digits array with numbers from 1 to different_digits
    for (int i =0; i<different_digits;i++) {
        digits[i] = i + 1;
    }
    
    int secret_code[different_digits];    
    int max_code_length = different_digits;
    
    //Generate the secret code
    while(max_code_length > different_digits - code_length) {
        int index=rand()%max_code_length;
        secret_code[different_digits-max_code_length]=digits[index];
        digits[index]=digits[max_code_length-1];
        max_code_length--;
    }
    
    //If multi player is selected, prompt player one to override the secret code
    if (multi_check) {
        cout<<"Player one's turn."<<endl;
        cout<<"Please enter a "<<code_length<<"-digit code."<<endl;
        cout<<"The code should consists of different integers between 1 and "<<different_digits<<"."<<endl;
        cout<<"Remember to keep the code a secret."<<endl;
        
        Multi_label:
        for (int i =0; i<code_length; i++){
            cin>>secret_code[i];
        
            //Input check
            if (    (cin.fail())  ||    (secret_code[i]>different_digits)  || (secret_code[i]<1)  ) {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<endl;
                cout<< "Error. Please enter only integers between 1 and "<<different_digits<<"."<<endl;
                cout<<"Please re-enter "<<code_length<<" different integers." << endl;
                goto Multi_label;
            }   
        }

        bool dup_check = FALSE;

        for (int i =0; i<code_length;i++) {
            for (int j = i+1; j<code_length; j++) {
                if (secret_code[i] == secret_code[j]) {
                    dup_check = TRUE;
                }
            }
        }

        if (dup_check) {
            cout<<"Error. The code must consist of "<<code_length<<" different integers."<<endl;
            cout<<"Please re-enter "<<code_length<<" different integers." << endl;
            goto Multi_label;
        }
        
        //Ignore the remaing inputs
        cin.ignore(1000,'\n');
                
        //Let player one confirm the code
        cout<<endl<<"The secret code is: ";
        for (int i =0; i<code_length; i++) {
            cout<< secret_code[i]<<" ";
        }
        cout<<endl;
        cout<<"Continue to player two's turn Y/N ? ";
        char roll_back;
        cin>>roll_back;
        if (roll_back == 'N' || roll_back == 'n') {
            cout<<"Please re-enter "<<code_length<<" different integers."<<endl;
            goto Multi_label;
        } else {
            //Clear the console screen
            system("cls");
        }

        if (yes_hint == TRUE) {
            if (hard_mode=='y' || hard_mode=='Y') {
    	        cout<<endl<<"***Indirect hints enabled***"<<endl<<endl;	
            } else {
                cout<<endl<<"***Direct hints enabled***"<<endl<<endl;
            }
        } else {
            cout<<endl<<"***No hints available for this game***"<<endl<<endl;
        }

        cout<<endl;
        cout<<"Player two's turn."<<endl;
        cout<<"You have "<<total_attempt<<" attempts to find the secret code."<<endl;
    }
    
    //Print the secret code for testing purposes
    if (debug_mode) {
        for (int i =0; i<code_length; i++) {
            cout<< secret_code[i]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Good luck. Have fun."<<endl<<endl;
   
    Label_00:
    cout << "Enter "<<code_length<<" integers from 1 to ";
    cout<<different_digits<<"."<<endl;
    
    //Get input from user
    Label_02:
    for (int i =0; i<code_length; i++){
        cin>>user_num[i];
        
        //Input check
        if (    (cin.fail())  ||    (user_num[i]>different_digits)  || (user_num[i]<1)  ) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<endl;
            cout<< "Error. Please enter only integers between 1 and ";
            cout<<different_digits<<"."<<endl;
            cout<<"Please re-enter "<<code_length<<" different integers." << endl;
            goto Label_02;
        }
    }
    
    //Ignore the remaing inputs
    cin.ignore(1000,'\n');
        
    //Check user input to get Direct hints
    for (int i =0; i<code_length; i++) {
        result_check[i] = 0;
        if (user_num[i] == secret_code[i]) {
            result_check[i] = 3;
        } else {
            for (int j =0; j<code_length; j++) {
                if (user_num[i] == secret_code[j]) {
                    result_check[i]=2;
                    break;
                }
            }
        }
    }
    
    //Sort the result_check array from largest to smallest to get Indirect hints
    if (hard_mode == 'Y' || hard_mode == 'y') {
        int buffer;
        for (int i = 0; i<code_length; i++) {
            for (int j = 0; j<code_length; j++)   {
                if (result_check[i]>result_check[j]) {
                    buffer=result_check[i];
                    result_check[i]=result_check[j];
                    result_check[j]=buffer;
                    buffer = 0;
                }
            }
        }
        
    }
    
    //Winning condition all elements of result_check array equal 3
    win_con = TRUE;
    for (int i =0; i<code_length;i++) {
        if (result_check[i] != 3) {
            win_con = FALSE;
        }
    }
    
    if (win_con) {
        cout<<endl<<"Congratulations";
        if (multi_check) {  cout<< " player two ";  }
        cout<<"! You found the secret code in "<<max_attempt + 1 - total_attempt<<" attempt";
        if (max_attempt + 1 - total_attempt > 1) {    cout<<"s";  }
        cout<<"."<<endl;
        cout<<endl<<endl<<"Play again Y/N ? ";
        goto End_label;
    }
    
    if (yes_hint) {
        cout<<"Guess result: "<<endl;
        for (int i=0; i<code_length; i++) {
            switch (result_check[i]) {
                case 3: {
                    cout<<"O";  break;
                }
                case 2: {
                    cout<<"X";  break;
                }
                default:    {
                    cout<<"_";  break;
                }
            }
            cout<<" ";
        }
        cout<<endl;
    } else {
        cout<<"Incorrect!"<<endl;
    }

    cout<<endl;
    
    while (total_attempt>1) {
    	total_attempt--;
    	cout<< total_attempt<<" attempt";
    	if (total_attempt > 1) {    cout<<"s";   }
    	cout<<" remaining."<<endl;
    	goto Label_00;
    }
    
    //Show the secret code after last attempt
    cout<<"The secret code is: ";
    for (int i =0; i<code_length; i++) {  cout << secret_code[i]<<" "; }
    cout<<endl<<endl<<"Better luck next time."<<endl<<endl;
    cout<<"Try again Y/N ? ";
    
    End_label:
    cin>>retry;

    //Ignore remaining inputs
    cin.ignore(1000,'\n');

    if (retry=='y' || retry=='Y') {
    	goto Setup_label;	
    }
    exit;
}

void extra_menu() {
    Extra_menu:
    system("cls");
    cout<<endl;
    cout<<"Extras:"<<endl;
    cout<<"1. Show secret code"<<endl;
    cout<<"2. Gambling mode"<<endl;
    cout<<"3. Random ASCII art #2-10"<<endl;
    cout<<"4. Main menu"<<endl;
    
    Input_label:
    cout<<"Enter a number from keyboard to select ";
    cin>>user_choice;
    
    //input check
    if (    (cin.fail())  ||    ((user_choice>4))  || ((user_choice<1))  ) {
        cin.clear();
        cout<<endl;
        cout<<"Error. Please enter a valid option."<<endl<<endl;
        cin.ignore(1000,'\n');
        goto Input_label;
    }
    
    //Ignore the remaing inputs
    cin.ignore(1000,'\n');
        
    switch (user_choice) {
        case 1: {
            system("cls");
            debug_mode = !debug_mode;
            cout<<endl;
            if (debug_mode) {
                cout<<"***Debug mode enabled***"<<endl;
                cout<<"The secret code will be shown before the first attempt"<<endl;
            } else {
                cout<<"***Debug mode disabled***"<<endl;
                cout<<"The secret code will not be shown before the first attempt"<<endl;
            }
            cout<<endl;
            cout<<"Press Enter to return to Extras."<<endl;
            getline(cin,buffer);
            goto Extra_menu;
        }
        case 2: {
            system("cls");
            if (yes_hint) {
                total_attempt=5;
                max_attempt=5;
                different_digits=100;
                code_length=1;
                yes_hint = FALSE;
                cout<<endl;
                cout<<"***Gambling mode enabled***"<<endl;
                cout<<"Maximum attempts is 5"<<endl;
                cout<<"The secret code have 1 digit between 1 and 100"<<endl;
                cout<<"Hints disabled"<<endl;
            } else {
                total_attempt=7;
                max_attempt=7;
                different_digits=7;
                code_length=4;
                yes_hint = TRUE;
                cout<<endl;
                cout<<"***Gambling mode disabled***"<<endl;
                cout<<"Maximum attempts is 7"<<endl;
                cout<<"The secret code have 4 digits between 1 and 7"<<endl;
                cout<<"Hints enabled"<<endl;
            }
            cout<<endl;
            cout<<"Press Enter to return to Extras."<<endl;
            getline(cin,buffer);
            goto Extra_menu;
        }
        case 3: {
            system("cls");
            cout<<endl;
            ascii_art((rand()%9)+2);
            cout<<endl;
            cout<<"Press Enter to return to Extra menu"<<endl;
            getline(cin,buffer);
            system("cls");
            goto Extra_menu;
        }
        case 4: {
            system("cls");
            extra_mode =0;
            return;
        }
    }
}

void ascii_art (int number) {
    cout<<"ASCII art #"<<number<<endl;
    cout<<endl;
    switch (number) {
        case 10: {
            //Art
            break;
        }
        case 2: {
            cout<<"  ,-.       _,---._ __  / \\"<<endl;
            cout<<" /  )    .-'       `./ /   \\"<<endl;
            cout<<"(  (   ,'            `/    /|"<<endl;
            cout<<" \\  `-\"             \\'\\   / |"<<endl;
            cout<<"  `.              ,  \\ \\ /  |"<<endl;
            cout<<"   /`.          ,'-`----Y   |"<<endl;
            cout<<"  (            ;        |   '"<<endl;
            cout<<"  |  ,-.    ,-'         |  /"<<endl;
            cout<<"  |  | (   |        hjw | /"<<endl;
            cout<<"  )  |  \\  `.___________|/"<<endl;
            cout<<"  `--'   `--'"<<endl;
            break;
        }
        case 3: {
            cout<<"           __..--''``---....___   _..._    __"<<endl;
            cout<<" /// //_.-'    .-/\";  `        ``<._  ``.''_ `. / // /"<<endl;
            cout<<"///_.-' _..--.'_    \\                    `( ) ) // //"<<endl;
            cout<<"/ (_..-' // (< _     ;_..__               ; `' / ///"<<endl;
            cout<<" / // // //  `-._,_)' // / ``--...____..-' /// / //"<<endl;
            break;
        }
        case 4: {
            //Art
            break;
        }
        case 5: {
            //Art
            break;
        }
        case 6: {
            //Art
            break;
        }
        case 7: {
            //Art
            break;
        }
        case 8: {
            //Art
            break;
        }
        case 9: {
            //Art
            break;
        }

    }
    return;
}