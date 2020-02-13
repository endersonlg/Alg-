#include "ConversorDeString.h"


ConversorDeString::ConversorDeString()
{
}
System::String^ ConversorDeString::ConverterStringStdParaSystem(string StringStd, String^ StringSystem)
{
	StringSystem = gcnew String(StringStd.c_str());
	Console::WriteLine(StringSystem);
	return StringSystem;
}

void ConversorDeString::ConverterStringSystemParaStd(string& StringStd, String^ StringSystem)
{
	StringStd = msclr::interop::marshal_as<std::string>(StringSystem);
}