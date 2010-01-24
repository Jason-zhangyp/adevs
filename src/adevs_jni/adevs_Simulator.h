/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class adevs_Simulator */

#ifndef _Included_adevs_Simulator
#define _Included_adevs_Simulator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     adevs_Simulator
 * Method:    createCppSimulator
 * Signature: (Ladevs/Devs;)J
 */
JNIEXPORT jlong JNICALL Java_adevs_Simulator_createCppSimulator
  (JNIEnv *, jobject, jobject);

/*
 * Class:     adevs_Simulator
 * Method:    nextEventTime
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_adevs_Simulator_nextEventTime
  (JNIEnv *, jobject, jlong);

/*
 * Class:     adevs_Simulator
 * Method:    execNextEvent
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_adevs_Simulator_execNextEvent
  (JNIEnv *, jobject, jlong);

/*
 * Class:     adevs_Simulator
 * Method:    execUntil
 * Signature: (DJ)V
 */
JNIEXPORT void JNICALL Java_adevs_Simulator_execUntil
  (JNIEnv *, jobject, jdouble, jlong);

/*
 * Class:     adevs_Simulator
 * Method:    computeNextOutput
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_adevs_Simulator_computeNextOutput
  (JNIEnv *, jobject, jlong);

/*
 * Class:     adevs_Simulator
 * Method:    computeNextState
 * Signature: (Ljava/util/Collection;DJ)V
 */
JNIEXPORT void JNICALL Java_adevs_Simulator_computeNextState
  (JNIEnv *, jobject, jobject, jdouble, jlong);

/*
 * Class:     adevs_Simulator
 * Method:    addEventListener
 * Signature: (Ladevs/EventListener;J)V
 */
JNIEXPORT void JNICALL Java_adevs_Simulator_addEventListener
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     adevs_Simulator
 * Method:    removeEventListener
 * Signature: (Ladevs/EventListener;J)V
 */
JNIEXPORT void JNICALL Java_adevs_Simulator_removeEventListener
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     adevs_Simulator
 * Method:    destroyCppSimulator
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_adevs_Simulator_destroyCppSimulator
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif