//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface TUMomentDescriptor : NSObject <NSSecureCoding>
{
    NSString *_photosAssetIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *photosAssetIdentifier; // @synthesize photosAssetIdentifier=_photosAssetIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSURL *photoViewingAppURL;
- (id)init;
- (id)initWithPhotosAppAssetIdentifier:(id)arg1;

@end

