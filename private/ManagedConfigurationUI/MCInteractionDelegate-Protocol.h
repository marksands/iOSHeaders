//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfigurationUI/NSObject-Protocol.h>

@class MCProfile, MCProfileConnection, NSArray, NSError, NSString;

@protocol MCInteractionDelegate <NSObject>
- (void)profileConnection:(MCProfileConnection *)arg1 didShowUserWarnings:(NSArray *)arg2;
- (void)profileConnectionDidRequestCurrentPasscode:(MCProfileConnection *)arg1;
- (void)profileConnection:(MCProfileConnection *)arg1 didFinishPreflightWithError:(NSError *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didFinishInstallationWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestUserInput:(NSArray *)arg2;

@optional
- (void)profileConnection:(MCProfileConnection *)arg1 didBeginInstallingNextProfile:(MCProfile *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didUpdateStatus:(NSString *)arg2;
@end

