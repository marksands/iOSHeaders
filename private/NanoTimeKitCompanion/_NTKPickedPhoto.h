//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTKPhoto, PHAsset;

@interface _NTKPickedPhoto : NSObject
{
    NTKPhoto *_photo;
    PHAsset *_asset;
    unsigned long long _subsampleFactor;
}

@property(nonatomic) unsigned long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NTKPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;

@end

