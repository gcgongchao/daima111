
#include <jni.h>

extern "C"
jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
{
	return JNI_VERSION_1_4;
}

extern "C"
void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved)
{

}


