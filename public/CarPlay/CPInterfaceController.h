//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPTemplateDelegate.h"
#import "CPTemplateServiceClientInterface.h"

@class CPMapContentWindow, CPTemplate, NSArray, NSMutableArray, NSString, NSXPCConnection;

@interface CPInterfaceController : NSObject <CPTemplateDelegate, CPTemplateServiceClientInterface>
{
    id <CPInterfaceControllerDelegate> _delegate;
    CPTemplate *_rootTemplate;
    NSXPCConnection *_connection;
    id <CPTemplateProviding> _templateProvider;
    CPMapContentWindow *_carWindow;
    NSMutableArray *_templateStack;
    CPTemplate *_presentedTemplate;
}

+ (id)_templateClientInterface;
+ (void)_whitelistClassesForBaseTemplateProvider:(id)arg1;
+ (id)_templateProvidingInterface;
+ (void)load;
@property(retain, nonatomic) CPTemplate *presentedTemplate; // @synthesize presentedTemplate=_presentedTemplate;
@property(retain, nonatomic) NSMutableArray *templateStack; // @synthesize templateStack=_templateStack;
@property(retain, nonatomic) CPMapContentWindow *carWindow; // @synthesize carWindow=_carWindow;
@property(retain, nonatomic) id <CPTemplateProviding> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) CPTemplate *rootTemplate; // @synthesize rootTemplate=_rootTemplate;
@property(nonatomic) __weak id <CPInterfaceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (id)_activeMapTemplate;
- (void)templateIdentifierDidDismiss:(id)arg1;
- (void)templateIdentifierDidPop:(id)arg1;
- (void)clientExceededHierarchyDepthLimit;
- (void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (void)templateDidDismiss:(id)arg1;
- (void)templateDidDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)templateWillDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)templateDidAppear:(id)arg1 animated:(_Bool)arg2;
- (void)templateWillAppear:(id)arg1 animated:(_Bool)arg2;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)_listenerEndpointForSettings:(id)arg1;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_connectToListenerEndpoint:(id)arg1 withWindow:(id)arg2;
- (void)_handleDisconnectedCanvas:(id)arg1;
- (void)_handleConnectedCanvas:(id)arg1;
- (void)_canvasWillDisconnect:(id)arg1;
- (void)_canvasDidConnect:(id)arg1;
- (void)_presentAlertTemplate:(id)arg1 animated:(_Bool)arg2;
- (void)_presentActionSheetTemplate:(id)arg1 animated:(_Bool)arg2;
- (void)_pushSearchTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_pushListTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_pushMapTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_pushGridTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_pushVoiceControlTemplate:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *templates;
@property(readonly, nonatomic) CPTemplate *topTemplate;
- (void)dismissTemplateAnimated:(_Bool)arg1;
- (void)presentTemplate:(id)arg1 animated:(_Bool)arg2;
- (void)popToTemplate:(id)arg1 animated:(_Bool)arg2;
- (void)popTemplateAnimated:(_Bool)arg1;
- (void)popToRootTemplateAnimated:(_Bool)arg1;
- (void)_pushTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)pushTemplate:(id)arg1 animated:(_Bool)arg2;
- (void)setRootTemplate:(id)arg1 animated:(_Bool)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

