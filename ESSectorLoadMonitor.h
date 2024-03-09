#pragma once
#include <EuroScopePlugIn.h>
#include <string>


using namespace std;
using namespace EuroScopePlugIn;

#define MY_PLUGIN_NAME		"ES Sector Load Monitor"
#define MY_PLUGIN_VERSION   "0.0.1"
#define MY_PLUGIN_DEVELOPER "Stephen Slot Odgaard sso999@hotmail.com"
#define MY_PLUGIN_COPYRIGHT "GPL v3"


class ESPlugin : public EuroScopePlugIn::CPlugIn
{
private:


public:
	ESPlugin();
	virtual ~ESPlugin();

};