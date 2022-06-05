/******************************************************************************

    
 Program description:
   Fermat's little theorem
   this program is made to check if a^p  ≡ a (mod p) or a^(p - 1) ≡ 1 (mod p)
   Holds true for any values of a and p.
   
   Reference of Fermat_Little theorem:https://www.tutorialspoint.com/fermat-s-little-theorem-in-cplusplus

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

//Function Declaration form ( return type of the function,name of the function, parameters )
int Fermat_Little(int a, int p)
{
   
   int power_Value;
   if(a % p == 0){
     
      power_Value = pow(a, p);
      if((power_Value - a) % p == 0)
         cout<<"Fermat's little theorem holds true!";
      
      else
         cout<<"Fermat's little theorem holds false!";
      
   }  
   else {
      power_Value = pow(a, (p - 1));
      if((power_Value - 1) % p == 0 )
         cout<<"Fermat's little theorem holds true!";
      
      else
         cout<<"Fermat's little theorem holds false!";
      
   }
   return (power_Value); 
}


//void function to print out some statements
void info()
{
    cout<<"........................................................................"<<endl<<endl;
    cout<<"This theorem states that for any prime number 'p',then a^p = a (mod p) \nand If 'a' is not divisible by 'p' then, a^(p - 1) = 1 (mod p)."<<endl<<endl;
    cout<<"........................................................................"<<endl<<endl;
    cout<<"Do you want to see the information about Fermat’s Little Theorem again(Choose N to exit)?";   
}



int main()
{
    int a,p;
    char user_choice,user_choice2;
    
    cout<<"PROJECT NAME:FERMAT’S LITTLE THEOREM"<<endl<<endl;
    
    cout<<"Welcome to Group 1 project،Do you want to know more information about Fermat’s Little Theorem(Y OR N)?";
    cin>>user_choice;
    cout<<endl;
    
    
    while(user_choice=='y'||user_choice=='Y'){
        
     info();
     cin>>user_choice;
        
    }
    
    cout<<endl;
    
    
    //using a do while loop to make the user try the theorem multiple times
    do{
        
     cout<<"Choose an integer and a number to try if Fermat’s Little Theorem holds true or not!"<<endl<<endl;
     cout<<"Enter an Integer'a':";
     cin>>a;
     cout<<"Enter The Value of the Modulas'p':";
     cin>>p;
     
     cout<<endl;
     Fermat_Little(a, p);//calling the function
     cout<<endl<<endl;
        
     cout<<"Do you want to try again (Y OR N)?";
     cin>>user_choice2;
     cout<<"________________________________"<<endl;
        
    }while(user_choice2=='y'||user_choice2=='Y');
    
    cout<<"Thank you for trying our program <3";
    

    return 0;
}
