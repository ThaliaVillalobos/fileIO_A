//Name:Thalia Villalobos
//20 Oct. 2015
//file I/O 

#include <iostream> 
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string valA;
    int wordLength = 0;
    int count = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count11 = 0;
    string newWord;
    string newWord2;
    char newVal;
   
    ifstream fin;
    ofstream fout;
    ofstream foutTwo;
    ofstream foutThree;
    
    fin.open("gba.txt");
    fout.open("result.txt");
    foutTwo.open("capitalize.txt");
    foutThree.open("uppercase.txt");
    
    if (fin.fail())
    {
       cout << "Error opening input file" << endl;
       exit(1);
    }  
    
    if (fout.fail())
    {		
       cout << "Error opening output file" << endl;
       exit(1);
    }  
    
    while (fin >> valA)
    {
    
    //Problem C and Problem E
       wordLength += valA.length();
       count ++;		
      
    
    //Problem D 
       switch(valA.length())
       {                   
            case 2:count2++;
                   break;            
            case 3:count3++;
                   break;            
            case 4:count4++;
                   break;     
            default:
                    count11++;
                    break;                  
       }
     
     //Problem F
        for(int ix = 0; ix < valA.length(); ix++)
        {
            newVal = toupper(valA.at(ix));
            newWord += newVal;
        } 
        newWord += " ";//makes a space after each word
        
     //Problem G
        for(int ix = 0; ix < valA.length(); ix++)
        {
            if ((ix) == 0)
            {
                newWord2 += toupper(valA.at(ix));
            }
            else
            {
                newWord2 += valA.at(ix);
            }
        } 
        newWord2 += " "; //makes a space after each word 
       
    }
    
   //Output in result.txt
    fout << "Average characters per word: " << wordLength/count << endl; 
    fout << count2 << " words of lenght 2" << endl;
    fout << count3 << " words of lenght 3" << endl; 
    fout << count4 << " words of lenght 4" << endl; 
    fout << count11 << " words of lenght 11 or longer" << endl; 	
    fout << "Total number of words in the input file is: " << count << endl;
    
   //Output in capitalize.txt 
    foutTwo << newWord;
   
   //Output in uppercase.txt 
    foutThree << newWord2;
    
   //Closing all fin and fout file
    fin.close();
    fout.close();
    foutTwo.close();
    foutThree.close();
    return 0;
}
    
    
    



