//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetConnectionStateMessage : MRProtocolMessage
{
}

- (unsigned long long)encryptionType;
- (unsigned long long)type;
@property(readonly, nonatomic) unsigned int state;
- (id)initWithConnectionState:(unsigned int)arg1;

@end

