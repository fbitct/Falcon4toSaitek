#pragma once
ref class FalconConfig;

#include <string>
#include <vector>

ref class FalconConfig
{
public:
	F4SharedMem::FalconDataFormats FalconType;
	bool WaitForFalcon;
	bool AutoLaunch;
	System::Collections::Generic::Dictionary< F4SharedMem::FalconDataFormats, System::String^ > FalconPaths;
	System::Collections::Generic::Dictionary< F4SharedMem::FalconDataFormats, System::String^ > FalconParameters;
	System::Collections::Generic::Dictionary< System::String^, System::Collections::Generic::List<System::String^>^ > StartupConfigs;
	
	FalconConfig( void );
	
	void Load( void );
	void LoadLine( std::vector<std::string> cmd_tokens );
	void Save( void );
};
