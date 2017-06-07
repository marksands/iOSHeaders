//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDVideoResolution, HMFOSTransaction, NSData;

@interface HMDCameraSnapshotData : HMFObject
{
    NSData *_snapshotData;
    HMFOSTransaction *_snapshotDataTrasaction;
    HMDVideoResolution *_videoResolution;
}

@property(readonly, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;
@property(readonly, nonatomic) HMFOSTransaction *snapshotDataTrasaction; // @synthesize snapshotDataTrasaction=_snapshotDataTrasaction;
@property(readonly, nonatomic) NSData *snapshotData; // @synthesize snapshotData=_snapshotData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2;
- (id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3;

@end

