/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ami_iusb_FloppyRedir */

#ifndef _Included_com_ami_iusb_FloppyRedir
#define _Included_com_ami_iusb_FloppyRedir
#ifdef __cplusplus
extern "C" {
#endif
#undef com_ami_iusb_FloppyRedir_MIN_PRIORITY
#define com_ami_iusb_FloppyRedir_MIN_PRIORITY 1L
#undef com_ami_iusb_FloppyRedir_NORM_PRIORITY
#define com_ami_iusb_FloppyRedir_NORM_PRIORITY 5L
#undef com_ami_iusb_FloppyRedir_MAX_PRIORITY
#define com_ami_iusb_FloppyRedir_MAX_PRIORITY 10L
#undef com_ami_iusb_FloppyRedir_PORT
#define com_ami_iusb_FloppyRedir_PORT 5123L
#undef com_ami_iusb_FloppyRedir_START_LOCAL_IMAGE_REDIRECTION
#define com_ami_iusb_FloppyRedir_START_LOCAL_IMAGE_REDIRECTION 240L
#undef com_ami_iusb_FloppyRedir_DEVICE_REDIRECTION_ACK
#define com_ami_iusb_FloppyRedir_DEVICE_REDIRECTION_ACK 241L
#undef com_ami_iusb_FloppyRedir_CONNECTION_ACCEPTED
#define com_ami_iusb_FloppyRedir_CONNECTION_ACCEPTED 1L
#undef com_ami_iusb_FloppyRedir_CONNECTION_DENIED
#define com_ami_iusb_FloppyRedir_CONNECTION_DENIED 2L
#undef com_ami_iusb_FloppyRedir_MAX_READ_SECTORS
#define com_ami_iusb_FloppyRedir_MAX_READ_SECTORS 256L
#undef com_ami_iusb_FloppyRedir_MAX_READ_SIZE
#define com_ami_iusb_FloppyRedir_MAX_READ_SIZE 131072L
/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    listFloppyDrives
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_ami_iusb_FloppyRedir_listFloppyDrives
  (JNIEnv *, jobject);

/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    newFloppyReader
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_ami_iusb_FloppyRedir_newFloppyReader
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    deleteFloppyReader
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ami_iusb_FloppyRedir_deleteFloppyReader
  (JNIEnv *, jobject);

/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    openFloppy
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ami_iusb_FloppyRedir_openFloppy
  (JNIEnv *, jobject,  jbyteArray);

/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    closeFloppy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ami_iusb_FloppyRedir_closeFloppy
  (JNIEnv *, jobject);

/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    executeFloppySCSICmd
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ami_iusb_FloppyRedir_executeFloppySCSICmd
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ami_iusb_FloppyRedir_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    GetLEDStatus
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_com_ami_iusb_FloppyRedir_GetLEDStatus
  (JNIEnv *, jobject);


/*
 * Class:     com_ami_iusb_FloppyRedir
 * Method:    Getkeyboard Layout
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_com_ami_iusb_FloppyRedir__GetKeyboardName
  (JNIEnv *, jobject);
#ifdef __cplusplus
}
#endif
#endif