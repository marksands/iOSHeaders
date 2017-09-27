//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraTLVBase.h>

#import "HMDCameraTLVCreateParse.h"
#import "NSSecureCoding.h"

@class HMDReselectedVideoParameters, HMDSessionControl;

@interface HMDReselectedStreamConfigurationWrite : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding>
{
    HMDSessionControl *_sessionControl;
    HMDReselectedVideoParameters *_videoParameters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDReselectedVideoParameters *videoParameters; // @synthesize videoParameters=_videoParameters;
@property(readonly, copy, nonatomic) HMDSessionControl *sessionControl; // @synthesize sessionControl=_sessionControl;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (id)initWithSessionControl:(id)arg1;
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2;

@end

