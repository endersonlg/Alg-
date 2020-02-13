#include <iostream>
#include <msclr\marshal_cppstd.h>
#pragma once

using namespace std;
using namespace System;
using namespace System::Configuration;
using namespace Runtime::InteropServices;	


class  ConversorDeString
{
public:

    ConversorDeString();
	System::String^ ConverterStringStdParaSystem(string, System::String^);
	void ConverterStringSystemParaStd(string&, System::String^);

};

