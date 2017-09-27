//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVAppBasedStatusBarAppearanceController : NSObject
{
    _Bool _clientPrefersStatusBarHidden;
    id _statusBarHiddenObserver;
}

@property(nonatomic) _Bool clientPrefersStatusBarHidden; // @synthesize clientPrefersStatusBarHidden=_clientPrefersStatusBarHidden;
@property(retain, nonatomic) id statusBarHiddenObserver; // @synthesize statusBarHiddenObserver=_statusBarHiddenObserver;
- (void).cxx_destruct;
- (void)_stopObservingStatusBarHiddenIfNeeded;
- (void)_startObservingStatusBarHiddenIfNeeded;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)restoreClientPreference;
- (void)start;
- (id)init;

@end

