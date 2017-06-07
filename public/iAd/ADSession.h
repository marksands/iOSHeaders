//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/ADAdSheetConnectionDelegate-Protocol.h>
#import <iAd/ADAdSheetProxyDelegate-Protocol.h>
#import <iAd/ADSession_RPC-Protocol.h>

@class ADAdSheetConnection, NSMutableArray, NSString;
@protocol ADSSession_RPC;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate>
{
    _Bool _applicationCanReceiveBackgroundAds;
    _Bool _appExtensionCanReceiveAds;
    int _classicUnavailableToken;
    NSMutableArray *_adSpaces;
    ADAdSheetConnection *_connection;
    NSString *_bundleIdentifier;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int classicUnavailableToken; // @synthesize classicUnavailableToken=_classicUnavailableToken;
@property(retain, nonatomic) NSMutableArray *adSpaces; // @synthesize adSpaces=_adSpaces;
@property(nonatomic) _Bool appExtensionCanReceiveAds; // @synthesize appExtensionCanReceiveAds=_appExtensionCanReceiveAds;
@property(nonatomic) _Bool applicationCanReceiveBackgroundAds; // @synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds;
- (void)_appDidBecomeActive;
- (void)prepareForAdRequests;
- (void)segmentDataForSignedInUserWithBlock:(CDUnknownBlockType)arg1;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)determineAppInstallAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reportAdSubscriptionEvent:(id)arg1;
- (void)reportPrerollRequest;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 forAdSpaceWithIdentifier:(id)arg3;
- (void)_remote_openURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_setRequiresFastVisibilityTestOnly:(_Bool)arg1 withIdentifier:(id)arg2;
- (void)_remote_closeClientAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 identifier:(id)arg2;
- (void)_remote_contentProxyURLDidChange:(id)arg1;
- (id)_adSpaceForIdentifier:(id)arg1;
- (void)unregisterAdSpace:(id)arg1;
- (void)registerAdSpace:(id)arg1;
- (void)adSheetConnectionInterrupted;
- (void)adSheetConnectionLost;
- (void)adSheetConnectionEstablished;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ADSSession_RPC> rpcProxy;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (_Bool)shouldConnectToAdSheet;
- (id)additionalAdSheetLaunchOptions;
- (_Bool)shouldLaunchAdSheet;
- (id)_linkedOnVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
