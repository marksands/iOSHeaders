//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSMetricsEventFieldProvider.h"

@class NSString, SKUIViewElement;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider>
{
    long long _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property(readonly, nonatomic) SKUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic, setter=_setMetricsLocationPosition:) long long metricsLocationPosition; // @synthesize metricsLocationPosition=_metricsLocationPosition;
- (void).cxx_destruct;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)valueForMetricsField:(id)arg1;
@property(readonly, nonatomic) NSString *metricsElementName;
@property(readonly, nonatomic, getter=isMissingItemData) _Bool missingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

