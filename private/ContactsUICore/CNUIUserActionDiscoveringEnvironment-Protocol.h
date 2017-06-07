//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment;

@protocol CNUIUserActionDiscoveringEnvironment <NSObject>
@property(readonly, nonatomic) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher;
@property(readonly, nonatomic) id <CNSchedulerProvider> highLatencySchedulerProvider;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(readonly, nonatomic) id <CNCapabilities> capabilities;
@property(readonly, nonatomic) id <CNMCProfileConnection> profileConnection;
@property(readonly, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver;
@property(readonly, nonatomic) id <CNTUCallProviderManager> callProviderManager;
@property(readonly, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace;
- (id <CNUIUserActionDiscoveringEnvironment>)copyWithContactStore:(CNContactStore *)arg1;
@end

