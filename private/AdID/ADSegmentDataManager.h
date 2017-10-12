//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSingleton.h"

@class NSNumber;

@interface ADSegmentDataManager : ADSingleton
{
    _Bool _segmentUpdateInProgress;
    NSNumber *_pendingJingleRequestToken;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSNumber *pendingJingleRequestToken; // @synthesize pendingJingleRequestToken=_pendingJingleRequestToken;
@property(nonatomic) _Bool segmentUpdateInProgress; // @synthesize segmentUpdateInProgress=_segmentUpdateInProgress;
- (void).cxx_destruct;
- (void)handleSegmentUpdateResponse:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendSegmentDataToAdPlatforms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldSendSegmentDataToAdPlatforms:(id)arg1;
- (void)populateAccountTypeFields:(id)arg1;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(_Bool)arg2 ignoreTimestamps:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retrieveSegmentDataIgnoringTimestamps:(id)arg1 forceSegments:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)checkTokenAndDSID:(id)arg1;
- (_Bool)shouldSendSegmentRequest:(id)arg1 ignoreTimestamps:(_Bool)arg2;
@property(readonly, nonatomic) _Bool segmentRetrievalInProgress;
- (id)init;

@end
