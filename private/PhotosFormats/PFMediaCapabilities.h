//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PFMediaCapabilities : NSObject
{
    NSDictionary *_capabilitiesInformation;
}

+ (id)stringForSupport:(long long)arg1;
+ (id)capabilitiesInformationForCurrentDevice;
+ (id)legacyCapabilities;
+ (id)capabilitiesForCurrentDevice;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (id)testCapabilitiesNotSupportingHEVC;
@property(retain) NSDictionary *capabilitiesInformation; // @synthesize capabilitiesInformation=_capabilitiesInformation;
- (void).cxx_destruct;
- (long long)userDefaultsPeerOverrideValue;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (id)opaqueRepresentation;
- (long long)supportForAVAsset:(id)arg1;
- (long long)supportForFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (long long)supportForLivePhotoVersion:(id)arg1;
- (long long)supportForContainerTypeIdentifier:(id)arg1;
- (long long)supportForCodec:(unsigned int)arg1;
- (id)initWithOpaqueRepresentation:(id)arg1;

@end

