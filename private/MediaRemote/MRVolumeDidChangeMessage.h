//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSString *outputDeviceUID;
@property(readonly, nonatomic) NSString *endpointUID;
@property(readonly, nonatomic) float volume;
- (id)initWithVolume:(float)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;

@end

