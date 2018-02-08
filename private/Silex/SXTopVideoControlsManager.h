//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoTransitionObserver.h"

@class NSString, SXTopVideoControlsViewController;

@interface SXTopVideoControlsManager : NSObject <SXVideoTransitionObserver>
{
    SXTopVideoControlsViewController *_controlsViewController;
    id <SXTopVideoControlsProviding> _controlsProvider;
    id <SXMediaSelectionOptionsAvailabilityObserverFactory> _mediaSelectionOptionsAvailabilityObserverFactory;
    id <SXVideoAdActionAvailabilityObserverFactory> _actionAvailabilityObserverFactory;
    id <SXVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SXVideoAdActionAvailabilityObserver> _actionAvailabilityObserver;
    id <SXMediaSelectionOptionsAvailabilityObserver> _mediaSelectionOptionsAvailabilityObserver;
    id <SXVideoLoadingStateObserving> _loadingStateObserver;
}

@property(retain, nonatomic) id <SXVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(retain, nonatomic) id <SXMediaSelectionOptionsAvailabilityObserver> mediaSelectionOptionsAvailabilityObserver; // @synthesize mediaSelectionOptionsAvailabilityObserver=_mediaSelectionOptionsAvailabilityObserver;
@property(retain, nonatomic) id <SXVideoAdActionAvailabilityObserver> actionAvailabilityObserver; // @synthesize actionAvailabilityObserver=_actionAvailabilityObserver;
@property(readonly, nonatomic) id <SXVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SXVideoAdActionAvailabilityObserverFactory> actionAvailabilityObserverFactory; // @synthesize actionAvailabilityObserverFactory=_actionAvailabilityObserverFactory;
@property(readonly, nonatomic) id <SXMediaSelectionOptionsAvailabilityObserverFactory> mediaSelectionOptionsAvailabilityObserverFactory; // @synthesize mediaSelectionOptionsAvailabilityObserverFactory=_mediaSelectionOptionsAvailabilityObserverFactory;
@property(readonly, nonatomic) id <SXTopVideoControlsProviding> controlsProvider; // @synthesize controlsProvider=_controlsProvider;
@property(readonly, nonatomic) SXTopVideoControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithTopControlsViewController:(id)arg1 topControlsProvider:(id)arg2 mediaSelectionOptionsAvailabilityObserverFactory:(id)arg3 actionAvailabilityObserverFactory:(id)arg4 loadingStateObserverFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
