//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdAnalyticsProvider-Protocol.h>
#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/NUAdProvider-Protocol.h>

@class NSString, NUAdManagerConfiguration, NUAdStore;

@interface NUAdManager : NSObject <NUAdContextProvider, NUAdProvider, NUAdAnalyticsProvider>
{
    NUAdStore *_adStore;
    NUAdManagerConfiguration *_configuration;
}

@property(readonly, nonatomic) NUAdManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NUAdStore *adStore; // @synthesize adStore=_adStore;
- (void).cxx_destruct;
- (id)videoInTodayHeaderDefinition;
- (id)videoInTodayMidrollBodyDefinition;
- (id)videoInTodayMidrollRootDefinition;
- (id)prerollHeaderDefinition;
- (id)prerollBodyDefinition;
- (id)prerollRootDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)defaultArticleDefinition;
- (id)defaultBodyDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultRootDefinition;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3;
- (id)videoInTodayMidrollContextConstructor;
- (id)prerollContextConstructor;
- (id)interstitialContextConstructor;
- (id)inArticleContextConstructor;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3;
- (id)adWithIdentifier:(id)arg1;
- (void)bannerViewDidUnload:(id)arg1;
- (void)bannerViewDidLoad:(id)arg1;
- (void)videoInTodayMidrollForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)prerollForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)interstitialViewForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

