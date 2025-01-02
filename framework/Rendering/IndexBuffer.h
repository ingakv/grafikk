#ifndef INDEXBUFFER_H_
#define INDEXBUFFER_H_

#include <glad/glad.h>
#include "BufferLayout.h"

class IndexBuffer {
public:
    // Constructor. Initializes the class with a data buffer and its size.
    // Note: The buffer will be bound upon construction, and the size is
    // specified in the number of elements, not bytes.
    IndexBuffer(GLuint *indices, GLsizei count, const BufferLayout& layout);
    ~IndexBuffer();

    // Bind the vertex buffer.
    void Bind() const;

    // Unbind the vertex buffer.
    void Unbind() const;

    // Get the number of elements.
    inline GLuint GetCount() const { return Count; }

private:
    GLuint IndexBufferID;
    GLuint Count;
    BufferLayout Layout;
};


#endif // INDEXBUFFER_H_
