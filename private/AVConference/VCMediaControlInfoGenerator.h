//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCMediaControlInfoDelegate-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate>
{
    unsigned int _type;
    struct __CFDictionary *_callbacksDict;
    NSMutableArray *_controlInfoPool;
    struct _opaque_pthread_mutex_t _controlInfoPoolLock;
}

@property(readonly) unsigned int type; // @synthesize type=_type;
- (void)disposeControlInfo:(id)arg1;
- (void *)newControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_475a354f *)arg3;
- (void *)newControlInfo;
- (id)newControlInfoFromPool;
- (void *)newMediaControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_475a354f *)arg3;
- (void *)newMediaControlInfo;
- (int)deregisterCallbacksWithContext:(void *)arg1;
- (int)registerFillBlobCallback:(CDUnknownFunctionPointerType)arg1 processBlobCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

