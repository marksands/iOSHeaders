//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface LocalAttachmentCleanUpSupport : NSObject
{
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)_dispatchCleanupAfterDelay:(long long)arg1;
- (void)_setTimerOnSource:(long long)arg1;
- (void)interruptNextScheduledCleanup;
- (void)scheduleNextCleanup;
- (void)cleanUpOrphanedFiles;
- (void)dealloc;
- (id)init;

@end

