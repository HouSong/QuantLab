// CTPSTOCK.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ZQMD.h"
#include "ZQTD.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	//CZQMD * pMdHandler=new CZQMD();
	//pMdHandler->Init();

	///*cout << "数据将输出到c：/cout.txt..." << endl;
	//streambuf* coutbuf = cout.rdbuf();
	//ofstream of("c:/cout.txt");
	//streambuf* filebuf = of.rdbuf();
	//cout.rdbuf(filebuf);*/
	
	printf("hello world from quant team member: xianyang feite and dahou !\n");

	CZQTD * pTdHandler=new CZQTD();
	
	// the init make the connection to the server
	//after the init the demo do nothing at all
	pTdHandler->Init();

	// in fact the demo creat a null thread here and
	HANDLE g_hEvent = CreateEvent(NULL, true, false, NULL);
	printf("after the event creation\n");
	
	//seems demo program never returns here. the second parameter use INTERFACE means wait for ever.
	WaitForSingleObject(g_hEvent, 5000);  // the unit is miliscond.  INFINITE means for ever

	printf("after  WaitForSingleObject\n");
	system("pause");
	printf("should not goto this line\n");
     //of.flush();
     //of.close();
     //cout.rdbuf(coutbuf);
     //cout << "write personal information over..." << endl;

	return 0;
}
