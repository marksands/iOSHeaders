//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVEndpoint.h>

@class MRAVConcreteOutputDevice, MRTransportExternalDevice, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MRAVConcreteEndpoint : MRAVEndpoint
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MRTransportExternalDevice *_externalDevice;
    MRAVConcreteOutputDevice *_designatedGroupLeader;
    NSString *_instanceIdentifier;
    _Bool _allowsRelayConnection;
    NSDictionary *_outsourcedExternalDeviceCache;
}

@property(copy, nonatomic) NSDictionary *outsourcedExternalDeviceCache; // @synthesize outsourcedExternalDeviceCache=_outsourcedExternalDeviceCache;
- (void).cxx_destruct;
- (void)_updateOutputContextInfo;
- (void)_onQueue_reloadExternalDevice;
- (void)_handleOutputContextDidChangeNotification:(id)arg1;
- (_Bool)isProxyGroupPlayer;
- (id)instanceIdentifier;
- (void)_onQueue_setDesignatedGroupLeader:(id)arg1;
@property(retain, nonatomic) MRAVConcreteOutputDevice *designatedGroupLeader;
- (void)_onQueue_setExternalDevice:(id)arg1;
@property(retain, nonatomic) MRTransportExternalDevice *externalDevice;
@property(copy, nonatomic) NSArray *outputDevices;
- (id)uniqueIdentifier;
- (id)outputDeviceForDistantDevice:(id)arg1;
- (void)dealloc;
- (id)initWithOutputDevices:(id)arg1 allowsRelayConnection:(_Bool)arg2;
- (id)initWithOutputDevices:(id)arg1;

@end

