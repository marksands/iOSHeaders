//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIME/MFObservable.h>

@class MFQueue, NSLock;

__attribute__((visibility("hidden")))
@interface _MFReplayObservable : MFObservable
{
    NSLock *_lock;
    MFObservable *_observable;
    MFQueue *_queue;
}

- (void)_enqueue:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 count:(unsigned long long)arg2;
- (void)dealloc;

@end

