//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTestManager_TestsInterface.h"
#import "XCUIRemoteAXInterface.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface XCTRunnerDaemonSession : NSObject <XCTestManager_TestsInterface, XCUIRemoteAXInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <XCTUIApplicationMonitor> _applicationMonitor;
    id <XCUIAXNotificationHandling> _accessibilityClient;
    NSXPCConnection *_connection;
    unsigned long long _daemonProtocolVersion;
    NSMutableDictionary *_invalidationHandlers;
}

+ (id)sharedSession;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property id <XCUIAXNotificationHandling> accessibilityClient; // @synthesize accessibilityClient=_accessibilityClient;
@property id <XCTUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(retain) NSMutableDictionary *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)requestBundleIDForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSiriEnabledStatus:(CDUnknownBlockType)arg1;
- (void)enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;
- (void)setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestScreenshotWithReply:(CDUnknownBlockType)arg1;
- (void)sendString:(id)arg1 maximumFrequency:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getDeviceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestElementAtPoint:(struct CGPoint)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchAttributes:(id)arg1 forElement:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
@property(readonly) _Bool axNotificationsIncludeElement;
@property(readonly) _Bool useLegacySnapshotPath;
- (void)terminateApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAccessibilityAction:(int)arg1 onElement:(id)arg2 value:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)unregisterForAccessibilityNotification:(long long)arg1 registrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerForAccessibilityNotification:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startMonitoringApplicationWithBundleID:(id)arg1;
- (void)requestSpindumpWithSpecification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 formatUTI:(id)arg3 compressionQuality:(double)arg4 imageFormatRespected:(_Bool *)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestIDEConnectionTransportForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_XCT_receivedAccessibilityNotification:(long long)arg1 fromElement:(id)arg2 payload:(id)arg3;
- (void)_XCT_receivedAccessibilityNotification:(long long)arg1 withPayload:(id)arg2;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
@property(readonly) _Bool useLegacyScreenshotPath;
@property(readonly) _Bool usePointTransformationsForFrameConversions;
@property(readonly) _Bool useLegacyEventCoordinateTransformationPath;
@property unsigned long long daemonProtocolVersion;
@property(readonly) id <XCTestManager_ManagerInterface> daemonProxy;
- (void)unregisterInvalidationHandlerWithToken:(id)arg1;
- (id)registerInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)_reportInvalidation;
- (id)initWithConnection:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

