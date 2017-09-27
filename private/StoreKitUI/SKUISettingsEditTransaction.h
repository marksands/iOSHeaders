//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableSet, NSSet;

@interface SKUISettingsEditTransaction : NSObject
{
    NSSet *_all;
    CDUnknownBlockType _commitBlock;
    NSLock *_lock;
    NSMutableSet *_pending;
    _Bool _success;
    id <SKUISettingsEditTransactionDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUISettingsEditTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_settingDescription:(id)arg1 completedWithSuccess:(_Bool)arg2;
- (void)_finalizeCommit;
- (void)_delegateWillCommitTransaction;
- (void)_delegateWillBeginTransaction;
- (void)_delegateDidFailTransaction;
- (void)_delegateDidCompleteTransaction;
- (void)rollbackTransaction;
- (_Bool)isValid;
- (_Bool)isCommiting;
- (void)commitTransaction;
- (void)cancelTransaction;
- (void)beginTransaction;
- (id)initWithSettingDescriptions:(id)arg1;

@end

