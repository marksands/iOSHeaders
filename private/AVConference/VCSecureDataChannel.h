//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VCTransport;
@protocol VCSecureDataChannelDelegate;

__attribute__((visibility("hidden")))
@interface VCSecureDataChannel : NSObject
{
    unsigned int _localCallID;
    unsigned int _remoteCallID;
    struct _tls_record_s *tlsRecord;
    id _delegate;
    VCTransport *_transport;
    unsigned long long _maxUDPPayloadSize;
}

@property(nonatomic) unsigned long long maxUDPPayloadSize; // @synthesize maxUDPPayloadSize=_maxUDPPayloadSize;
@property(readonly, nonatomic) long long maxUnencryptedDataSize;
@property(readonly, nonatomic) long long maxEncryptedDataSize;
@property(nonatomic) id <VCSecureDataChannelDelegate> delegate;
- (int)convertData:(id)arg1 toEncryptedData:(id *)arg2 encrypted:(_Bool)arg3;
- (int)convertEncryptedData:(id)arg1 toData:(id *)arg2 encrypted:(_Bool)arg3;
- (int)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(_Bool)arg3;
- (int)setupWithSharedSecret:(id)arg1 isCaller:(_Bool)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithLocalCallID:(unsigned int)arg1 remoteCallID:(unsigned int)arg2 isCaller:(_Bool)arg3 sharedSecret:(id)arg4 error:(id *)arg5;

@end

