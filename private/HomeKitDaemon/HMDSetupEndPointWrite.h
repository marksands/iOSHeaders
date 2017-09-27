//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraTLVBase.h>

#import "HMDCameraTLVCreateParse.h"
#import "NSSecureCoding.h"

@class HMDEndPointAddress, HMDSRTPParameters, NSUUID;

@interface HMDSetupEndPointWrite : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding>
{
    NSUUID *_sessionID;
    HMDEndPointAddress *_address;
    HMDSRTPParameters *_videoSrtpParameters;
    HMDSRTPParameters *_audioSrtpParameters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDSRTPParameters *audioSrtpParameters; // @synthesize audioSrtpParameters=_audioSrtpParameters;
@property(readonly, copy, nonatomic) HMDSRTPParameters *videoSrtpParameters; // @synthesize videoSrtpParameters=_videoSrtpParameters;
@property(readonly, copy, nonatomic) HMDEndPointAddress *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVDataOnFailure;
- (_Bool)_parseFromTLVDataOnSuccess;
- (_Bool)_parseFromTLVDataImpl;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4;

@end

