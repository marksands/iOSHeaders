//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVGestureRecognizerManager.h"
#import "SVVideoTransitionObserver.h"

@class NSMutableSet, NSString;

@interface SVGestureRecognizerManager : NSObject <SVGestureRecognizerManager, SVVideoTransitionObserver>
{
    NSMutableSet *_gestureRecognizers;
    id <SVGestureRecognizerViewProviding> _viewProvider;
}

@property(readonly, nonatomic) id <SVGestureRecognizerViewProviding> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(readonly, nonatomic) NSMutableSet *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
- (void).cxx_destruct;
- (void)setupGestureRecognizers;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (id)initWithViewProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

