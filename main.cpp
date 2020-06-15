//
// Copyright (C)   .
//
//
/***********************************************************************************************
 ***                 C O N F I D E N T I A L  ---  J V A V   S T U D I O S                   ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : jvavSCRIPT                                                   *
 *                                                                                             *
 *                    File Name : main.cpp                                                     *
 *                                                                                             *
 *                   Programmer : ExecuitIF                                                    *
 *                                                                                             *
 *                   Start Date : 14/06/2020                                                   *
 *                                                                                             *
 *                  Last Update : 15/06/2020                                                   *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *            #                                                                                *
 *            int main(int argc, char** argv)                                                  *
 *            void cls(const int cls)                                                          *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


#include "#.h"

void clss(const int input_cls)
{
	if(cls==0)
	{
		cls;
		cout<<"======================= JVAVSCRIPT BY DR.HY-Z ===============================\n";
		cout<<"||                                                                         ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||        JVAV SCRIPT PROGRAM                   VER 10.0.18363.836         ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||           (C)2020 DR.HY-Z STUDIOS  All rights reserved                  ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||           The author of the JSC & Jvinscripts:ExecuitIF                 ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||                      ENTER \"help\" TO GET HELP!                          ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||             Online push updates are now not supported!                  ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||          Compile jvavScript source file are now supported!              ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"=============================================================================\n\n\n";
	}
	else
	{
		;
	}
}

int main(int argc, char** argv)
{
	string input_JVAV,tmp,tmp1;
	clss(0);
	while(1)
	{
		cout<<"JVAVScri>>>";
		cin>>input_JVAV;
		if(input_JVAV=="help")
		{
			cout<<"-------- JVAVSCRIPT HELP PAGE   1/1 ---------------\n";
			cout<<"1 \"help\":show this page;\n";
			cout<<"2 \"complete\":complete your file (*.jvsx);\n";
			cout<<"3 \"clear\": clear the screen\n";
			cout<<"4 \"kokimake\":make a koki\n";
			cout<<"5 \"gko\":get the koki file\n";
			cout<<"6 \"callcmd\":run cmd client\n";
			cout<<"7 \"quit\":exit jvav;\n";
			cout<<"8 \"license\":read the license;\n";
			cout<<"9 \"credits\":show you the authors.\n\n";
		}
		else if(input_JVAV=="kokimake")
		{
			ofstream fout;
			system("cd C:\\Programdata&md cokis");
			system("cd C:\\Programdata\\cokis&cd.>UUIDLEAST.kokis");
			fout.open("UUIDLEAST.kokis");
			clss(0);
			cout<<"Please enter the information:(net address+' '+information)";
			cin>>tmp>>tmp1;
			fout<<tmp<<" "<<tmp1;
			fout<<flush;
			fout.close();
		}
		else if(input_JVAV=="gko")
		{
			ifstream fin("C:\\Programdata\\cokis\\UUIDLEAST.kokis");
			fin>>tmp>>tmp1;
			cout<<endl<<endl;
			cout<<tmp<<" "<<tmp1;
			cout<<endl<<endl;
		}
		else if(input_JVAV=="callcmd")
		{
			system("%windir%\\system32\\cmd.exe");
		}
		else if(input_JVAV=="complete")
		{
			cout<<"JVAVScri>JVS++.exe>>>COMPLETE:PLEASE ENTER THE PATH OF YOUR FILE (*.jvsx)>>>";
			cin>>tmp;
			cout<<"JAVAScri>JVS++.exe>>>Applying SpecialSource......\n";
			cout<<"JVAVScri>JVS++.exe>>>COMPLETING......>\n";
			cout<<"JVAVScri>JVS++.exe>>>Creating renamed srg......\n";
			cout<<"JVAVScri>JVS++.exe>>>Filtering classes......\n";
			cout<<"JVAVScri>JVS++.exe>>>Copying sources......\n";
			cout<<"JVAVScri>JVS++.exe>>>Applying fernflower fixes......\n";
			cout<<"JVAVScri>JVS++.exe>>>Applying RunDl132.exe......\n\n\n";
			cout<<"Finded ERROR 1,Warring 0,stop completing......\n";
			cout<<"=========================================ERROR REPORT=========================================\n\n";
			cout<<"line:0,NUM:0,class:%JVAVDIR%\\JVS++.exe   [Error]: Failed to find properly connected toilet bowl\n";
			cout<<"line:0,NUM:0,class:%JVAVDIR%\\JVS++.exe   [TIPS]: This choice is just a joke,please use the others!\n\n";
			cout<<"==============================================================================================\n\n";
		}
		else if(input_JVAV=="clear")
		{
			clss(0);
		}
		else if(input_JVAV=="license")
		{
			cout<<"\n\n================JVAVSCRIPT LICENSE=======================\n\n";
			cout<<"1 COPYRIGHTS DR.HY-Z,ALL RIGHT RESERVED!!!!!!!!!!!!!\n\n";
			cout<<"=========================================================\n\n\n";
		}
		else if(input_JVAV=="credits")
		{
			cout<<"\n\nAUTHOR:DR.HY-Z\n";
			cout<<"\nJVS++.exe AUTHOR:ExecuitIF\n\n";
		}
		else if(input_JVAV=="quit")
		{
			return false;
		}
		else
		{
			cout<<"\nInvalid input operation!\n\n";
		}
	}
	return 0;
}
