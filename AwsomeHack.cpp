#include <iostream>
#include <Windows.h>
#include <ctime>

void PrintGameHeader(int Max)
{
    std::cout << R"(                                                                                
                                                                                
                                                                                
                                            ..%&&&&&&&&&&&%..                               
                                     .*&&&&&&&                &&&&,,           &&&&#*       
                      &.&&#.     .&&&&&  ./    /..&&&&#../    /.    %&&.       &&&&#*       
                      &&&&&,  ,&&&&#,   ,      #&&&&&&  #*      .   .    &,    &&&&#*       
                       ,%,&&#.  #.  .          #&&&&&&  #*        *... &&&&&&&&&&&&%*       
                          &&&.&# ,                &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%*       
                        &&&#. /#.%&&#.           #&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%*       
                      .&&&#  ,#,&&#(#,            &&&&&&&&&&&&&&&&&&&&&&&&&&&&%%....        
                     .&&#,*        #.&#/(                      .&&&&&&&&&&&,  ,&  .        
                    .&&&,(,#..(        #, ,    #/*&&&&#*/        ,&&&&&&&&&&*(,(,&  .       
                    &&&#    # (            .  &(,  ,%*(#.&&*  (  .&&&&&&&&&&*    &&         
                   .&&#.(,  # (            *%. #,  ,%*  , #.&.  (.&&&&&&&&&&*  ,(.&  .      
                   /&&%//  (#./    #    %(,(%  /.&,&&#.(./(#%&.//*&&& %%% &%,  (/(&&#,      
                    &&  (     (    %(  #%#&/%&&&#*&%&&(.&&  %%#  *&&&%&&& &&*///  &&        
                   /&&(//%%%& /%(  #(  (#(*(  #/ & %&#.(,(  %&,#/.%&&&% &&%&,/(//(&&#,      
                   .&&#,(*  # (            *%.&#/(#,%*(#.&# &,  (,&&&&&&&&&&*  ,(,&  ,      
                    &&&#    # (            %#(&(,  ,%*(#. &*    #,&&&&&&&&&&*    &&         
                    .&&&.(,#. (        #,#,    #/,&&&&(,/(      #,&&&&&&&&&&*(,(,&  ,       
                     ,&&#,(/        #,&#                        ,&&&&&&&&&&&&  *  #.        
                      .&&&#  ,#*&&#,#,(          #&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%%%%        
                        &&&#.  #.#&&%,(          #&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%%*       
                         # &&,&,(,                &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%*       
                       %&. &#(  #.  .          # &&&&&  #*        ...%&&&&&&&&&&&&%%*       
                     %&&&&&.  .&&&&#.  (,%      &&&&&&  #*(    #.  (.  #&&,    &&&&#*       
                     .#*&&#,     ,&&&&&  ,/    /,,&&&%#,,/    /,  #&&&&,       &&&&#*       
                                     .,&&&&&&&              #&&&&&,*           &&&&#*       
                                            ..#&&&&&&&&&&&#,,                   .,,.        
                                                                                
                                                                                )" << std::endl;
    std::cout << R"(        $$$$$$$\   $$$$$$\  $$\   $$\ $$\   $$\       $$\   $$\  $$$$$$\   $$$$$$\  $$\   $$\ 
        $$  __$$\ $$  __$$\ $$$\  $$ |$$ | $$  |      $$ |  $$ |$$  __$$\ $$  __$$\ $$ | $$  |
        $$ |  $$ |$$ /  $$ |$$$$\ $$ |$$ |$$  /       $$ |  $$ |$$ /  $$ |$$ /  \__|$$ |$$  / 
        $$$$$$$\ |$$$$$$$$ |$$ $$\$$ |$$$$$  /        $$$$$$$$ |$$$$$$$$ |$$ |      $$$$$  /  
        $$  __$$\ $$  __$$ |$$ \$$$$ |$$  $$<         $$  __$$ |$$  __$$ |$$ |      $$  $$<   
        $$ |  $$ |$$ |  $$ |$$ |\$$$ |$$ |\$$\        $$ |  $$ |$$ |  $$ |$$ |  $$\ $$ |\$$\  
        $$$$$$$  |$$ |  $$ |$$ | \$$ |$$ | \$$\       $$ |  $$ |$$ |  $$ |\$$$$$$  |$$ | \$$\ 
        \_______/ \__|  \__|\__|  \__|\__|  \__|      \__|  \__|\__|  \__| \______/ \__|  \__|)" << std::endl << std::endl << std::endl;
    std::cout << "\n*******We are the best bank robbers ever !! We are awsome!! We are so awsome!! We are really awsome!!";
    std::cout << "\n*******Currently we are in the middle of robbing an awsome bank!!";
    std::cout << "\n*******We need your awsome ability to hack codes to open the safe!!";
    std::cout << "\n*******We Promise you an awsome share of the booty!!";
    std::cout << "\n*******There are " << Max << " awsome doors including the awsome safe door!!";
    std::cout << "\n*******Do your best awsome hacker!!";
    std::cout << "\n\n ****Oh!! Be Cautious!! Thee failures in opening a door will start the alarm!! Awsome isn't it?";
}
void PrintWinFooter()
{
    std::cout << R"(
                                                 ,/#/*.,,*(#/,                              
                           .   .          .%.   .,&    #    (*    .%.                       
                         #. ##( **,    (    ,(,#/.           ./(*/*    #                    
                        %(,     **, ( .//#/,                       ,/((/  (                 
                        %(...#. **,#* ##                              ./( /#/               
                        %(. //* **, (#                                   ((   (             
                        %(.     **,/                                       /.((,            
                        %(.     **,                                         %*  ..          
                        %(.     **,                                          /,*((          
                     ..%%#. , * **,                ..               ,        .(   ,         
                     .. %(.     **,               ,.                 ,        /   (         
                     ., %(.     **,            (                          ..  ( (*/         
                     ..*%(. . , **,            ,.                            ./   *         
                      * &(.     **,        ..    #     ..         #          (//.*          
                        %(.     **,     (    *  .,,&*. .&%#%#%%##%%,    #   *(   ,          
                        %(.     **,/   /    /       /  ,      ,          / ##* ..           
                        %(. *.( **,.*.  ,    #      ,  /      %          */   ,             
                        %(.     **, (.*,   / .,*#%######%..,,(&########&*./  *              
                        %(.     **,*.  ,//#       *    / .     (    **/,  .*                
                         #. * / **,   #,    (/(. *      (      ((*(   .*#                   
                         .(/////(*       ,/*/,   /*//////////*   */,(,                      
                                           (#,.   //.   .,#/                           )" << std::endl;
    std::cout << R"(         $$$$$$\   $$$$$$\  $$$$$$$$\ $$$$$$$$\        $$$$$$\  $$$$$$$\  $$$$$$$$\ $$\   $$\ 
        $$  __$$\ $$  __$$\ $$  _____|$$  _____|      $$  __$$\ $$  __$$\ $$  _____|$$$\  $$ |
        $$ /  \__|$$ /  $$ |$$ |      $$ |            $$ /  $$ |$$ |  $$ |$$ |      $$$$\ $$ |
        \$$$$$$\  $$$$$$$$ |$$$$$\    $$$$$\          $$ |  $$ |$$$$$$$  |$$$$$\    $$ $$\$$ |
         \____$$\ $$  __$$ |$$  __|   $$  __|         $$ |  $$ |$$  ____/ $$  __|   $$ \$$$$ |
        $$\   $$ |$$ |  $$ |$$ |      $$ |            $$ |  $$ |$$ |      $$ |      $$ |\$$$ |
        \$$$$$$  |$$ |  $$ |$$ |      $$$$$$$$\        $$$$$$  |$$ |      $$$$$$$$\ $$ | \$$ |
        \______/ \__|  \__|\__|      \________|       \______/ \__|      \________|\__|  \__|)";
    std::cout << "\n\n####CONGRATILATION!! AWSOME!! You opened the safe!! Your Share will be sent to you shortly!!####\n########Spend it wisely!!##########\n\n";
}
void PrintLoseFooter()
{
    std::cout << R"(        $$$$$$$\  $$\   $$\  $$$$$$\ $$$$$$$$\ $$$$$$$$\ $$$$$$$\  
        $$  __$$\ $$ |  $$ |$$  __$$\\__$$  __|$$  _____|$$  __$$\ 
        $$ |  $$ |$$ |  $$ |$$ /  \__|  $$ |   $$ |      $$ |  $$ |
        $$$$$$$\ |$$ |  $$ |\$$$$$$\    $$ |   $$$$$\    $$ |  $$ |
        $$  __$$\ $$ |  $$ | \____$$\   $$ |   $$  __|   $$ |  $$ |
        $$ |  $$ |$$ |  $$ |$$\   $$ |  $$ |   $$ |      $$ |  $$ |
        $$$$$$$  |\$$$$$$  |\$$$$$$  |  $$ |   $$$$$$$$\ $$$$$$$  |
        \_______/  \______/  \______/   \__|   \________|\_______/ )";
    std::cout << "\n\nThe alarm has started!! All your AWSOME gang members have been arrested!!";
    std::cout << "\nYou are surrounded!!******SURRENDER*******\n\n";
}
void PrintIntroduction(int Difficulty)
{

    //Print out a header message for the player so he could know what it is about
    std::cout << "\n\nYou are a now connected to a level " << Difficulty;
    std::cout << " secure door terminal...\nEnter the correct code to continue...\n\n";
}
bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    //Variables definitions
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print out the sum and the product of the variables
    std::cout << "-- There are 3 numbers in the code.";
    std::cout << "\n-- The code adds up to: " << CodeSum;
    std::cout << "\n-- The code multiply to give: " << CodeProduct << std::endl;

    //Store the Player guess 
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;


    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Well Done!! Right code!! You opened the door " << Difficulty << " ***";
        return true;
    }
    else
    {
        std::cout << "\nWrong code!! Be careful of the alarm!! Code will reset!! Retry Again.\n\n";
        return false;
    }
}



int main() //Main function start
{
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    srand(time(NULL)); //Create a random seed depending on the time of the day

    int Tries = 1;
    int LevelOfDifficulty = 1;
    const int MaxLevel = 3;
    PrintGameHeader(MaxLevel);

    while (LevelOfDifficulty <= MaxLevel && Tries <= 3) //loop game untill all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelOfDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            //increase the level difficulty
            ++LevelOfDifficulty;
            Tries = 1;
        }
        else
        {
            ++Tries;
        }
    }
    if (Tries > 3)
    {
        PrintLoseFooter();
    }
    else
    {
        PrintWinFooter();
    }

    return 0;
}