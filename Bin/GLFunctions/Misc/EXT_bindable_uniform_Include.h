#define GLI_INCLUDE_EXT_BINDABLE_UNIFORM


enum Main {
  
  GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT   = 0x8DE2,
  GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT = 0x8DE3,
  GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT = 0x8DE4,
  GL_MAX_BINDABLE_UNIFORM_SIZE_EXT      = 0x8DED,
  GL_UNIFORM_BUFFER_EXT                 = 0x8DEE,
  GL_UNIFORM_BUFFER_BINDING_EXT         = 0x8DEF,

};

void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer);
GLint glGetUniformBufferSizeEXT(GLuint program, GLint location);

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location);