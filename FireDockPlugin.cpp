#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FireDockPlugin.h"


void FireDockPlugin::input(std::string file) {
 inputfile = file;
}

void FireDockPlugin::run() {
  std::ifstream infile(inputfile, std::ios::in);
  std::string command;
  command = "FireDock "+inputfile;
     system(command.c_str());
}

void FireDockPlugin::output(std::string file) {
}

PluginProxy<FireDockPlugin> FireDockPluginProxy = PluginProxy<FireDockPlugin>("FireDock", PluginManager::getInstance());
