//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSOperationQueue;

@interface CMDeviceOrientationManagerInternal : NSObject
{
    struct os_unfair_lock_s fSampleLock;
    struct Dispatcher *fDeviceOrientationDispatcher;
    CDUnknownBlockType fDeviceOrientationHandler;
    NSOperationQueue *fDeviceOrientationQueue;
    NSObject<OS_dispatch_semaphore> *fDeviceOrientationSemaphore;
    _Bool fDidSignalSemaphore;
    int fOrientationCallbackMode;
    _Bool fEnableOrientationNotification;
    Sample_edc72402 fLatestDeviceOrientationSample;
    Sample_edc72402 fLastSignificantOrientationSample;
}

- (void)dealloc;
- (id)init;

@end

