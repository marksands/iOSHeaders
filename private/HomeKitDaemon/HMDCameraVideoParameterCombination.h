//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDCameraVideoTier, HMDH264Level, HMDH264Profile;

@interface HMDCameraVideoParameterCombination : HMFObject
{
    HMDH264Profile *_profile;
    HMDH264Level *_level;
    HMDCameraVideoTier *_videoTier;
}

@property(readonly, nonatomic) HMDCameraVideoTier *videoTier; // @synthesize videoTier=_videoTier;
@property(readonly, nonatomic) HMDH264Level *level; // @synthesize level=_level;
@property(readonly, nonatomic) HMDH264Profile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithProfile:(id)arg1 level:(id)arg2 videoTier:(id)arg3;

@end

