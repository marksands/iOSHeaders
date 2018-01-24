//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADIDManager.h"

#import "BackgroundTaskDelegate.h"

@class NSString;

@interface ADIDManager (Private) <BackgroundTaskDelegate>
+ (void)initialize;
- (void)checkForLateReconcile;
- (void)setReconcileOperations:(id)arg1;
- (id)reconcileOperations;
- (_Bool)reconcileInProgress;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (_Bool)runTask:(id)arg1;
- (_Bool)scheduleReconciliation:(double)arg1;
- (void)cancelPendingReconcile;
- (void)handleAccountChange:(CDUnknownBlockType)arg1;
- (void)reconcile:(CDUnknownBlockType)arg1;
- (void)updateAccountData:(CDUnknownBlockType)arg1;
- (void)finishedReconciling:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)performOperationAfterReconcile:(CDUnknownBlockType)arg1;
- (id)saveAndNotifyIfNecessary;
- (id)save;
- (void)incrementMonthlyResetCount;
- (void)notifyActiveRecordChanged;
- (void)deleteRecords:(CDUnknownBlockType)arg1;
- (void)handleIDFAReset:(CDUnknownBlockType)arg1;
- (void)prepareForPushNotification;
- (void)setDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDSID:(id)arg1 withoutRestrictions:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

