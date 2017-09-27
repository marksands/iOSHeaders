//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPStitchingSession : NSObject
{
    NSMutableDictionary *_originalItems;
    NSMutableDictionary *_stitchedItems;
    NSMutableDictionary *_stitchedPlaceholders;
    NSMutableDictionary *_deletedItems;
    _Bool _started;
}

- (void).cxx_destruct;
- (void)replacePlaceholderWith:(id)arg1;
- (void)operationCompletedWithItem:(id)arg1 error:(id)arg2;
- (void)operationCompletedWithItems:(id)arg1 error:(id)arg2;
- (void)deleteItems:(id)arg1;
- (void)transformItems:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)attachProgress:(id)arg1 toPlaceholder:(id)arg2;
- (id)createPlaceholderWithName:(id)arg1 isFolder:(_Bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProvider:(id)arg5;
- (id)createPlaceholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProvider:(id)arg4;
- (void)flush;
- (void)stop;
- (void)start;
- (id)init;

@end

