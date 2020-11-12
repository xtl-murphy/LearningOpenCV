
/**
 * Learning
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/8/30 0:36
 **/

#pragma once

#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp"

using namespace cv;

#define LOG_TURN_ON
#ifdef _WIN32
#ifdef LOG_TURN_ON
        #define LOGE(TAG, ...)  printf("%s : ", TAG) && \
                                printf("<%s %s> %s %s:%d INFO: ",__DATE__, __TIME__,__FUNCTION__,__FILE__,__LINE__) && \
                                printf(__VA_ARGS__) && \
                                printf("\n")
        #define LOGI(TAG, ...)  printf("%s : ", TAG) && \
                                printf("<%s %s> %s %s:%d INFO: ",__DATE__, __TIME__,__FUNCTION__,__FILE__,__LINE__) && \
                                printf(__VA_ARGS__) && \
                                printf("\n")
        #define LOGV(TAG, ...)  printf("%s : ", TAG) && \
                                printf("<%s %s> %s %s:%d INFO: ",__DATE__, __TIME__,__FUNCTION__,__FILE__,__LINE__) && \
                                printf(__VA_ARGS__) && \
                                printf("\n")
        #define LOGNOMSG(TAG, ...)  printf("%s : ", TAG) && \
                                    printf(__VA_ARGS__) && \
                                    printf("\n")
#else
#define LOGE(TAG, ...)
#define LOGE(TAG, ...)
#define LOGV(TAG, ...)
#define LOGNOMSG(TAG, ...)
#endif

#elif __ANDROID__
#ifdef LOG_TURN_ON
        #include <android/log.h>
        #define LOGI(TAG, ...)  __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
        #define LOGE(TAG, ...)  __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)
        #define LOGV(TAG, ...)  __android_log_print(ANDROID_LOG_VERBOSE, TAG, __VA_ARGS__)
        #define LOGNOMSG(TAG, ...) __android_log_print(ANDROID_LOG_VERBOSE, TAG, __VA_ARGS__)
    #else
        #define LOGE(TAG, ...)
        #define LOGE(TAG, ...)
        #define LOGV(TAG, ...)
        #define LOGNOMSG(TAG, ...)
    #endif
#else
    #ifdef LOG_TURN_ON
    #define LOGE(TAG, ...)  printf("%s : ", TAG) && \
                                    printf("<%s %s> %s %s:%d INFO: ",__DATE__, __TIME__,__FUNCTION__,__FILE__,__LINE__) && \
                                    printf(__VA_ARGS__) && \
                                    printf("\n")
    #define LOGI(TAG, ...)  printf("%s : ", TAG) && \
                                    printf("<%s %s> %s %s:%d INFO: ",__DATE__, __TIME__,__FUNCTION__,__FILE__,__LINE__) && \
                                    printf(__VA_ARGS__) && \
                                    printf("\n")
    #define LOGV(TAG, ...)  printf("%s : ", TAG) && \
                                    printf("<%s %s> %s %s:%d INFO: ",__DATE__, __TIME__,__FUNCTION__,__FILE__,__LINE__) && \
                                    printf(__VA_ARGS__) && \
                                    printf("\n")
    #define LOGNOMSG(TAG, ...)  printf("%s : ", TAG) && \
                                    printf(__VA_ARGS__) && \
                                    printf("\n")
    #else
    #define LOGE(TAG, ...)
    #define LOGE(TAG, ...)
    #define LOGV(TAG, ...)
    #define LOGNOMSG(TAG, ...)
    #endif
#endif

#include "Delta.hpp"