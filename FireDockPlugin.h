#ifndef FIREDOCKPLUGIN_H
#define FIREDOCKPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class FireDockPlugin : public Plugin
{
public: 
 std::string toString() {return "FireDock";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
