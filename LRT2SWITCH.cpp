#include<iostream.h>
#include<conio.h>
main()

{

   char x;
   int pass,sta,sta2,des,pmt,pas,total,mon,chg;

   dito:
   cout<<"\n \t \t \t	 WELCOME TO LRT 1";
   cout<<"\n \n******************************************************************************";
   cout<<"\n******************* ATTENTION: PLEASE ENTER NUMBER ONLY***********************";
   cout<<"\n***************************** PASSENGER TYPE *********************************";
   cout<<"\n \n \t \t \t \t[1] Ordinary";
   cout<<"\n \t \t \t \t[2] Student";
   cout<<"\n \t \t \t \t[3] PWD(People With Dissability)";
   cout<<"\n \t \t \t \t[4] Senior Citizen";
   cout<<"\n \n \t \t \t \t Enter Choice: ";
	cin>>pass;

   clrscr();

     switch(pass)
     {
     case 1: xx:
     clrscr();
        cout<<"\n NOTE: Ordinary & Student passengers have NO Fare Discount";

   cout<<"\n \n********************************* STATIONS ************************************";
   cout<<"\n \n  [1] Baclaran  | [6] Quirino Ave       | [11] Doroteo Jose| [16] Abad Santos";
   cout<<"\n  [2] EDSA/Pasay| [7] Pedro Gil         | [12] Bambang     | [17] R Papa";
   cout<<"\n  [3] Libertad  | [8] United Nations Ave| [13] Blumentrit  | [18] 5th Avenue";
   cout<<"\n  [4] Gil Puyat | [9] Central           | [14] Tayuman     | [19] Monumento";
   cout<<"\n  [5] Vito Cruz | [10] Carriedo         | [15] Blumentritt | [20] Roosevelt";
   cout<<"\n ******************************************************************************";
   cout<<"\n ********** ATTENTION: Please do not input any letters or symbols *************";
   cout<<"\n ******************************************************************************";
        cout<<"\n \n Enter Current Station: ";
        cin>>sta;

        if((sta==1)||(sta==2)||(sta==3)||(sta==4)||(sta==5)||(sta==6)||(sta==7)||(sta==8)||(sta==9)||(sta==10)||(sta==11)||(sta==12)||(sta==13)||(sta==14)||(sta==15)||(sta==16)||(sta==17)||(sta==18)||(sta==19)||(sta==20))
         { goto cc;}

        else if((sta!=1)||(sta!=2)||(sta!=3)||(sta!=4)||(sta!=5)||(sta!=6)||(sta!=7)||(sta!=8)||(sta!=9)||(sta!=10)||(sta!=11)||(sta!=12)||(sta!=13)||(sta!=14)||(sta!=15)||(sta!=16)||(sta!=17)||(sta!=18)||(sta!=19)||(sta!=20))
        { clrscr();
        		goto xx;}
        cc:
        cout<<"\n Enter Desire Destination: ";
        cin>>sta2;

        if((sta2==1)||(sta2==2)||(sta2==3)||(sta2==4)||(sta2==5)||(sta2==6)||(sta2==7)||(sta2==8)||(sta2==9)||(sta2==10)||(sta2==11)||(sta2==12)||(sta2==13)||(sta2==14)||(sta2==15)||(sta2==16)||(sta2==17)||(sta2==18)||(sta2==19)||(sta2==20))
         { goto ff;}

        else if((sta2!=1)||(sta2!=2)||(sta2!=3)||(sta2!=4)||(sta2!=5)||(sta2!=6)||(sta2!=7)||(sta2!=8)||(sta2!=9)||(sta2!=10)||(sta2!=11)||(sta2!=12)||(sta2!=13)||(sta2!=14)||(sta2!=15)||(sta2!=16)||(sta2!=17)||(sta2!=18)||(sta2!=19)||(sta2!=20))
        { clrscr();
        		goto xx;}

         ff:
        if(sta<=sta2)
        {
        		des=sta2-sta;
            cout<<"\n ******************************************************************************";
             cout<<"\n Your Journey will be from "<<sta<<" to "<<sta2<<" - "<<des<<" Interstation(s)";

        switch(des)
        {

        	 case 0 : cout<<"\n \n \n NOT POSSIBLE TO TRAVEL!";
            getch();
				clrscr();
            goto xx;

                  oo:
        	 case 1 :

          			 cout<<"\n \n You have to pay 8 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=8;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();
                     cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     sabogg:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"\n************************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n************************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}

                     if(mon<total)
                     	{
                       	cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto sabogg;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


          else
          {  clrscr();
          	 cout<<"Input not recognize! Try Again!";
      			getch();
     			   goto xx;} break;

          case 2 : goto oo;

          case 3 : goto oo;


          case 4 : goto oo;

          case 5 :
                   pp:
                   cout<<"\n \n You have to pay 15 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=15;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";


                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{
								clrscr();
      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     sabog:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;
                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}
                     if(mon!=total)
                     	{

                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto sabog;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


          else
           {  clrscr();
   				cout<<"Input not recognize! Try Again!";
      			getch();
      			goto xx;} break;

          case 6 : goto pp;
			 case 7 : goto pp;
          case 8 : goto pp;
          case 9 : goto pp;
          case 10 : goto pp;
          case 11 : goto pp;
          case 12 : goto pp;
          case 13 : goto pp;
          case 14 : goto pp;
          case 15 : goto pp;
          case 16 : goto pp;
          case 17 : goto pp;
          case 18 : goto pp;
          case 19 :
                    ss:
          				 cout<<"\n \n You have to pay 20 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=20;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";


                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                      sabogkk:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;
                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}
                     if(mon<total)
                     	{

                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto sabogkk;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


          else
           {  clrscr();
   				cout<<"Input not recognize! Try Again!";
      			getch();
      			clrscr();
      			goto xx;} break;


          case 20 : goto ss;
				    }
                    }

   	  if(sta>sta2)
        {

   des=sta-sta2;

   		cout<<"\n ******************************************************************************";
         cout<<"\n Your Journey will be from "<<sta<<" to "<<sta2<<" - "<<des<<" Interstation(s)";


        switch(des)
        {
          case 0 : cout<<"\n \n \n NOT POSSIBLE TO TRAVEL!";
          			  getch();
                    clrscr();
        			     goto xx;

                    dd:
        	 case 1 : cout<<"\n \n You have to pay 8 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=8;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
                   x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{
   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;
                      sa:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;
                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}

                     if(mon<total)
                     	{

                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto sa;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


        else
        	{  clrscr();
   			cout<<"Input not recognize! Try Again!";
      		getch();
      		goto xx; } break;

          case 2 : goto dd;
          case 3 : goto dd;
          case 4 : goto dd;
          case 5 :
                   fg:
          			 cout<<"\n \n You have to pay 15 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=15;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
                   x=getch();
                   cout<<x;
                   getch();

                   if((x=='y')||(x=='Y'))
   						{
   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                      qq:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}

                     if(mon<total)
                     	{
                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto qq; }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


          else
            {  clrscr();
   			  	cout<<"Input not recognize! Try Again!";
     			   getch();
      			goto xx; } break;

          case 6 : goto fg;
          case 7 : goto fg;
          case 8 : goto fg;
          case 9 : goto fg;
          case 10 : goto fg;
          case 11 : goto fg;
          case 12 : goto fg;
          case 13 : goto fg;
          case 14 : goto fg;
          case 15 : goto fg;
          case 16 : goto fg;
          case 17 : goto fg;
          case 18 : goto fg;
          case 19 :
                     ii:
          			 cout<<"\n \n You have to pay 20 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=20;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
                   x=getch();
                   cout<<x;
                   getch();

                   if((x=='y')||(x=='Y'))
   						{
   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                      ww:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}

                     if(mon<total)
                     	{
                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto ww;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


          else
             {  clrscr();
   				cout<<"Input not recognize! Try Again!";
      			getch();
      			goto xx; } break;

          case 20 : goto ii;
				    }


      case 2 : goto xx;

      case 3 : bbb:

      clrscr();

      cout<<"\n NOTE: PWD & Senior Citizens passengers has 20% Fare Discount";

   cout<<"\n \n********************************* STATIONS ************************************";
   cout<<"\n \n  [1] Baclaran  | [6] Quirino Ave       | [11] Doroteo Jose| [16] Abad Santos";
   cout<<"\n  [2] EDSA/Pasay| [7] Pedro Gil         | [12] Bambang     | [17] R Papa";
   cout<<"\n  [3] Libertad  | [8] United Nations Ave| [13] Blumentrit  | [18] 5th Avenue";
   cout<<"\n  [4] Gil Puyat | [9] Central           | [14] Tayuman     | [19] Monumento";
   cout<<"\n  [5] Vito Cruz | [10] Carriedo         | [15] Blumentritt | [20] Roosevelt";
   cout<<"\n ******************************************************************************";
   cout<<"\n ********** ATTENTION: Please do not input any letters or symbols *************";
   cout<<"\n ******************************************************************************";

        cout<<"\n \n Enter Current Station: ";
        cin>>sta;

        if((sta==1)||(sta==2)||(sta==3)||(sta==4)||(sta==5)||(sta==6)||(sta==7)||(sta==8)||(sta==9)||(sta==10)||(sta==11)||(sta==12)||(sta==13)||(sta==14)||(sta==15)||(sta==16)||(sta==17)||(sta==18)||(sta==19)||(sta==20))
         { goto ccc;}

        else if((sta!=1)||(sta!=2)||(sta!=3)||(sta!=4)||(sta!=5)||(sta!=6)||(sta!=7)||(sta!=8)||(sta!=9)||(sta!=10)||(sta!=11)||(sta!=12)||(sta!=13)||(sta!=14)||(sta!=15)||(sta!=16)||(sta!=17)||(sta!=18)||(sta!=19)||(sta!=20))
        { clrscr();
        		goto bbb;}

        ccc:

        cout<<"\n Enter Desire Destination: ";
        cin>>sta2;

        if((sta2==1)||(sta2==2)||(sta2==3)||(sta2==4)||(sta2==5)||(sta2==6)||(sta2==7)||(sta2==8)||(sta2==9)||(sta2==10)||(sta2==11)||(sta2==12)||(sta2==13)||(sta2==14)||(sta2==15)||(sta2==16)||(sta2==17)||(sta2==18)||(sta2==19)||(sta2==20))
         { goto aaa;}

        else if((sta2!=1)||(sta2!=2)||(sta2!=3)||(sta2!=4)||(sta2!=5)||(sta2!=6)||(sta2!=7)||(sta2!=8)||(sta2!=9)||(sta2!=10)||(sta2!=11)||(sta2!=12)||(sta2!=13)||(sta2!=14)||(sta2!=15)||(sta2!=16)||(sta2!=17)||(sta2!=18)||(sta2!=19)||(sta2!=20))
        { clrscr();
        		goto bbb;}
            }

         aaa:
         if(sta<=sta2)
        {
        		des=sta2-sta;

            cout<<"\n ******************************************************************************";
             cout<<"\n Your Journey will be from "<<sta<<" to "<<sta2<<" - "<<des<<" Interstation(s)";

             switch(des)
        {

          case 0 : cout<<"\n \n \n NOT POSSIBLE TO TRAVEL!";
            getch();
				clrscr();
            goto bbb;

        	 case 1 :
                    xy:
          			 cout<<"\n \n You have to pay 6 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=6;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
					  	 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     saboggis:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}

                     if(mon!=total)
                     	{
                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto saboggis;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


          else
          	{  clrscr();
   				cout<<"Input not recognize! Try Again!";
      			getch();
      			goto bbb;} break;

       case 2 : goto xy;
		 case 3 : goto xy;
		 case 4 : goto xy;
		 case 5 :
                ab:
       			cout<<"\n \n You have to pay 12 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=12;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     saboggiss:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}
                     if(mon!=total)
                     	{
                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto saboggiss;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


   	else
   		{  clrscr();
   			cout<<"Input not recognize! Try Again!";
      		getch();
      		goto bbb;} break;

		 case 6 : goto ab;
		 case 7 : goto ab;
		 case 8 : goto ab;
		 case 9 : goto ab;
       case 10 : goto ab;
		 case 11 : goto ab;
		 case 12 : goto ab;
		 case 13 : goto ab;
		 case 14 : goto ab;
		 case 15 : goto ab;
		 case 16 : goto ab;
		 case 17 : goto ab;
		 case 18 : goto ab;
		 case 19 :
                    op:
       				 cout<<"\n \n You have to pay 16 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=16;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     sabogiss:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}
                     if(mon!=total)
                     	{
                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto sabogiss;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


       	else
         	{  clrscr();
   				cout<<"Input not recognize! Try Again!";
      			getch();
      			goto bbb;} break;

		 case 20 : goto op;
                          }
                               }
       if(sta>sta2)
        {

   des=sta-sta2;

   		cout<<"\n ******************************************************************************";
         cout<<"\n Your Journey will be from "<<sta<<" to "<<sta2<<" - "<<des<<" Interstation(s)";


        switch(des)
        {

          case 0 : cout<<"\n \n \n NOT POSSIBLE TO TRAVEL!";
          			  getch();
                    clrscr();
        			     goto xx;
         case 1 :
                    cd:
          			 cout<<"\n \n You have to pay 6 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=6;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     vv:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}

                     if(mon!=total)
                     	{
                       	cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto vv;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }

		else
      	{  clrscr();
   			cout<<"Input not recognize! Try Again!";
      		getch();
      		goto bbb;} break;

      		case 2 : goto cd;
		 		case 3 : goto cd;
		 		case 4 : goto cd;
            case 5 :
                    jj:
            		 cout<<"\n \n You have to pay 12 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=12;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     yy:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}

                     if(mon!=total)
                     	{
                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto yy;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


         else
          {  clrscr();
   			 cout<<"Input not recognize! Try Again!";
      	 	 getch();
      		 goto bbb;}  break;

		 		case 6 : goto jj;
		 		case 7 : goto jj;
				case 8 : goto jj;
				case 9 : goto jj;
				case 10 : goto jj;
				case 11 : goto jj;
				case 12 : goto jj;
				case 13 : goto jj;
				case 14 : goto jj;
				case 15 : goto jj;
				case 16 : goto jj;
				case 17 : goto jj;
				case 18 : goto jj;
            case 19 :
                      xj:
              		 cout<<"\n \n You have to pay 16 pesos";
          			 cout<<"\n ******************************************************************************";
                   pmt=16;

                   cout<<"\n \n IMPORTANT: Please Double Check Your Corresponding Journey. Thank you!";
                   cout<<"\n *****************************************************************************";

                   cout<<"\n \n Are you sure you want to proceed [y/n]?: ";
						 x=getch();
                   cout<<x;
                   getch();


						if((x=='y')||(x=='Y'))
   						{

   							clrscr();

      					cout<<"\n ***********************************************************";
                     cout<<"\n Please Do Not Enter Any Letters/Symbols to Avoid Errors!!";
      					cout<<"\n \n FARE "<<pmt<<" pesos";
                     cout<<"\n ***********************************************************";
                     cout<<"\n Enter total of pasenger: ";
                     cin>>pas;

                     total=pmt*pas;

                     hh:
                     cout<<"\n Total Payment: "<<total;

                     cout<<"\n Enter Cash: ";
                     cin>>mon;

                     if(mon>=pmt)
                     {
                     	chg=mon-total;

                        cout<<"****************************************************";
                        cout<<"\n Change: "<<chg<<" pesos";

                        cout<<"\n \n Enjoy your ride :) ";
                        cout<<"\n****************************************************";
                        getch();
                        clrscr();
                        goto dito;
       					}
                     if(mon<total)
                     	{
                        cout<<"***********************************************************";
                        cout<<"\n Sorry you have insufficient cash!";
                        cout<<"\n***********************************************************";
                        getch();
                        clrscr();
                        goto hh;
                        }
                     }

						else if((x=='n'||x=='N'))
 						  {
   						clrscr();
       					goto dito; }


          else
          	{  clrscr();
   				cout<<"Input not recognize! Try Again!";
      			getch();
      			goto bbb;} break;

            case 20 : goto xj;      }

      case 4 : goto bbb;

      default : cout<<"Invalid input!! try again!!";
      				getch(); clrscr(); goto dito;
                             }  break;
      }



getch();
return 0;
}