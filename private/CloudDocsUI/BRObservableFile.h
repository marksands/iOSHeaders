//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSObservable.h"

@class NSString, _BRObservableFilePresenter;

@interface BRObservableFile : NSObject <NSObservable>
{
    NSString *_key;
    _BRObservableFilePresenter *_presenter;
}

+ (id)observerForKey:(id)arg1 onFileURL:(id)arg2;
+ (void)_applicationDidBecomeActive:(id)arg1;
+ (void)_applicationWillResignActive:(id)arg1;
+ (void)_deregisterInstance:(id)arg1;
+ (void)_registerInstance:(id)arg1;
+ (void)_registerForApplicationLifecycleNotifications;
@property(retain, nonatomic) _BRObservableFilePresenter *presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)_presenterDidChange;
- (void)dealloc;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (id)initWithKey:(id)arg1 fileURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

