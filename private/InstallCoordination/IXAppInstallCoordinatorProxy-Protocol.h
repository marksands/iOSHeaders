//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class NSError;

@protocol IXAppInstallCoordinatorProxy <NSObject>
- (oneway void)_clientDelegate_didCancelWithError:(NSError *)arg1 client:(unsigned long long)arg2;
- (oneway void)_clientDelegate_didComplete;
- (oneway void)_clientDelegate_placeholderDidInstall;
- (oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
- (oneway void)_clientDelegate_didPause;
- (oneway void)_clientDelegate_didResume;
- (oneway void)_clientDelegate_didPrioritize;
@end

