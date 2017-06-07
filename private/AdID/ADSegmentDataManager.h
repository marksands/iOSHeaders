//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

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
- (void)sendSegmentDataToAdPlatforms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)populateAccountTypeFields:(id)arg1;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool segmentRetrievalInProgress;
- (id)init;

@end

