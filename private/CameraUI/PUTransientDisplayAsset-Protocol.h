//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUDisplayAsset.h"

@class NSString, NSURL, UIImage;

@protocol PUTransientDisplayAsset <PUDisplayAsset>
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, nonatomic, getter=isHDR) _Bool HDR;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@end

