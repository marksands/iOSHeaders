//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation
{
    CDUnknownBlockType _discoverUserInfosCompletionBlock;
    NSArray *_emailAddresses;
    NSArray *_userRecordIDs;
    NSMutableDictionary *_emailsToUserInfos;
    NSMutableDictionary *_userRecordIDsToUserInfos;
}

@property(retain, nonatomic) NSMutableDictionary *userRecordIDsToUserInfos; // @synthesize userRecordIDsToUserInfos=_userRecordIDsToUserInfos;
@property(retain, nonatomic) NSMutableDictionary *emailsToUserInfos; // @synthesize emailsToUserInfos=_emailsToUserInfos;
@property(copy, nonatomic) NSArray *userRecordIDs; // @synthesize userRecordIDs=_userRecordIDs;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
@property(copy, nonatomic) CDUnknownBlockType discoverUserInfosCompletionBlock; // @synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (id)init;

@end

