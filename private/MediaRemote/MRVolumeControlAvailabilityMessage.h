//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRVolumeControlAvailabilityMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _Bool volumeControlAvailable;
- (id)initWithAvailableFlag:(_Bool)arg1;

@end

