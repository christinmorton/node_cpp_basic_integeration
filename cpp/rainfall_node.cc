#include <node.h>
#include <v8.h>
#include "rainfall.h"

using namespace v8;

void init(Handle<Object> exports, Handle<Object> module){
  // register functions here..
}

// Associates the module name with initializaiton logic
NODE_MODULE(rainfall, init);