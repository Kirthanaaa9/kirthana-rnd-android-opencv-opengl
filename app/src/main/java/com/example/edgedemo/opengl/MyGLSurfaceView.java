package com.example.edgedemo.opengl;

import android.content.Context;
import android.opengl.GLSurfaceView;

public class MyGLSurfaceView extends GLSurfaceView {

    public MyGLSurfaceView(Context context) {
        super(context);

        // OpenGL ES 2.0
        setEGLContextClientVersion(2);

        // Set Renderer
        setRenderer(new MyGLRenderer());
    }
}
