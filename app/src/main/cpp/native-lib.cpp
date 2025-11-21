#include <jni.h>
#include <opencv2/opencv.hpp>

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_edgedemo_MainActivity_dummyValue(JNIEnv *env, jobject thiz) {
    return 42;
}
