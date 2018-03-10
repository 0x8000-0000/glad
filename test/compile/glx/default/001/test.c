/*
 * Full GLX
 *
 * GLAD: $GLAD --out-path=$tmp --api="glx,gl:core" c --loader
 * COMPILE: $GCC $test -o $tmp/test -I$tmp/include $tmp/src/glx.c -ldl -lX11
 * RUN: $tmp/test
 */

#include <glad/glx.h>

int main(void) {
    Display *display = NULL;
    (void) gladLoadGLXInternalLoader(display, 0);
    (void) gladUnloadGLXInternalLoader();
    return 0;
}
