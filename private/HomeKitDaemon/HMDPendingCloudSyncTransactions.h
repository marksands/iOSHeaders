//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDHomeManager, NSArray, NSMutableArray;

@interface HMDPendingCloudSyncTransactions : HMFObject
{
    _Bool _uploadInProgress;
    NSMutableArray *_pendingReasonsSaved;
    NSMutableArray *_deltaReasonsSaved;
    HMDHomeManager *_homeManager;
}

+ (id)convertSaveReasonToTransationReason:(id)arg1;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSMutableArray *deltaReasonsSaved; // @synthesize deltaReasonsSaved=_deltaReasonsSaved;
@property(retain, nonatomic) NSMutableArray *pendingReasonsSaved; // @synthesize pendingReasonsSaved=_pendingReasonsSaved;
@property(nonatomic) _Bool uploadInProgress; // @synthesize uploadInProgress=_uploadInProgress;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allReasonsSaved;
@property(readonly, nonatomic) NSArray *reasonsSaved;
- (void)loadReasonsSaved:(id)arg1;
- (void)_addReasonSaved:(id)arg1 information:(id)arg2;
- (void)addReasonSaved:(id)arg1 information:(id)arg2;
- (void)stopUploadAndResume;
- (void)stopUploadAndClean;
- (void)startUpload;
- (void)reset;
- (id)initWithHomeManager:(id)arg1;
- (id)init;

@end

