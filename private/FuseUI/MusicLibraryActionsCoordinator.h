//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface MusicLibraryActionsCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _backgroundTaskIdentifier;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)_postInvalidationNotification;
- (id)libraryActionPendingValuesForIdentifierCollection:(id)arg1;
- (void)addOperations:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

