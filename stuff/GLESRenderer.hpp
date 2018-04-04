//
//  GLESRenderer.hpp
//  c8051intro3
//
//  Created by Borna Noureddin on 2017-12-20.
//  Copyright © 2017 Borna Noureddin. All rights reserved.
//

#ifndef GLESRenderer_hpp
#define GLESRenderer_hpp

#include <stdlib.h>

#include <OpenGLES/ES3/gl.h>
#include <vector>
#include <GLKit/GLKMathTypes.h>

class GLESRenderer
{
public:
    char* LoadShaderFile(const char* shaderFileName);
    GLuint LoadShader(GLenum type, const char* shaderSrc);
    GLuint LoadProgram(const char* vertShaderSrc, const char* fragShaderSrc);
    bool LoadOBJ(const char* path, std::vector<GLKVector3>& vertices, std::vector<GLKVector2>& uvs, std::vector<GLKVector3>& normals);

    int GenCube(float scale, float** vertices, float** normals, float** texCoords, int** indices);
    int GenQuad(float scale, float** vertices, float** normals, float** texCoords, int** indices);

};

#endif /* GLESRenderer_hpp */
