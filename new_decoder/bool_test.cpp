#include <iostream>

using namespace std;

#define FALSE 0
#define TRUE 1

bool debug_mode = FALSE;

int ascii_art;



void ascii_art_01 () {
    cout<<"Art 01:"<<endl<<endl;
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
}

void ascii_art_02 () {
    cout<<"Art 02:"<<endl<<endl;
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
}

void ascii_art_03 () {
    cout<<"Art 03:"<<endl<<endl;
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
}

void ascii_art_04 () {
    cout<<"Art 04:"<<endl<<endl;
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
}

void ascii_art_05 () {
    cout<<"Art 05:"<<endl<<endl;
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
}

void ascii_art_00 (int a) {
    switch (a) {
        case 1: {
            ascii_art_01();
            break;
        }
        case 2: {
            ascii_art_02();
            break;
        }
        case 3: {
            ascii_art_03();
            break;
        }
        case 4: {
            ascii_art_04();
            break;
        }
        case 5: {
            ascii_art_05();
            break;
        }
    }
}

int main () {
    string buffer;
    srand(time(0));
    cout<<"           __..--''``---....___   _..._    __"<<endl;
            cout<<" /// //_.-'    .-/\";  `        ``<._  ``.''_ `. / // /"<<endl;
            cout<<"///_.-' _..--.'_    \\                    `( ) ) // //"<<endl;
            cout<<"/ (_..-' // (< _     ;_..__               ; `' / ///"<<endl;
            cout<<" / // // //  `-._,_)' // / ``--...____..-' /// / // Felix Lee"<<endl;

    

    Random_label:
    cout<<"Press Enter to get a random ASCII Art"<<endl;
    getline(cin,buffer);
    system("cls");
    ascii_art = (rand()%5)+1;
    ascii_art_00(ascii_art);
    goto Random_label;
    /*
    switch (ascii_art) {
        case 1: {
            ascii_art_01();
            goto Random_label;
        }
        case 2: {
            ascii_art_02();
            goto Random_label;
        }
        case 3: {
            ascii_art_03();
            goto Random_label;
        }
        case 4: {
            ascii_art_04();
            goto Random_label;
        }
        case 5: {
            ascii_art_05();
            goto Random_label;
        }
    }*/
    return 0;
}