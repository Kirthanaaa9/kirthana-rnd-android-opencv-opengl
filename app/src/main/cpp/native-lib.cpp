#include <jni.h>
#include <opencv2/opencv.hpp>

using namespace cv;

extern "C"
JNIEXPORT void JNICALL
Java_com_example_edgedemo_MainActivity_processFrame(JNIEnv *env, jobject thiz,
                                                    jlong addrInput, jlong addrOutput) {
    // addrInput and addrOutput are Mat pointers passed from Java
    Mat &input = *(Mat *) addrInput;
    Mat &output = *(Mat *) addrOutput;

    // Convert to grayscale
    cvtColor(input, output, COLOR_RGBA2GRAY);

    // Apply Canny edge detection
    Canny(output, output, 100, 200);
}

