//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISSingleton.h"

@class ISUniqueOperationContext, NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface ISUniqueOperationManager : NSObject <ISSingleton>
{
    ISUniqueOperationContext *_activeContext;
    NSMutableArray *_contexts;
    NSLock *_lock;
    NSMutableDictionary *_lockPool;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (id)_contextForOperation:(id)arg1;
- (id)_activeContext;
- (void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2;
- (void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2;
- (id)predecessorForKey:(id)arg1 operation:(id)arg2;
- (id)lockWithIdentifier:(id)arg1;
- (void)checkOutOperation:(id)arg1;
- (void)checkInOperation:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

