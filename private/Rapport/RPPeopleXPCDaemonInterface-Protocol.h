//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class RPPeopleClient, RPPeopleDiscovery;

@protocol RPPeopleXPCDaemonInterface
- (void)xpcPeopleDiscoveryActivate:(RPPeopleDiscovery *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcPeopleClientActivate:(RPPeopleClient *)arg1 completion:(void (^)(NSError *))arg2;
@end
