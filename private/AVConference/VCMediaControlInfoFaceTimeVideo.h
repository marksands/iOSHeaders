//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo
{
    unsigned char _controlInfoCameraStatus;
    unsigned char _controlInfoLTRBits;
    unsigned int _controlInfoLTRTimestamp;
    unsigned char _controlInfoFEC[36];
    unsigned long long _controlInfoFECLength;
    unsigned int _controlInfoProbe;
    unsigned int _controlInfoVideoPacketSize;
    unsigned int _controlInfoVideoTimestamp;
    double _controlInfoVideoArrivalTime;
}

- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (_Bool)hasInfoType:(unsigned int)arg1;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_475a354f *)arg3;
- (int)handleOptionalControlInfo:(CDStruct_475a354f *)arg1;
- (id)description;
- (unsigned long long)serializedSize;

@end

