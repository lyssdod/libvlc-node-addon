#include <node.h>
#include <nan.h>
#include <v8.h>

NAN_METHOD(libvlc_test) {
	/* some goodies here */
	info.GetReturnValue().SetUndefined();
}

NAN_MODULE_INIT(init) {
	Nan::Set(target, Nan::New<v8::String>("libvlc_test").ToLocalChecked(), Nan::GetFunction(Nan::New<v8::FunctionTemplate>(libvlc_test)).ToLocalChecked());
}

NODE_MODULE(addon, init)