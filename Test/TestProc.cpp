#include "pch.h"
#include "CppUnitTest.h"
#include "../TechOfProg_Proc/simple_atd.h"
#include "../TechOfProg_Proc/simple_In.cpp"
#include "../TechOfProg_Proc/simple_Out.cpp"
#include "../TechOfProg_Proc/simple_real.cpp"
#include "../TechOfProg_Proc/polar_atd.h"
#include "../TechOfProg_Proc/polar_In.cpp"
#include "../TechOfProg_Proc/polar_Out.cpp"
#include "../TechOfProg_Proc/polar_real.cpp"
#include "../TechOfProg_Proc/complex_atd.h"
#include "../TechOfProg_Proc/complex_In.cpp"
#include "../TechOfProg_Proc/complex_Out.cpp"
#include "../TechOfProg_Proc/complex_real.cpp"
#include "../TechOfProg_Proc/container_atd.h"
#include "../TechOfProg_Proc/container_In.cpp"
#include "../TechOfProg_Proc/container_Out.cpp"
#include "../TechOfProg_Proc/container_Constr.cpp"
#include "../TechOfProg_Proc/number_atd.h"
#include "../TechOfProg_Proc/number_In.cpp"
#include "../TechOfProg_Proc/number_Out.cpp"
#include "../TechOfProg_Proc/number_real.cpp"
#include "../TechOfProg_Proc/container_OutComplex.cpp"
#include "../TechOfProg_Proc/sort.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;
using namespace simple_numbers;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProc
{
	TEST_CLASS(TestProc)
	{
	public:

		string Read(const char* filename)
		{
			ifstream ifst(filename);
			string s;
			while (!ifst.eof())
			{
				ifst >> s;
			}
			ifst.close();
			return s;
		}
		TEST_METHOD(TestOutIn)
		{
			ifstream ifst("in.txt");
			ofstream ofst("out.txt");
			container c;
			Init(c);
			In(c, ifst);
			Out(c, ofst);
			string s1 = Read("out.txt");
			string s2 = Read("outMy.txt");
			Assert::AreEqual(s1, s2);

			ifstream ifst1("in1.txt");
			ofstream ofst1("out1.txt");
			container c1;
			Init(c1);
			In(c1, ifst1);
			Out(c1, ofst1);
			string s3 = Read("out1.txt");
			string s4 = Read("outMy1.txt");
			Assert::AreEqual(s3, s4);

			ifstream ifst2("in2.txt");
			ofstream ofst2("out2.txt");
			container c2;
			Init(c2);
			In(c2, ifst2);
			Out(c2, ofst2);
			string s5 = Read("out2.txt");
			string s6 = Read("outMy2.txt");
			Assert::AreEqual(s5, s6);
		}

		TEST_METHOD(TestSort)
		{
			ifstream ifst("in.txt");
			ofstream ofst("outSort.txt");
			container c;
			Init(c);
			In(c, ifst);
			Sort(c);
			Out(c, ofst);
			string s1 = Read("outSort.txt");
			string s2 = Read("outMySort.txt");
			Assert::AreEqual(s1, s2);

			ifstream ifst1("in1.txt");
			ofstream ofst1("outSort1.txt");
			container c1;
			Init(c1);
			In(c1, ifst1);
			Sort(c1);
			Out(c1, ofst1);
			string s3 = Read("outSort1.txt");
			string s4 = Read("outMySort1.txt");
			Assert::AreEqual(s3, s4);

			ifstream ifst2("in2.txt");
			ofstream ofst2("outSort2.txt");
			container c2;
			Init(c2);
			In(c2, ifst2);
			Sort(c2);
			Out(c2, ofst2);
			string s5 = Read("outSort2.txt");
			string s6 = Read("outMySort2.txt");
			Assert::AreEqual(s5, s6);

			ifstream ifst3("inSort.txt");
			ofstream ofst3("outSort3.txt");
			container c3;
			Init(c3);
			In(c3, ifst3);
			Sort(c3);
			Out(c3, ofst3);
			string s7 = Read("outSort3.txt");
			string s8 = Read("outMySort3.txt");
			Assert::AreEqual(s7, s8);
		}

		TEST_METHOD(TestOutComplex)
		{
			ifstream ifst("in.txt");
			ofstream ofst("outComp.txt");
			container c;
			Init(c);
			In(c, ifst);
			OutComplex(c, ofst);
			string s1 = Read("outComp.txt");
			string s2 = Read("outMyComp.txt");
			Assert::AreEqual(s1, s2);

			ifstream ifst1("in1.txt");
			ofstream ofst1("outComp1.txt");
			container c1;
			Init(c1);
			In(c1, ifst1);
			OutComplex(c1, ofst1);
			string s3 = Read("outComp1.txt");
			string s4 = Read("outMyComp1.txt");
			Assert::AreEqual(s3, s4);

			ifstream ifst2("in2.txt");
			ofstream ofst2("outComp2.txt");
			container c2;
			Init(c2);
			In(c2, ifst2);
			OutComplex(c2, ofst2);
			string s5 = Read("outComp2.txt");
			string s6 = Read("outMyComp2.txt");
			Assert::AreEqual(s5, s6);
		}

		TEST_METHOD(TestClear)
		{
			ifstream ifst("inClear.txt");
			ofstream ofst("outClear.txt");
			container c;
			Init(c);
			In(c, ifst);
			Out(c, ofst);
			Clear(c);
			Out(c, ofst);
			string s1 = Read("outClear.txt");
			string s2 = Read("outMyClear.txt");
			Assert::AreEqual(s1, s1);
		}

		TEST_METHOD(TestInit)
		{
			ifstream ifst("in.txt");
			container c;
			Init(c);
			int a = c.len;
			Assert::AreEqual(0, a);
			Assert::IsNull(c.head);
			Assert::IsNull(c.tail);
		}

		TEST_METHOD(RealSimple)
		{
			simple* s = new simple;
			s->a = 10;
			s->b = 5;
			int actual = Real(s);
			Assert::AreEqual(2, actual);

			simple* s1 = new simple;
			s1->a = 5;
			s1->b = 5;
			int actual1 = Real(s1);
			Assert::AreEqual(1, actual1);

			simple* s2 = new simple;
			s2->a = 5;
			s2->b = 10;
			int actual2 = Real(s2);
			Assert::AreEqual(0, actual2);
		}

		TEST_METHOD(RealComplex)
		{
			complex* c = new complex;
			c->x = 8;
			c->y = 6;
			int actual = Real(c);
			Assert::AreEqual(10, actual);

			complex* c1 = new complex;
			c1->x = 0;
			c1->y = 0;
			int actual1 = Real(c1);
			Assert::AreEqual(0, actual1);

			complex* c2 = new complex;
			c2->x = 1;
			c2->y = 2;
			int actual2 = Real(c2);
			Assert::AreEqual(2, actual2);

		}

		TEST_METHOD(RealPolar)
		{
			polar* p = new polar;
			p->r = 360;
			p->fi = 1;
			int actual = Real(p);
			Assert::AreEqual(360, actual);

			polar* p1 = new polar;
			p1->r = 1;
			p1->fi = 360;
			int actual1 = Real(p1);
			Assert::AreEqual(1, actual1);

			polar* p2 = new polar;
			p2->r = 0;
			p2->fi = 0;
			int actual2 = Real(p2);
			Assert::AreEqual(0, actual2);

		}

		TEST_METHOD(InSimple1) 
		{
			ifstream ifst("inSimple.txt");
			simple* actual = InSimple(ifst);
			simple* s = new simple;
			s->a = 10;
			s->b = 5;
			Assert::AreEqual(s->a, actual->a);
			Assert::AreEqual(s->b, actual->b);

			ifstream ifst1("inSimple1.txt");
			simple* actual1 = InSimple(ifst1);
			simple* s1 = new simple;
			s1->a = 5;
			s1->b = 5;
			Assert::AreEqual(s1->a, actual1->a);
			Assert::AreEqual(s1->b, actual1->b);

			ifstream ifst2("inSimple2.txt");
			simple* actual2 = InSimple(ifst2);
			simple* s2 = new simple;
			s2->a = 5;
			s2->b = 10;
			Assert::AreEqual(s2->a, actual2->a);
			Assert::AreEqual(s2->b, actual2->b);
		}

		TEST_METHOD(InComplex1)
		{
			ifstream ifst("inComplex.txt");
			complex* actual = InComplex(ifst);
			complex* c = new complex;
			c->x = 8;
			c->y = 6;
			Assert::AreEqual(c->x, actual->x);
			Assert::AreEqual(c->y, actual->y);

			ifstream ifst1("inComplex1.txt");
			complex* actual1 = InComplex(ifst1);
			complex* c1 = new complex;
			c1->x = 0;
			c1->y = 0;
			Assert::AreEqual(c1->x, actual1->x);
			Assert::AreEqual(c1->y, actual1->y);

			ifstream ifst2("inComplex2.txt");
			complex* actual2 = InComplex(ifst2);
			complex* c2 = new complex;
			c2->x = 1;
			c2->y = 2;
			Assert::AreEqual(c2->x, actual2->x);
			Assert::AreEqual(c2->y, actual2->y);
		}

		TEST_METHOD(InPolar1)
		{
			ifstream ifst("inPolar.txt");
			polar* actual = InPolar(ifst);
			polar* p = new polar;
			p->r = 360;
			p->fi = 1;
			Assert::AreEqual(p->r, actual->r);
			Assert::AreEqual(p->fi, actual->fi);

			ifstream ifst1("inPolar1.txt");
			polar* actual1 = InPolar(ifst1);
			polar* p1 = new polar;
			p1->r = 1;
			p1->fi = 360;
			Assert::AreEqual(p1->r, actual1->r);
			Assert::AreEqual(p1->fi, actual1->fi);

			ifstream ifst2("inPolar2.txt");
			polar* actual2 = InPolar(ifst2);
			polar* p2 = new polar;
			p2->r = 0;
			p2->fi = 0;
			Assert::AreEqual(p2->r, actual2->r);
			Assert::AreEqual(p2->fi, actual2->fi);
		}

		TEST_METHOD(OutSimple)
		{
			ifstream ifst("inSimple.txt");
			ofstream ofst("outSimple.txt");
			simple* nb = new simple;
			nb = InSimple(ifst);
			Out(nb, ofst);
			string s1 = Read("outSimple.txt");
			string s2 = Read("outMySimple.txt");
			Assert::AreEqual(s1, s2);
		}

		TEST_METHOD(OutComplex1)
		{
			ifstream ifst("inComplex.txt");
			ofstream ofst("outComplex.txt");
			complex* nb = new complex;
			nb = InComplex(ifst);
			Out(nb, ofst);
			string s1 = Read("outComplex.txt");
			string s2 = Read("outMyComplex.txt");
			Assert::AreEqual(s1, s2);
		}

		TEST_METHOD(OutPolar)
		{
			ifstream ifst("inPolar.txt");
			ofstream ofst("outPolar.txt");
			polar* nb = new polar;
			nb = InPolar(ifst);
			Out(nb, ofst);
			string s1 = Read("outPolar.txt");
			string s2 = Read("outMyPolar.txt");
			Assert::AreEqual(s1, s2);
		}
	
	};
}
