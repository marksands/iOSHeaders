//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSKQueuedObserverSet : NSObject
{
    int mChangeType;
    id mObserver;
    id mChangeSource;
    _Bool mIsClass;
}

+ (id)queuedObserverSetWithChangeType:(int)arg1 observer:(id)arg2 changeSource:(id)arg3 isClass:(_Bool)arg4;
- (void)dealloc;

@end

