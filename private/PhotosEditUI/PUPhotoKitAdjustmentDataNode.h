//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXRunNode.h"

@class PHAdjustmentData, PHAsset;

@interface PUPhotoKitAdjustmentDataNode : PXRunNode
{
    int _requestID;
    PHAsset *_asset;
    PHAdjustmentData *_adjustmentData;
}

@property(readonly, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2;
- (void)run;
- (void)didCancel;
- (id)initWithAsset:(id)arg1;

@end
