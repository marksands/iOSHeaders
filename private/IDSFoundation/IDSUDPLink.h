//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSLink-Protocol.h>

@class IDSSockAddrWrapper, NSDictionary, NSString;
@protocol IDSLinkDelegate;

@interface IDSUDPLink : NSObject <IDSLink>
{
    int _socket;
    int _addressFamily;
    IDSSockAddrWrapper *_localAddress;
    IDSSockAddrWrapper *_destinationAddress;
    _Bool _hasFixedDestination;
    NSDictionary *_destinationAddressToDeviceIDMap;
    unsigned short _port;
    _Bool _wantsAWDL;
    _Bool _wantsWiFi;
    _Bool _wantsCellular;
    _Bool _allowsLinkLocal;
    _Bool _skipTransportThread;
    _Bool _needToConnect;
    _Bool _hasTemporaryError;
    _Bool _isInvalidated;
    double _lastDestinationSent;
    double _lastDestinationReceived;
    CDStruct_3b17df7f *_incomingPacketBuffer;
    unsigned long long _state;
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
    unsigned long long _previousBytesSent;
    unsigned long long _previousPacketsSent;
    unsigned long long _previousBytesReceived;
    unsigned long long _previousPacketsReceived;
    double _previousReportTime;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    id <IDSLinkDelegate> _delegate;
    id <IDSLinkDelegate> _alternateDelegate;
}

@property _Bool allowsLinkLocal; // @synthesize allowsLinkLocal=_allowsLinkLocal;
@property _Bool skipTransportThread; // @synthesize skipTransportThread=_skipTransportThread;
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) double lastDestinationReceived; // @synthesize lastDestinationReceived=_lastDestinationReceived;
@property double lastDestinationSent; // @synthesize lastDestinationSent=_lastDestinationSent;
@property(readonly) _Bool isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property(readonly) int socket; // @synthesize socket=_socket;
@property unsigned short port; // @synthesize port=_port;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (unsigned long long)sendPacketBuffer:(CDStruct_3b17df7f *)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_3b17df7f *)arg1 destination:(id)arg2 toDeviceID:(id)arg3;
- (unsigned long long)sendPacketBuffer:(CDStruct_3b17df7f *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (id)copyCurrentNetworkInterfaces;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(_Bool)arg2 wantsWiFi:(_Bool)arg3 wantsCellular:(_Bool)arg4;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(_Bool)arg2 wantsWiFi:(_Bool)arg3 wantsCellular:(_Bool)arg4 clientUUID:(unsigned char [16])arg5;
- (void)reconnectWithLocalAddress:(id)arg1;
- (_Bool)setDestinationAddressToDeviceIDMap:(id)arg1;
- (_Bool)setDestinationAddress:(id)arg1 isFixedDestination:(_Bool)arg2 fromAddress:(id)arg3;
- (void)invalidate;
- (void)removeSocket;
- (id)copyLinkStatsDict;
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (unsigned long long)_sendBytes:(const void *)arg1 length:(unsigned long long)arg2 localInterfaceIndex:(int)arg3 localAddress:(const struct sockaddr *)arg4 destinationAddress:(const struct sockaddr *)arg5 trafficClass:(unsigned short)arg6;
- (unsigned long long)_sendBytes:(const void *)arg1 length:(unsigned long long)arg2 destinationAddress:(const struct sockaddr *)arg3;
- (unsigned long long)_sendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)_processIncomingPacket;
- (void)dealloc;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

