//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CARSessionCommandDelegate.h"

@class CARInputDeviceManager, CARSessionConfiguration, NSArray, NSNumber, NSString;

@interface CARSession : NSObject <CARSessionCommandDelegate>
{
    struct OpaqueFigEndpoint *_endpoint;
    _Bool _authenticated;
    CARSessionConfiguration *_configuration;
    CARInputDeviceManager *_inputDeviceManager;
    NSArray *_screenInfo;
    NSArray *_screenIDs;
}

@property(copy, nonatomic) NSArray *screenIDs; // @synthesize screenIDs=_screenIDs;
@property(copy, nonatomic) NSArray *screenInfo; // @synthesize screenInfo=_screenInfo;
@property(retain, nonatomic) CARInputDeviceManager *inputDeviceManager; // @synthesize inputDeviceManager=_inputDeviceManager;
@property(readonly, nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) CARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)_fetchAuthenticationStatus;
- (id)_endpointValueForKey:(struct __CFString *)arg1;
- (struct OpaqueFigEndpoint *)endpoint;
@property(readonly, copy) NSString *description;
- (void)takeScreenForConnection;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (_Bool)recognizingSpeech;
- (void)releaseTurnByTurnOwnership;
- (void)requestTurnByTurnOwnership;
- (unsigned long long)navigationOwner;
- (_Bool)ownsScreen;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestCarUI;
- (id)MFiCertificateSerialNumber;
@property(readonly, copy, nonatomic) NSNumber *electronicTollCollectionAvailable;
@property(readonly, copy, nonatomic) NSNumber *limitUserInterfaces;
@property(readonly, copy, nonatomic) NSNumber *nightMode;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

