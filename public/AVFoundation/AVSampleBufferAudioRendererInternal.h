//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMediaDataRequester, AVScheduledAudioParameters, AVWeakReference, NSError, NSString;

@interface AVSampleBufferAudioRendererInternal : NSObject
{
    NSString *audioOutputDeviceUniqueID;
    NSString *audioTimePitchAlgorithm;
    struct {
        struct OpaqueFigSimpleMutex *mutex;
        AVMediaDataRequester *requester;
    } mediaDataRequester;
    float rate;
    float volume;
    _Bool muted;
    AVScheduledAudioParameters *scheduledAudioParameters;
    struct OpaqueCMTimebase *readOnlyControlTimebase;
    AVWeakReference *weakReferenceToSynchronizer;
    AVWeakReference *weakReferenceToSelf;
    long long status;
    NSError *error;
    struct OpaqueFigSampleBufferAudioRenderer *figAudioRenderer;
}

@end

