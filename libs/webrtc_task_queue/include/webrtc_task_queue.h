#ifndef RTC_BASE_WEBRTC_TASK_QUEUE_H_
#define RTC_BASE_WEBRTC_TASK_QUEUE_H_

#if __cplusplus
extern "C" {
#endif

void* WebRTCTaskQueueFactoryCreate();

void WebRTCTaskQueueFactoryDestroy(void* factory);

void* WebRTCTaskQueueCreate(void* factory, const char* name, int high_priority);

void WebRTCTaskQueueDestroy(void* queue);

void WebRTCTaskQueuePost(void* queue, void (*task)(void));

#if __cplusplus
}
#endif

#endif
