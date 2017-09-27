//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUStatusBarVisibilityHandling.h"

@class NSString;

@interface HUCCStatusBarVisibilityHandler : NSObject <HUStatusBarVisibilityHandling>
{
    id <CCUIControlCenterSystemAgent> _systemAgent;
    id <CCUIStatusBarHidingAssertion> _activeHidingAssertion;
}

@property(retain, nonatomic) id <CCUIStatusBarHidingAssertion> activeHidingAssertion; // @synthesize activeHidingAssertion=_activeHidingAssertion;
@property(readonly, nonatomic) id <CCUIControlCenterSystemAgent> systemAgent; // @synthesize systemAgent=_systemAgent;
- (void).cxx_destruct;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimationSettings:(id)arg2;
@property(readonly, nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden;
- (id)initWithCCSystemAgent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

