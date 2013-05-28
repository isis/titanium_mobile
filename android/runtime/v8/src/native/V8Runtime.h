/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#ifndef V8_RUNTIME_H
#define V8_RUNTIME_H

#include <jni.h>
#include <v8.h>

namespace titanium {
class V8Runtime
{
public:
	static v8::Persistent<v8::Context> globalContext;
	static v8::Isolate* isolate;
	static v8::Persistent<v8::Object> krollGlobalObject;
	static v8::Persistent<v8::Array> moduleContexts;

	static jobject javaInstance;

	static void collectWeakRef(v8::Persistent<v8::Value> ref, void *parameter);
	static void bootstrap(v8::Local<v8::Object> global);

	static bool debuggerEnabled;
	static bool DBG;
};
}
;

#endif
