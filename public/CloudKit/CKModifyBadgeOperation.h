//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation
{
    CDUnknownBlockType _modifyBadgeCompletionBlock;
    unsigned long long _badgeValue;
}

@property(nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)performCKOperation;
- (_Bool)hasCKOperationCallbacksSet;
@property(copy, nonatomic) CDUnknownBlockType modifyBadgeCompletionBlock; // @synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (id)init;

@end

