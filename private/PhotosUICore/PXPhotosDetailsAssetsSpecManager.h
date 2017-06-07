//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager
{
    unsigned long long _detailsOptions;
}

@property(readonly, nonatomic) unsigned long long detailsOptions; // @synthesize detailsOptions=_detailsOptions;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (Class)specClass;

// Remaining properties
@property(readonly, nonatomic) PXPhotosDetailsAssetsSpec *spec; // @dynamic spec;

@end
