// �E�B���h�E�֘A�̏���
#include "Window.h"

//
// ���C���v���O����
//
int main()
{
  // �E�B���h�E���쐬����
  Window window("ggsample01");

  // �w�i�F���w�肷��
  glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

  // �E�B���h�E���J���Ă���ԌJ��Ԃ�
  while (window.shouldClose() == GL_FALSE)
  {
    // �E�B���h�E����������
    glClear(GL_COLOR_BUFFER_BIT);

    //
    // ������ OpenGL �ɂ��`����s��
    //

    // �J���[�o�b�t�@�����ւ��ăC�x���g�����o��
    window.swapBuffers();
  }
}
