--- ./usr/include/fcntl.h
+++ ./usr/include/fcntl.h
@@ -54,7 +54,7 @@
 #define DN_MULTISHOT 0x80000000
 #define AT_FDCWD - 100
 #define AT_SYMLINK_NOFOLLOW 0x100
-#define AT_EACCESS 0x200
+#define AT_EACCESS 0
 #define AT_REMOVEDIR 0x200
 #define AT_SYMLINK_FOLLOW 0x400
 #define AT_NO_AUTOMOUNT 0x800
