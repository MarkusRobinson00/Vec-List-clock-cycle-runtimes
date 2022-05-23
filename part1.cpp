//part1.cpp
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "vector.h"
#include "list.h"


using namespace std;

double elapsed_time(clock_t start, clock_t finish){
	return (finish-start)/ (double)(CLOCKS_PER_SEC/1000);
}

int main(){

	//construct a vector and list of same size using push_back
	//record the time it takes to construct each list
	//and then the time it takes to execute visitAll()


	//vector construction
	Vector<int> intvec;
	Vector<char> charvec;
	Vector<float> floatvec;
	Vector<double> doublevec;
	

	Vector<int> intvec2;
	Vector<char> charvec2;
	Vector<float> floatvec2;
	Vector<double> doublevec2;

	Vector<int> intvec3;
	Vector<char> charvec3;
	Vector<float> floatvec3;
	Vector<double> doublevec3;

	Vector<int> intvec4;
	Vector<char> charvec4;
	Vector<float> floatvec4;
	Vector<double> doublevec4;

	List<int> intlist;
	List<char> charlist;
	List<float> floatlist;
	List<double> doublelist;

	List<int> intlist2;
	List<char> charlist2;
	List<float> floatlist2;
	List<double> doublelist2;

	List<int> intlist3;
	List<char> charlist3;
	List<float> floatlist3;
	List<double> doublelist3;

	List<int> intlist4;
	List<char> charlist4;
	List<float> floatlist4;
	List<double> doublelist4;

	int sz1 = 500;
	int sz2 = 3000;
	int sz3 = 10000;
	int sz4 = 150000;


	clock_t start;
	clock_t finish;


	// START OF TIME TAKEN TO PUSH SZ1
	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        intvec.push_back( i );
    }
	finish = clock();

	double intvec_sz1_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        charvec.push_back( (char)i );
    }
	finish = clock();
	double charvec_sz1_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        floatvec.push_back( (float)i );
    }
	finish = clock();
	double floatvec_sz1_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        doublevec.push_back( (double)i );
    }
	finish = clock();
	double doublevec_sz1_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH SZ1

	// START OF TIME TAKEN TO PUSH SZ2
	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        intvec2.push_back( i );
    }
	finish = clock();

	double intvec2_sz2_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        charvec2.push_back( (char)i );
    }
	finish = clock();
	double charvec2_sz2_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        floatvec2.push_back( (float)i );
    }
	finish = clock();
	double floatvec2_sz2_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        doublevec2.push_back( (double)i );
    }
	finish = clock();
	double doublevec2_sz2_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH SZ2

	// START OF TIME TAKEN TO PUSH SZ3
	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        intvec3.push_back( i );
    }
	finish = clock();

	double intvec3_sz3_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        charvec3.push_back( (char)i );
    }
	finish = clock();
	double charvec3_sz3_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        floatvec3.push_back( (float)i );
    }
	finish = clock();
	double floatvec3_sz3_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        doublevec3.push_back( (double)i );
    }
	finish = clock();
	double doublevec3_sz3_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH SZ3

	// START OF TIME TAKEN TO PUSH SZ4
	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        intvec4.push_back( i );
    }
	finish = clock();

	double intvec4_sz4_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        charvec4.push_back( (char)i );
    }
	finish = clock();
	double charvec4_sz4_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        floatvec4.push_back( (float)i );
    }
	finish = clock();
	double floatvec4_sz4_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        doublevec4.push_back( (double)i );
    }
	finish = clock();
	double doublevec4_sz4_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH sz4

	//NOW LISTS

	// START OF TIME TAKEN TO PUSH SZ1
	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        intlist.push_back( i );
    }
	finish = clock();

	double intlist_sz1_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        charlist.push_back( (char)i );
    }
	finish = clock();
	double charlist_sz1_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        floatlist.push_back( (float)i );
    }
	finish = clock();
	double floatlist_sz1_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz1; ++i )
    {
        doublelist.push_back( (double)i );
    }
	finish = clock();
	double doublelist_sz1_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH SZ1

	// START OF TIME TAKEN TO PUSH SZ2
	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        intlist2.push_back( i );
    }
	finish = clock();

	double intlist2_sz2_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        charlist2.push_back( (char)i );
    }
	finish = clock();
	double charlist2_sz2_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        floatlist2.push_back( (float)i );
    }
	finish = clock();
	double floatlist2_sz2_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz2; ++i )
    {
        doublelist2.push_back( (double)i );
    }
	finish = clock();
	double doublelist2_sz2_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH SZ2

	// START OF TIME TAKEN TO PUSH SZ3
	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        intlist3.push_back( i );
    }
	finish = clock();

	double intlist3_sz3_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        charlist3.push_back( (char)i );
    }
	finish = clock();
	double charlist3_sz3_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        floatlist3.push_back( (float)i );
    }
	finish = clock();
	double floatlist3_sz3_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz3; ++i )
    {
        doublelist3.push_back( (double)i );
    }
	finish = clock();
	double doublelist3_sz3_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH SZ3

	// START OF TIME TAKEN TO PUSH SZ4
	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        intlist4.push_back( i );
    }
	finish = clock();

	double intlist4_sz4_time = elapsed_time(start, finish);
	
	
	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        charlist4.push_back( (char)i );
    }
	finish = clock();
	double charlist4_sz4_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        floatlist4.push_back( (float)i );
    }
	finish = clock();
	double floatlist4_sz4_time = elapsed_time(start, finish);


	start = clock();
	for( int i = 0 ; i < sz4; ++i )
    {
        doublelist4.push_back( (double)i );
    }
	finish = clock();
	double doublelist4_sz4_time = elapsed_time(start, finish);
	

	//END OF TIME TAKEN TO PUSH SZ4


	//VISIT ALL

	start = clock();
	intvec.visitAll();
	finish = clock();
	double int_vec_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	intvec2.visitAll();
	finish = clock();
	double int_vec_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	intvec3.visitAll();
	finish = clock();
	double int_vec_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	intvec4.visitAll();
	finish = clock();
	double int_vec_visitAll_4 = elapsed_time(start, finish);

	
	start = clock();
	charvec.visitAll();
	finish = clock();
	double char_vec_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	charvec2.visitAll();
	finish = clock();
	double char_vec_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	charvec3.visitAll();
	finish = clock();
	double char_vec_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	charvec4.visitAll();
	finish = clock();
	double char_vec_visitAll_4 = elapsed_time(start, finish);



	start = clock();
	floatvec.visitAll();
	finish = clock();
	double float_vec_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	floatvec2.visitAll();
	finish = clock();
	double float_vec_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	floatvec3.visitAll();
	finish = clock();
	double float_vec_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	floatvec4.visitAll();
	finish = clock();
	double float_vec_visitAll_4 = elapsed_time(start, finish);

	start = clock();
	doublevec.visitAll();
	finish = clock();
	double double_vec_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	doublevec2.visitAll();
	finish = clock();
	double double_vec_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	doublevec3.visitAll();
	finish = clock();
	double double_vec_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	doublevec4.visitAll();
	finish = clock();
	double double_vec_visitAll_4 = elapsed_time(start, finish);


	//LISTS

	start = clock();
	intlist.visitAll();
	finish = clock();
	double int_list_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	intlist2.visitAll();
	finish = clock();
	double int_list_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	intlist3.visitAll();
	finish = clock();
	double int_list_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	intlist4.visitAll();
	finish = clock();
	double int_list_visitAll_4 = elapsed_time(start, finish);

	
	start = clock();
	charlist.visitAll();
	finish = clock();
	double char_list_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	charlist2.visitAll();
	finish = clock();
	double char_list_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	charlist3.visitAll();
	finish = clock();
	double char_list_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	charlist4.visitAll();
	finish = clock();
	double char_list_visitAll_4 = elapsed_time(start, finish);



	start = clock();
	floatlist.visitAll();
	finish = clock();
	double float_list_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	floatlist2.visitAll();
	finish = clock();
	double float_list_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	floatlist3.visitAll();
	finish = clock();
	double float_list_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	floatlist4.visitAll();
	finish = clock();
	double float_list_visitAll_4 = elapsed_time(start, finish);

	start = clock();
	doublelist.visitAll();
	finish = clock();
	double double_list_visitAll_1 = elapsed_time(start, finish);

	start = clock();
	doublelist2.visitAll();
	finish = clock();
	double double_list_visitAll_2 = elapsed_time(start, finish);

	start = clock();
	doublelist3.visitAll();
	finish = clock();
	double double_list_visitAll_3 = elapsed_time(start, finish);

	start = clock();
	doublelist4.visitAll();
	finish = clock();
	double double_list_visitAll_4 = elapsed_time(start, finish);




//MAIN OUTPUT
	cout << "Markus Robinson" << endl;
	cout << "301358252" << endl;
	cout << "markusr" << endl;
	cout << "Program: part1.cpp" << endl;
//INTEGERS
	//
	cout << "Type of Elements: INTEGER" << endl;
	cout << "Number of Elements: " << sz1 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << intvec_sz1_time << endl;
	cout << "Time for list insertion: " << intlist_sz1_time << endl;
	cout << "Time for vector visiting: " << int_vec_visitAll_1 << endl;
	cout << "Time for list visiting: " << int_list_visitAll_1 << endl << endl;
	//
	cout << "Type of Elements: INTEGER" << endl;
	cout << "Number of Elements: " << sz2 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << intvec2_sz2_time << endl;
	cout << "Time for list insertion: " << intlist2_sz2_time << endl;
	cout << "Time for vector visiting: " << int_vec_visitAll_2 << endl;
	cout << "Time for list visiting: " << int_list_visitAll_2 << endl << endl;
	//
	cout << "Type of Elements: INTEGER" << endl;
	cout << "Number of Elements: " << sz3 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << intvec3_sz3_time << endl;
	cout << "Time for list insertion: " << intlist3_sz3_time << endl;
	cout << "Time for vector visiting: " << int_vec_visitAll_3 << endl;
	cout << "Time for list visiting: " << int_list_visitAll_3 << endl << endl;
	//
	cout << "Type of Elements: INTEGER" << endl;
	cout << "Number of Elements: " << sz4 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << intvec4_sz4_time << endl;
	cout << "Time for list insertion: " << intlist4_sz4_time << endl;
	cout << "Time for vector visiting: " << int_vec_visitAll_4 << endl;
	cout << "Time for list visiting: " << int_list_visitAll_4 << endl << endl << endl << endl;

//CHARACTERS
	//
	cout << "Type of Elements: CHARACTER" << endl;
	cout << "Number of Elements: " << sz1 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << charvec_sz1_time << endl;
	cout << "Time for list insertion: " << charlist_sz1_time << endl;
	cout << "Time for vector visiting: " << char_vec_visitAll_1 << endl;
	cout << "Time for list visiting: " << char_list_visitAll_1 << endl << endl;
	//
	cout << "Type of Elements: CHARACTER" << endl;
	cout << "Number of Elements: " << sz2 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << charvec2_sz2_time << endl;
	cout << "Time for list insertion: " << charlist2_sz2_time << endl;
	cout << "Time for vector visiting: " << char_vec_visitAll_2 << endl;
	cout << "Time for list visiting: " << char_list_visitAll_2 << endl << endl;
	//
	cout << "Type of Elements: CHARACTER" << endl;
	cout << "Number of Elements: " << sz3 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << charvec3_sz3_time << endl;
	cout << "Time for list insertion: " << charlist3_sz3_time << endl;
	cout << "Time for vector visiting: " << char_vec_visitAll_3 << endl;
	cout << "Time for list visiting: " << char_list_visitAll_3 << endl << endl;
	//
	cout << "Type of Elements: CHARACTER" << endl;
	cout << "Number of Elements: " << sz4 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << charvec4_sz4_time << endl;
	cout << "Time for list insertion: " << charlist4_sz4_time << endl;
	cout << "Time for vector visiting: " << char_vec_visitAll_4 << endl;
	cout << "Time for list visiting: " << char_list_visitAll_4 << endl << endl << endl << endl;
	

//FLOAT
	//
	cout << "Type of Elements: FLOAT" << endl;
	cout << "Number of Elements: " << sz1 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << floatvec_sz1_time << endl;
	cout << "Time for list insertion: " << floatlist_sz1_time << endl;
	cout << "Time for vector visiting: " << float_vec_visitAll_1 << endl;
	cout << "Time for list visiting: " << float_list_visitAll_1 << endl << endl;
	//
	cout << "Type of Elements: FLOAT" << endl;
	cout << "Number of Elements: " << sz2 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << floatvec2_sz2_time << endl;
	cout << "Time for list insertion: " << floatlist2_sz2_time << endl;
	cout << "Time for vector visiting: " << float_vec_visitAll_2 << endl;
	cout << "Time for list visiting: " << float_list_visitAll_2 << endl << endl;
	//
	cout << "Type of Elements: FLOAT" << endl;
	cout << "Number of Elements: " << sz3 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << floatvec3_sz3_time << endl;
	cout << "Time for list insertion: " << floatlist3_sz3_time << endl;
	cout << "Time for vector visiting: " << float_vec_visitAll_3 << endl;
	cout << "Time for list visiting: " << float_list_visitAll_3 << endl << endl;
	//
	cout << "Type of Elements: FLOAT" << endl;
	cout << "Number of Elements: " << sz4 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << floatvec4_sz4_time << endl;
	cout << "Time for list insertion: " << floatlist4_sz4_time << endl;
	cout << "Time for vector visiting: " << float_vec_visitAll_4 << endl;
	cout << "Time for list visiting: " << float_list_visitAll_4 << endl << endl << endl << endl;


//DOUBLE
	//
	cout << "Type of Elements: DOUBLE" << endl;
	cout << "Number of Elements: " << sz1 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << doublevec_sz1_time << endl;
	cout << "Time for list insertion: " << doublelist_sz1_time << endl;
	cout << "Time for vector visiting: " << double_vec_visitAll_1 << endl;
	cout << "Time for list visiting: " << double_list_visitAll_1 << endl << endl;
	//
	cout << "Type of Elements: DOUBLE" << endl;
	cout << "Number of Elements: " << sz2 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << doublevec2_sz2_time << endl;
	cout << "Time for list insertion: " << doublelist2_sz2_time << endl;
	cout << "Time for vector visiting: " << double_vec_visitAll_2 << endl;
	cout << "Time for list visiting: " << double_list_visitAll_2 << endl << endl;
	//
	cout << "Type of Elements: DOUBLE" << endl;
	cout << "Number of Elements: " << sz3 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << doublevec3_sz3_time << endl;
	cout << "Time for list insertion: " << doublelist3_sz3_time << endl;
	cout << "Time for vector visiting: " << double_vec_visitAll_3 << endl;
	cout << "Time for list visiting: " << double_list_visitAll_3 << endl << endl;
	//
	cout << "Type of Elements: DOUBLE" << endl;
	cout << "Number of Elements: " << sz4 << endl;
	cout << "Time Units: MILLISECONDS" << endl;
	cout << "Time for vector insertion: " << doublevec4_sz4_time << endl;
	cout << "Time for list insertion: " << doublelist4_sz4_time << endl;
	cout << "Time for vector visiting: " << double_vec_visitAll_4 << endl;
	cout << "Time for list visiting: " << double_list_visitAll_4 << endl << endl << endl << endl;

}
