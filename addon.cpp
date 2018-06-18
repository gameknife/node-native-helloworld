#include <node.h>
namespace demo {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Method(const FunctionCallbackInfo<Value>& args) 
{ 
    // a basic method, set return to args
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(String::NewFromUtf8(isolate, "hello world! a message generate by c++"));
}

void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "hello", Method); // addon.hello -> method
}

NODE_MODULE(addon, init) // use marco to export method

}
