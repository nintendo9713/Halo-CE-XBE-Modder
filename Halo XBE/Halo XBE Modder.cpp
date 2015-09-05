// Halo XBE Modder.cpp : Defines the entry point for the console application.
//
/*
#include "stdafx.h"
#include "functions.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	bool restart=false;
	halo myhalo;
	myhalo.LoadSettings();
	do
	{
		restart=false;
		myhalo.exit=false;
	do
	{
		do
		{
			myhalo.printstart();
			myhalo.input(4);
			if(myhalo.numinput=='1')
			{
				myhalo.input(1);
					}
			else if(myhalo.numinput=='2')
			{
				myhalo.input(2);			
			}
			else if(myhalo.numinput=='3')
			{
				myhalo.printxbeinfo();
			}
		}
		while(myhalo.numinput!='3');
	}
	while(myhalo.start==false);

	system("cls");

	do
	{
		myhalo.printmenu();
		myhalo.input(0);
		if(myhalo.numinput=='1')
		{
			myhalo.EditTitleName();
		}
		else if(myhalo.numinput=='2')
		{
			myhalo.EditVersion();
		}
		else if(myhalo.numinput=='3')
		{
			myhalo.EditMapFolder();
		}
		else if(myhalo.numinput=='4')
		{
			myhalo.EditMapVersion();
		}
		else if(myhalo.numinput=='5')
		{
			restart=true;
			myhalo.exit=true;
		}
		else if(myhalo.numinput=='6')
		{
			myhalo.printabout();
		}
		else if(myhalo.numinput=='7')
		{
			
		}
		else 
		{
			cout<<"You fail";
;			for(int i=0;i<72;i++)
			{
				cout<<".";
			}
			cout<<"Goodbye";
			return 0;
		}
		system("cls");
	}
	while(myhalo.exit!=true);
	}
	while(restart==true);


	return 0;
}
*/