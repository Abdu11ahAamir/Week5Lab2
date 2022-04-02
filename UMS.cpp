#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
  cout<<"*****************************************************";
  cout<<endl;
  cout<<"*   University Admission Management system          *";
  cout<<endl;
  cout<<"*****************************************************";
  cout<<endl;
  cout<<endl;
  
  string Menu;

  string std1Name; 
  string std2Name;
  string std3Name;
  string std4Name;
  float Matric1;
  float Matric2;
  float Matric3;
  float Matric4;
  float FSc1;
  float FSc2;
  float FSc3;
  float FSc4;
  float ECAT1;
  float ECAT2;
  float ECAT3;
  float ECAT4;
  float aggEcat1;
  float aggEcat2;
  float aggEcat3;
  float aggEcat4;
  string garbage;
  float aggMatric1;
  float aggMatric3;
  float aggMatric4;
  float aggFsc1;
  float aggFsc3;
  float aggFsc4; 
  float aggMatric2;
  float aggFsc2;
  float Totalagg1;
  float Totalagg2;
  float Totalagg3;
  float Totalagg4;
  
  Menu="Main Menu >";
  cout<<Menu;
  cout<<endl;
  cout<<"------------------------------------------------------";
  cout<<endl;
  cout<<"Select one of the following options number...";
  cout<<endl;
  cout<<"1. Add New Student Record";
  cout<<endl; 
  cout<<"2. View all Records";
  cout<<endl;
  cout<<"3. Print the Record in Merit Order";
  cout<<endl;
  cout<<"4. Generate the merit list";
  cout<<endl;
  cout<<"5. Program Seat Management";
  cout<<endl;
  cout<<"6. Exit";
  cout<<endl;
  
  int option;
  cout<<"Your Option..";
  cin>>option;
  cout<<endl;

     
 
  if(option==1)
  {

   
   cout<<"Enter the Student Name: ";
   cin>>std1Name;
   cout<<endl;  
   cout<<"Enter Your Matric Marks: ";
   cin>>Matric1;
   cout<<endl;
   cout<<"Enter Your FSc Marks: ";
   cin>>FSc1;
   cout<<endl;
   cout<<"Enter your ECAT Marks: "; 
   cin>>ECAT1;
   cout<<endl;
 
   }
 
  if(option==2)
   {
    cout<<"You don't have any record..."<<endl;
   }
  if(option==3)
   {
    cout<<"You don't have any record..."<<endl;
   }
  if(option==4)
   {
    cout<<"You don't have any record..."<<endl;
   }
  if(option==5)
   {
    cout<<"You don't have any record..."<<endl;
   }
  if(option==6)
   {
    cout<<"Thank you for using the application :)"<<endl;
   }

   
   cout<<"Enter any key button and press enter: ";
   cin>>garbage;
   system("cls");




     
  cout<<"*****************************************************";
  cout<<endl;
  cout<<"*   University Admission Management system          *";
  cout<<endl;
  cout<<"*****************************************************";
  cout<<endl;
  cout<<endl;

  cout<<Menu;
  cout<<endl;
  cout<<"------------------------------------------------------";
  cout<<endl;
  cout<<"Select one of the following options number...";
  cout<<endl;
  cout<<"1. Add New Student Record";
  cout<<endl; 
  cout<<"2. View all Records";
  cout<<endl;
  cout<<"3. Print the Record in Merit Order";
  cout<<endl;
  cout<<"4. Generate the merit list";
  cout<<endl;
  cout<<"5. Program Seat Management";
  cout<<endl;
  cout<<"6. Exit";
  cout<<endl;
  
  cout<<"Your Option..";
  cin>>option;
  cout<<endl;

     
 
  if(option==1)
  {

   
   cout<<"Enter the Student Name: ";
   cin>>std2Name;
   cout<<endl;  
   cout<<"Enter Your Matric Marks: ";
   cin>>Matric2;
   cout<<endl;
   cout<<"Enter Your FSc Marks: ";
   cin>>FSc2;
   cout<<endl;
   cout<<"Enter your ECAT Marks: "; 
   cin>>ECAT2;
   cout<<endl;

   
   }

  if(option==2)
   {
    cout<<"These are the details: "<<endl;
    cout<<std1Name<<'\t'<<Matric1<<'\t'<<FSc1<<'\t'<<ECAT1<<endl;   
   }
  if(option==3)
   {
    cout<<"the program does not have the record of second student";
    cout<<endl;
   }
  if(option==4)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==5)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==6)
   {
    cout<<"Thank you for using the application :)"<<endl;
   }
   
   cout<<"Enter any key button and press Enter: ";
   cin>>garbage;
   system("cls");
 
  cout<<"*****************************************************";
  cout<<endl;
  cout<<"*   University Admission Management system          *";
  cout<<endl;
  cout<<"*****************************************************";
  cout<<endl;
  cout<<endl;

  cout<<Menu;
  cout<<endl;
  cout<<"------------------------------------------------------";
  cout<<endl;
  cout<<"Select one of the following options number...";
  cout<<endl;
  cout<<"1. Add New Student Record";
  cout<<endl; 
  cout<<"2. View all Records";
  cout<<endl;
  cout<<"3. Print the Record in Merit Order";
  cout<<endl;
  cout<<"4. Generate the merit list";
  cout<<endl;
  cout<<"5. Program Seat Management";
  cout<<endl;
  cout<<"6. Exit";
  cout<<endl;
  
  cout<<"Your Option..";
  cin>>option;
  cout<<endl;

     
 
  if(option==1)
  {
   cout<<"Enter the Student Name: ";
   cin>>std3Name;
   cout<<endl;  
   cout<<"Enter Your Matric Marks: ";
   cin>>Matric3;
   cout<<endl;
   cout<<"Enter Your FSc Marks: ";
   cin>>FSc3;
   cout<<endl;
   cout<<"Enter your ECAT Marks: "; 
   cin>>ECAT3;
   cout<<endl;


   }
  
  if(option==2)
   {
    cout<<std1Name<<'\t'<<Matric1<<'\t'<<FSc1<<'\t'<<ECAT1<<endl;
    
    cout<<std2Name<<'\t'<<Matric2<<'\t'<<FSc2<<'\t'<<ECAT2<<endl;   

   }  
  

   if(option==3)
   {
    aggMatric1=(Matric1/1100)*0.25*100;
    aggFsc1=(FSc1/1100)*0.45*100;
    aggEcat1=(ECAT1/1100)*0.30*100;
    Totalagg1= aggMatric1+aggFsc1+aggEcat1;
    
    aggMatric2=(Matric2/1100)*0.25*100;
    aggFsc2=(FSc2/1100)*0.45*100;
    aggEcat2=(ECAT2/1100)*0.30*100;
    Totalagg2= aggMatric2+aggFsc2+aggEcat2;     
    
    if(Totalagg1>Totalagg2)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg2>Totalagg1)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    
   }
    
  }

  if(option==4)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==5)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==6)
   {
    cout<<"Thank you for using the application :)"<<endl;
   }
  
   cout<<"Enter any key button and press Enter: ";
   cin>>garbage;
   system("cls");
  

  cout<<"*****************************************************";
  cout<<endl;
  cout<<"*   University Admission Management system          *";
  cout<<endl;
  cout<<"*****************************************************";
  cout<<endl;
  cout<<endl;

  cout<<Menu;
  cout<<endl;
  cout<<"------------------------------------------------------";
  cout<<endl;
  cout<<"Select one of the following options number...";
  cout<<endl;
  cout<<"1. Add New Student Record";
  cout<<endl; 
  cout<<"2. View all Records";
  cout<<endl;
  cout<<"3. Print the Record in Merit Order";
  cout<<endl;
  cout<<"4. Generate the merit list";
  cout<<endl;
  cout<<"5. Program Seat Management";
  cout<<endl;
  cout<<"6. Exit";
  cout<<endl;
  
  cout<<"Your Option..";
  cin>>option;
  cout<<endl;

     
 
  if(option==1)
  {
   
   
   cout<<"Enter the Student Name: ";
   cin>>std4Name;
   cout<<endl;  
   cout<<"Enter Your Matric Marks: ";
   cin>>Matric4;
   cout<<endl;
   cout<<"Enter Your FSc Marks: ";
   cin>>FSc4;
   cout<<endl;
   cout<<"Enter your ECAT Marks: "; 
   cin>>ECAT4;
   cout<<endl;

   

   }
  
  if(option==2)
   {
    cout<<std1Name<<'\t'<<Matric1<<'\t'<<FSc1<<'\t'<<ECAT1<<endl;
    
    cout<<std2Name<<'\t'<<Matric2<<'\t'<<FSc2<<'\t'<<ECAT2<<endl;

    cout<<std3Name<<'\t'<<Matric3<<'\t'<<FSc3<<'\t'<<ECAT3<<endl;
   

   }  
  

  if(option==3)
   {
    aggMatric1=(Matric1/1100)*0.25*100;
    aggFsc1=(FSc1/1100)*0.45*100;
    aggEcat1=(ECAT1/1100)*0.30*100;
    Totalagg1= aggMatric1+aggFsc1+aggEcat1;
    
    aggMatric2=(Matric2/1100)*0.25*100;
    aggFsc2=(FSc2/1100)*0.45*100;
    aggEcat2=(ECAT2/1100)*0.30*100;
    Totalagg2= aggMatric2+aggFsc2+aggEcat2;

    aggMatric3=(Matric3/1100)*0.25*100;
    aggFsc3=(FSc3/1100)*0.45*100;
    aggEcat3=(ECAT3/1100)*0.30*100;
    Totalagg3= aggMatric3+aggFsc3+aggEcat3;     
     
    
    if( Totalagg1 > Totalagg2 && Totalagg3 || Totalagg2 > Totalagg3  )
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

   if(Totalagg2 > Totalagg1 && Totalagg3 || Totalagg1 > Totalagg3  )
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }


   if(Totalagg2 > Totalagg3 && Totalagg1 || Totalagg3 > Totalagg1 )
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

   if(Totalagg1 > Totalagg3 && Totalagg2 || Totalagg3 > Totalagg2)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg3 > Totalagg1 && Totalagg2 ||  Totalagg1 > Totalagg2)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }
   if(Totalagg3 > Totalagg2 && Totalagg1 || Totalagg2 > Totalagg1)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }



  }
  if(option==4)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==5)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==6)
   {
    cout<<"Thank you for using the application :)"<<endl;
   }
  
   cout<<"Enter any key button and press enter: ";
   cin>>garbage;
   system("cls");


  cout<<"*****************************************************";
  cout<<endl;
  cout<<"*   University Admission Management system          *";
  cout<<endl;
  cout<<"*****************************************************";
  cout<<endl;
  cout<<endl;

  cout<<Menu;
  cout<<endl;
  cout<<"------------------------------------------------------";
  cout<<endl;
  cout<<"Select one of the following options number...";
  cout<<endl;
  cout<<"1. Add New Student Record";
  cout<<endl; 
  cout<<"2. View all Records";
  cout<<endl;
  cout<<"3. Print the Record in Merit Order";
  cout<<endl;
  cout<<"4. Generate the merit list";
  cout<<endl;
  cout<<"5. Program Seat Management";
  cout<<endl;
  cout<<"6. Exit";
  cout<<endl;
  
  cout<<"Your Option..";
  cin>>option;
  cout<<endl;

     
 
  if(option==1)
  {
   cout<<"There is no free space to add any other record :(";
  
   }
  
  if(option==2)
   {
    cout<<std1Name<<'\t'<<Matric1<<'\t'<<FSc1<<'\t'<<ECAT1<<endl;
    
    cout<<std2Name<<'\t'<<Matric2<<'\t'<<FSc2<<'\t'<<ECAT2<<endl;

    cout<<std3Name<<'\t'<<Matric3<<'\t'<<FSc3<<'\t'<<ECAT3<<endl;

    cout<<std4Name<<'\t'<<Matric4<<'\t'<<FSc4<<'\t'<<ECAT4<<endl;   

   }  
  

  if(option==3)
   {
    aggMatric1=(Matric1/1100)*0.25*100;
    aggFsc1=(FSc1/1100)*0.45*100;
    aggEcat1=(ECAT1/1100)*0.30*100;
    Totalagg1= aggMatric1+aggFsc1+aggEcat1;
    
    aggMatric2=(Matric2/1100)*0.25*100;
    aggFsc2=(FSc2/1100)*0.45*100;
    aggEcat2=(ECAT2/1100)*0.30*100;
    Totalagg2= aggMatric2+aggFsc2+aggEcat2;

    aggMatric3=(Matric3/1100)*0.25*100;
    aggFsc3=(FSc3/1100)*0.45*100;
    aggEcat3=(ECAT3/1100)*0.30*100;
    Totalagg3= aggMatric3+aggFsc3+aggEcat3; 

    aggMatric4=(Matric4/1100)*0.25*100;
    aggFsc4=(FSc4/1100)*0.45*100;
    aggEcat4=(ECAT4/1100)*0.30*100;
    Totalagg4= aggMatric4+aggFsc4+aggEcat4; 

    
    if(Totalagg1 > Totalagg2 > Totalagg3 > Totalagg4)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

   if(Totalagg1 > Totalagg3 > Totalagg2 > Totalagg4)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

   if(Totalagg1 > Totalagg4 > Totalagg3 > Totalagg2)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg1 > Totalagg4 > Totalagg2 > Totalagg3)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

   if(Totalagg1 > Totalagg3 > Totalagg4 > Totalagg2)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg1>Totalagg3>Totalagg2>Totalagg3)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }


   if(Totalagg2>Totalagg3>Totalagg1>Totalagg4)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

   if(Totalagg2>Totalagg4>Totalagg3>Totalagg1)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }



   if(Totalagg2>Totalagg1>Totalagg3>Totalagg4)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

   if(Totalagg2>Totalagg1>Totalagg4>Totalagg3)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

   if(Totalagg2>Totalagg3>Totalagg4>Totalagg1)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

   if(Totalagg2>Totalagg4>Totalagg1>Totalagg3)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }


   if(Totalagg3>Totalagg1>Totalagg2>Totalagg4)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

   if(Totalagg3>Totalagg1>Totalagg4>Totalagg2)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }


   if(Totalagg3>Totalagg2>Totalagg1>Totalagg4)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

   if(Totalagg3>Totalagg2>Totalagg4>Totalagg1)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

   if(Totalagg3>Totalagg4>Totalagg1>Totalagg2)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg3>Totalagg4>Totalagg2>Totalagg1)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

   if(Totalagg3>Totalagg1>Totalagg2>Totalagg4)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

   if(Totalagg3>Totalagg1>Totalagg4>Totalagg2)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg4>Totalagg1>Totalagg2>Totalagg3)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

   if(Totalagg4>Totalagg2>Totalagg3>Totalagg1)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

   if(Totalagg4>Totalagg3>Totalagg1>Totalagg2)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg4>Totalagg1>Totalagg3>Totalagg2)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

   if(Totalagg4>Totalagg2>Totalagg1>Totalagg3)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

   if(Totalagg4>Totalagg3>Totalagg2>Totalagg1)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

   if(Totalagg4>Totalagg1>Totalagg2>Totalagg3)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }


  }
  if(option==4)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==5)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==6)
   {
    cout<<"Thank you for using the application :)"<<endl;
   }

   cout<<"Enter any key button and press enter: ";
   cin>>garbage;
   system("cls");

cout<<"*****************************************************";
  cout<<endl;
  cout<<"*   University Admission Management system          *";
  cout<<endl;
  cout<<"*****************************************************";
  cout<<endl;
  cout<<endl;

  cout<<Menu;
  cout<<endl;
  cout<<"------------------------------------------------------";
  cout<<endl;
  cout<<"Select one of the following options number...";
  cout<<endl;
  cout<<"1. Add New Student Record";
  cout<<endl; 
  cout<<"2. View all Records";
  cout<<endl;
  cout<<"3. Print the Record in Merit Order";
  cout<<endl;
  cout<<"4. Generate the merit list";
  cout<<endl;
  cout<<"5. Program Seat Management";
  cout<<endl;
  cout<<"6. Exit";
  cout<<endl;
  
  cout<<"Your Option..";
  cin>>option;
  cout<<endl;

     
 
  if(option==1)
  {
   cout<<"There is no free space to add any other record :(";
  
   }
  
  if(option==2)
   {
    cout<<std1Name<<'\t'<<Matric1<<'\t'<<FSc1<<'\t'<<ECAT1<<endl;
    
    cout<<std2Name<<'\t'<<Matric2<<'\t'<<FSc2<<'\t'<<ECAT2<<endl;

    cout<<std3Name<<'\t'<<Matric3<<'\t'<<FSc3<<'\t'<<ECAT3<<endl;

    cout<<std4Name<<'\t'<<Matric4<<'\t'<<FSc4<<'\t'<<ECAT4<<endl;   

   }  
  

  if(option==3)
   {
    aggMatric1=(Matric1/1100)*0.25*100;
    aggFsc1=(FSc1/1100)*0.45*100;
    aggEcat1=(ECAT1/1100)*0.30*100;
    Totalagg1= aggMatric1+aggFsc1+aggEcat1;
    
    aggMatric2=(Matric2/1100)*0.25*100;
    aggFsc2=(FSc2/1100)*0.45*100;
    aggEcat2=(ECAT2/1100)*0.30*100;
    Totalagg2= aggMatric2+aggFsc2+aggEcat2;

    aggMatric3=(Matric3/1100)*0.25*100;
    aggFsc3=(FSc3/1100)*0.45*100;
    aggEcat3=(ECAT3/1100)*0.30*100;
    Totalagg3= aggMatric3+aggFsc3+aggEcat3; 

    aggMatric4=(Matric4/1100)*0.25*100;
    aggFsc4=(FSc4/1100)*0.45*100;
    aggEcat4=(ECAT4/1100)*0.30*100;
    Totalagg4= aggMatric4+aggFsc4+aggEcat4; 

    
  if(Totalagg1 > Totalagg2 && Totalagg1 > Totalagg3 && Totalagg1 > Totalagg4)
   {
  if(Totalagg1 > Totalagg2 && Totalagg2 > Totalagg3 && Totalagg3 > Totalagg4)
    {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

  if(Totalagg1 > Totalagg2 && Totalagg2 > Totalagg4 && Totalagg4 > Totalagg3)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

  if(Totalagg1 > Totalagg3 && Totalagg3 > Totalagg2 && Totalagg2 > Totalagg4)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }

  if(Totalagg1 > Totalagg4 && Totalagg4 > Totalagg2 && Totalagg2 > Totalagg3)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

  if(Totalagg1 > Totalagg4 && Totalagg4 > Totalagg3 && Totalagg3 > Totalagg2)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

  if(Totalagg1 > Totalagg3 && Totalagg3 > Totalagg4 && Totalagg4 > Totalagg2)
   {
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }
   }

  if(Totalagg2 > Totalagg1 && Totalagg2 > Totalagg3 && Totalagg2 > Totalagg4)
   {
     if(Totalagg2 > Totalagg1 && Totalagg1 > Totalagg3 && Totalagg1 > Totalagg4)
    {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    }


  if(Totalagg2 > Totalagg1 && Totalagg1 > Totalagg4 && Totalagg4 > Totalagg3)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

  if(Totalagg2 > Totalagg3 && Totalagg3 > Totalagg1 && Totalagg1 > Totalagg4 )
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }



  if(Totalagg2 > Totalagg3 && Totalagg3 > Totalagg4 && Totalagg4 > Totalagg1)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

  if(Totalagg2 > Totalagg4 && Totalagg4 > Totalagg1 && Totalagg1 > Totalagg3)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

  if(Totalagg2 > Totalagg4 && Totalagg4 > Totalagg3 && Totalagg3 > Totalagg1)
   {
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }
}
if(Totalagg3 > Totalagg1 && Totalagg1 > Totalagg2 && Totalagg2 > Totalagg4)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }


if(Totalagg3 > Totalagg1 && Totalagg1 > Totalagg2 && Totalagg4 > Totalagg2)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

if(Totalagg3 > Totalagg2 && Totalagg2 > Totalagg1 && Totalagg1 > Totalagg4)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
   }


if(Totalagg3 > Totalagg4 && Totalagg4 > Totalagg1 && Totalagg1 > Totalagg2)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

if(Totalagg3 > Totalagg4 && Totalagg4 > Totalagg2 && Totalagg2 > Totalagg1)
   {
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

if(Totalagg4 > Totalagg1 && Totalagg4 > Totalagg2 && Totalagg4 > Totalagg3)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

if(Totalagg4 > Totalagg1 && Totalagg1 > Totalagg3 && Totalagg3 > Totalagg2)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

if(Totalagg4 > Totalagg2 && Totalagg2 > Totalagg1 && Totalagg1 > Totalagg3)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
   }

if(Totalagg4 > Totalagg2 && Totalagg2 > Totalagg3 && Totalagg3 > Totalagg1)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

if(Totalagg4 > Totalagg3 && Totalagg3 > Totalagg1 && Totalagg1 > Totalagg2)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
   }

if(Totalagg4 > Totalagg3 && Totalagg3 > Totalagg2 && Totalagg2 > Totalagg1)
   {
    cout<<"The agrregate of "<<std4Name<<" will be "<<Totalagg4<<endl;
    cout<<"The agrregate of "<<std3Name<<" will be "<<Totalagg3<<endl;
    cout<<"The agrregate of "<<std2Name<<" will be "<<Totalagg2<<endl;
    cout<<"The agrregate of "<<std1Name<<" will be "<<Totalagg1<<endl;
   }

  }
  if(option==4)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==5)
   {
    cout<<"This option is blocked by Programmer"<<endl;
   }
  if(option==6)
   {
    cout<<"Thank you for using the application :)"<<endl;
   }

}


