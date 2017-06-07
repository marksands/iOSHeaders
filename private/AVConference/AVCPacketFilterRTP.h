//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/AVCPacketFilter.h>

@interface AVCPacketFilterRTP : AVCPacketFilter
{
    unsigned int _SSRC;
    unsigned char _type;
}

- (_Bool)isMatchedPacket:(const void *)arg1 size:(int)arg2;
- (_Bool)isPayloadTypeMatched:(_Bool)arg1;
- (_Bool)isRTCPPayload:(unsigned short)arg1;
- (id)initWithIncomingSSRC:(unsigned int)arg1 acceptPacketType:(unsigned char)arg2;
- (id)initWithIncomingSSRC:(unsigned int)arg1 accecptPacketType:(unsigned char)arg2;

@end
